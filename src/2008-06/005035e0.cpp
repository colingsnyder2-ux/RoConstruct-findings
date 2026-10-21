// from server: 95% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espclaude_8c849e30e8ebcb0f.cpp

// Candidate translation unit (score above; library headers required).
#include <windows.h>
#include "G3D/Array.h"
#include "G3D/CoordinateFrame.h"

namespace RBX {
namespace Render {

struct Object {
    virtual ~Object();
    virtual void release();
};

struct Link {
    Object* object;
    Link* next;
};

class atomic_count {
public:
    long operator--() { return InterlockedDecrement(&value_); }
private:
    long value_;
};

struct Control {
    virtual ~Control();
    atomic_count refs;
    Link* links;
};

class ControlPtr {
public:
    Control* p;
    ControlPtr() : p(0) {}
    __forceinline ~ControlPtr() { reset(); }
    __forceinline void reset()
    {
        if (p)
        {
            if (--p->refs == 0)
            {
                Link* link = p->links;
                while (link)
                {
                    link->object->release();
                    Link* tmp = link;
                    link = link->next;
                    delete tmp;
                }
                delete p;
            }
            p = 0;
        }
    }
};

class RenderSurface {
public:
    G3D::CoordinateFrame cframe;
    int flags;
    int a;
    float b;
    int c;
    ControlPtr shader;
    RenderSurface() : a(0), b(0), c(0) {}
    __forceinline ~RenderSurface() {}
};

void (G3D::Array<RenderSurface>::*forceResize)(int, bool) = &G3D::Array<RenderSurface>::resize;
}
}
