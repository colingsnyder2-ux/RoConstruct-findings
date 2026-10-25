// from server: 100% by tester
// roc 2008-06 005a0240  unit: RBX::Workspace  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0240
//
// 005a0240  8bc1                 mov eax, ecx
// 005a0242  8d8888020000         lea ecx, [eax + 0x288]
// 005a0248  05d4020000           add eax, 0x2d4
// 005a024d  50                   push eax
// 005a024e  8b01                 mov eax, dword ptr [ecx]
// 005a0250  8b5004               mov edx, dword ptr [eax + 4]
// 005a0253  ffd2                 call edx
// 005a0255  8bc8                 mov ecx, eax
// 005a0257  e8a4e10200           call 0x5ce400
// 005a025c  c3                   ret 

namespace G3D {
class Rect2D
{
    float x0, y0, x1, y1;
};
}

namespace RBX {
class Camera
{
public:
    void zoomExtents(const G3D::Rect2D& viewPort);
};

class ICameraOwner
{
public:
    virtual ~ICameraOwner();
    virtual Camera* getCamera() const = 0;
};

class RootInstance
{
    char data[0x284];
public:
    virtual ~RootInstance();
};

class Workspace : public RootInstance, public ICameraOwner
{
    char gap28c[0x48];
    G3D::Rect2D viewPort;
public:
    virtual Camera* getCamera() const;
    void zoomToExtents();
};

void Workspace::zoomToExtents()
{
    getCamera()->zoomExtents(viewPort);
}
}
