# -*- coding: utf-8 -*-
"""
Created on Fri Oct 21 10:18:44 2022

@author: Lenovo
"""

import tkinter 
top = tkinter.Tk()
c= tkinter .Canvas(top,bg="blue",heigh=250,width=300)
cord=10,50,240,210
arc = c.create_arc(cord,start=0,extent=150,fill="red")
c.pack
top.mainloop()