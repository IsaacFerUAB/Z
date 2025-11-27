import pygame

flags = pygame.FULLSCREEN

s = 1000
pygame.display.init()
#pygame.FULLSCREEN


flags = pygame.OPENGL | pygame.FULLSCREEN
window_surface = pygame.display.set_mode((1920, 1080),vsync=1)



axel = ('Goenji.png')
game = True

while game == True:
    for event in pygame.event.get():
        if event.type == pygame.KEYDOWN or event.type == pygame.KEYUP:
            if event.mod == pygame.KMOD_NONE:
                print('No modifier keys were in a pressed state when this event occurred.')
            else:
                if event.mod & pygame.KMOD_LSHIFT:
                    print('Left shift was in a pressed state when this event occurred.')
                if event.mod & pygame.KMOD_RSHIFT:
                    print('Right shift was in a pressed state when this event occurred.')
                if event.mod & pygame.KMOD_SHIFT:
                    print('Left shift or right shift or both were in a pressed state when this event occurred.')  

