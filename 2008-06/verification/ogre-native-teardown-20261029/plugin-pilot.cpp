#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <cstdio>
#pragma comment(lib,"msvcprt.lib")
int main() {
    try {
        Ogre::LogManager logs;
        Ogre::Root root("", "", "");
        root.loadPlugin("rgdx.dll");
        Ogre::RenderSystemList* renderers=root.getAvailableRenderers();
        if (renderers->empty()) return 1;
        root.setRenderSystem(renderers->front());
        std::printf("Native plugin ready: %s\n",root.getRenderSystem()->getName().c_str());
        return 0;
    } catch (const Ogre::Exception& error) { std::puts(error.getFullDescription().c_str()); return 2; }
}
