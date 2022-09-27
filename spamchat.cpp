     import pyautogui
     import time
     
     message = "I love You"
     n = 20
     
     time.sleep(2)
     
     for i in range(n):
     	pyautogui.typewrite(message +"\m")
