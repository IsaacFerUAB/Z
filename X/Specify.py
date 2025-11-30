import subprocess

comando = "spicetify config"  #PONER AQUI EL COMANDO

p = subprocess.Popen(
    ["powershell.exe", "-Command", comando],
    stdin=subprocess.PIPE, #Permite que el programa pueda escribir en powershell
    stdout=subprocess.PIPE, #Permite capturar la salida para pasarla a variable
    stderr=subprocess.STDOUT, #Evita errores
    text=True, #Convierte la entrada/salida en texto (str) en lugar de bytes.
    bufsize=1 #Para que py lea la linea al instante de salir
)

for line in p.stdout:
    print(line, end="")  # Muestra todo lo que va saliendo del instalador

    # Detectamos la pregunta exacta que has mostrado en la captura
    if "[Y] Yes" in line or "(el valor predeterminado es \"Y\")" in line:
        print("-> Respondiendo automáticamente: Y")
        p.stdin.write("Y\n")
        p.stdin.flush()

# Esperamos al final del proceso
p.wait()
print("\nInstalación finalizada.")
