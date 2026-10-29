#include "force_verified.h"
// Native G3D lighting/camera checks and a hidden WGL texture roundtrip.
#include <G3DAll.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#undef main  // SDL.h renames main to SDL_main

static bool failAssertion(const char* expression, const std::string& message,
                          const char* file, int line, bool&, bool)
{
    std::fprintf(stderr,"assertion %s: %s (%s:%d)\n",expression,message.c_str(),file,line);
    std::exit(90);
}

static int textureRoundtrip()
{
    WNDCLASSA wc = {};
    wc.lpfnWndProc=DefWindowProcA;
    wc.hInstance=GetModuleHandleA(NULL);
    wc.lpszClassName="RoConstructNativeGL";
    if (!RegisterClassA(&wc)) return 10;
    HWND window=CreateWindowA(wc.lpszClassName,"native GL",WS_OVERLAPPEDWINDOW,
                              0,0,64,64,NULL,NULL,wc.hInstance,NULL);
    if (!window) return 11;
    HDC dc=GetDC(window);
    PIXELFORMATDESCRIPTOR pfd = {};
    pfd.nSize=sizeof(pfd); pfd.nVersion=1;
    pfd.dwFlags=PFD_DRAW_TO_WINDOW|PFD_SUPPORT_OPENGL|PFD_DOUBLEBUFFER;
    pfd.iPixelType=PFD_TYPE_RGBA; pfd.cColorBits=24; pfd.cDepthBits=16;
    int format=ChoosePixelFormat(dc,&pfd);
    if (!format || !SetPixelFormat(dc,format,&pfd)) return 12;
    HGLRC context=wglCreateContext(dc);
    if (!context || !wglMakeCurrent(dc,context)) return 13;
    G3D::GLCaps::loadExtensions(NULL);
    int result=0;
    {
        G3D::uint8 pixels[8*8*3];
        for (int i=0;i<8*8*3;++i) pixels[i]=(G3D::uint8)(i*37);
        G3D::TextureRef texture=G3D::Texture::fromMemory("native roundtrip",pixels,
            G3D::TextureFormat::RGB8,8,8,G3D::TextureFormat::RGB8,G3D::Texture::TILE,
            G3D::Texture::NEAREST_NO_MIPMAP,G3D::Texture::DIM_2D,G3D::Texture::DEPTH_NORMAL,1.0f);
        G3D::GImage image;
        texture->getImage(image,G3D::TextureFormat::RGB8);
        if (image.width!=8 || image.height!=8 || image.channels!=3 ||
            std::memcmp(image.byte(),pixels,sizeof(pixels))) result=14;
        if (glGetError()!=GL_NO_ERROR) result=15;
    }
    std::printf("hidden GL texture result=%d renderer=%s\n",result,glGetString(GL_RENDERER));
    wglMakeCurrent(NULL,NULL);
    wglDeleteContext(context);
    ReleaseDC(window,dc);
    DestroyWindow(window);
    UnregisterClassA(wc.lpszClassName,wc.hInstance);
    return result;
}

int main()
{
    int failures = 0;
    G3D::setAssertionHook(failAssertion);
    G3D::setFailureHook(failAssertion);
    G3D::LightingParameters noon(G3D::toSeconds(12, 0, 0, G3D::PM));
    if (!(noon.lightDirection.y < 0.0f || noon.lightDirection.y > 0.0f)) { std::printf("lighting\n"); ++failures; }
    G3D::GCamera camera;
    camera.setCoordinateFrame(G3D::CoordinateFrame(G3D::Vector3(0, 0, 10)));
    G3D::Ray ray = camera.worldRay(320, 240, G3D::Rect2D::xywh(0, 0, 640, 480));
    if (ray.direction.z > -0.99f) { std::printf("camera ray %g\n", ray.direction.z); ++failures; }
    int textureResult=textureRoundtrip();
    if (textureResult) return textureResult;
    std::printf("failures=%d\n", failures);
    return failures;
}
