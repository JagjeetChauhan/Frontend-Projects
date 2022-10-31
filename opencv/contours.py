from xml.dom import HierarchyRequestErr
import cv2 as cv

img = cv.imread('photo/cat.jpg')
cv.imshow('Cat', img)

gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray', gray)

# blur = cv.GaussianBlur(gray, (5,5), cv.BORDER_DEFAULT)
# cv.imshow('Blur', blur)

# canny = cv.Canny(blur, 125, 175)
# cv.imshow('Canny Edge', canny)

ret, thresh = cv.threshold(gray, 125, 125, cv.THRESH_BINARY)
cv.imshow('Thresh', thresh)

contours, Hierarchies = cv.findContours(thresh, cv.RETR_LIST, cv.CHAIN_APPROX_NONE)
print(f'{len(contours)} contour(s) found!!')
cv.waitKey(0)