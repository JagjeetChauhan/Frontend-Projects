import cv2 as cv 

img = cv.imread('photo/cat.jpg')
cv.imshow('Cat', img)

#Converting Image into grayscale
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray', gray)

#Blur
blur = cv.GaussianBlur(img, (3,3), cv.BORDER_DEFAULT)
cv.imshow('Blur', blur)

#Edge Cascade
canny = cv.Canny(blur, 125,175)
cv.imshow('Canny Edge', canny)

#Dilating the image
dilated = cv.dilate(canny, (3,3), iterations=1)
cv.imshow('Dilated', dilated)

#Eroding the image
eroded = cv.erode(dilated, (3,3), iterations=1)
cv.imshow('Eroded', eroded)

#Resize the image
resize = cv.resize(img, (500,500))
cv.imshow('Resized', resize)

#Cropping the image
cropped = img[50:200, 200:400]
cv.imshow('Cropped', cropped)

cv.waitKey(0)