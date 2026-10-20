// from server: 74% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.4.5-dll roc_espeon_textureloaderlifetimes8c70b6b6b9cb06d0.cpp

// Candidate translation unit (score above; library headers required).
#undef OGRE_NONCLIENT_BUILD
#include "OgreImage.h"
#include "OgreString.h"
#include <string.h>
extern int classify(const Ogre::String&);
extern Ogre::String resourcePath();
bool loadTexture(const Ogre::String& filename,Ogre::Image&image){
 const char*extensions[]={"png","jpg","gif","bmp","tif","tiff","pbm","pgm","tga","dds","xpm","jig","ico"};
 int i=0;do{
 const char*extension=extensions[i];unsigned length=strlen(extension);
 bool recognized=filename.substr(filename.length()-length-1).find(Ogre::String(".")+extension)!=Ogre::String::npos;
 if(recognized){bool success=true;try{Ogre::String group("General");image.load(filename,group);}catch(...){success=false;}return success;}
 }while(++i<13);
 if(classify(filename)==9){Ogre::String path=resourcePath();const char*text=filename.c_str();bool success=true;try{Ogre::String resolved=path+text;Ogre::String group("General");image.load(resolved,group);}catch(...){success=false;}return success;}
 return false;
}
