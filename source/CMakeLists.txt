SET(WT_PROJECT_SOURCE  Index.cpp )

SET(WT_PROJECT_TARGET index.wt)

ADD_EXECUTABLE(${WT_PROJECT_TARGET} ${WT_PROJECT_SOURCE})

TARGET_LINK_LIBRARIES(${WT_PROJECT_TARGET} ${WT_CONNECTOR} wt)

INCLUDE_DIRECTORIES(/usr/local/include/Wt)


#COPY ALL js RESOURCE FILES
file(GLOB MY_JS
        "assets/js/*.js"
        )
file(COPY ${MY_JS} DESTINATION "js/")

#COPY ALL css RESOURCE FILES
file(GLOB MY_CSS
        "assets/css/*.css"
        )
file(COPY ${MY_CSS} DESTINATION "css/")


#COPY ALL FONT RESOURCE FILES
file(GLOB MY_PUBLIC_FONTS
        "assets/font/roboto/*.ttf"
        )
file(COPY ${MY_PUBLIC_FONTS} DESTINATION "font/roboto/")


#COPY ALL Views
file(GLOB MY_Views
        "views/*.xml"
        )
file(COPY ${MY_Views} DESTINATION "views/")


#COPY ALL Images
file(GLOB MY_Images
        "assets/images/*.svg"
        )
file(COPY ${MY_Images} DESTINATION "images/")
