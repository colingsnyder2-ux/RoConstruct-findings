// from server: 68% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_windownativesettingsdc9c75efec3e2fc058.cpp

// Candidate translation unit (score above; library headers required).
#define _CPPUNWIND 1
#include <afxwin.h>
#include <string>
struct Settings {
 int width,height,x,y;
 bool center;
 int rgbBits,alphaBits,depthBits,stencilBits,fsaaSamples;
 bool hardware,fullScreen,asynchronous,stereo;
 double lightSaturation;
 int refreshRate;
 bool resizable,framed,visible;
 std::string defaultIconFilename;
 Settings();
};
extern int defaultSamples;
extern void* __cdecl createWindow(const Settings&,HDC);
struct CRobloxWnd : CWnd {
 char gap[0x88-sizeof(CWnd)]; bool alpha;
 void attach(void*);
 void initialize(int,int);
};
void CRobloxWnd::initialize(int width,int height) {
 Settings settings;
 settings.width=width;settings.height=height;
 settings.stencilBits=8;settings.rgbBits=8;settings.depthBits=24;
 settings.alphaBits=alpha?8:0;settings.fsaaSamples=defaultSamples;
 CClientDC dc(this);
 RECT rect; ::GetClientRect(m_hWnd,&rect);
 void* w;
 try { w=createWindow(settings,dc.m_hDC); } catch(...) { throw; }
 try { attach(w); } catch(...) { throw; }
}
