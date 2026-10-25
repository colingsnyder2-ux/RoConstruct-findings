// from server: 100% by king_originala
// roc 2008-06 00640f30  unit: RBX::AxisMoveTool  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640f30
//
// 00640f30  83ec60               sub esp, 0x60
// 00640f33  56                   push esi
// 00640f34  8bf1                 mov esi, ecx
// 00640f36  e825faecff           call 0x510960
// 00640f3b  d900                 fld dword ptr [eax]
// 00640f3d  d95c241c             fstp dword ptr [esp + 0x1c]
// 00640f41  d94004               fld dword ptr [eax + 4]
// 00640f44  d95c2420             fstp dword ptr [esp + 0x20]
// 00640f48  d94008               fld dword ptr [eax + 8]
// 00640f4b  d95c2424             fstp dword ptr [esp + 0x24]
// 00640f4f  e80cfaecff           call 0x510960
// 00640f54  d900                 fld dword ptr [eax]
// 00640f56  8d4efc               lea ecx, [esi - 4]
// 00640f59  d9e0                 fchs 
// 00640f5b  d95c2428             fstp dword ptr [esp + 0x28]
// 00640f5f  d94004               fld dword ptr [eax + 4]
// 00640f62  d9e0                 fchs 
// 00640f64  d95c242c             fstp dword ptr [esp + 0x2c]
// 00640f68  d94008               fld dword ptr [eax + 8]
// 00640f6b  8d44241c             lea eax, [esp + 0x1c]
// 00640f6f  d9e0                 fchs 
// 00640f71  50                   push eax
// 00640f72  d95c2434             fstp dword ptr [esp + 0x34]
// 00640f76  e8c5fbffff           call 0x640b40
// 00640f7b  84c0                 test al, al
// 00640f7d  0f84af000000         je 0x641032
// 00640f83  d9442428             fld dword ptr [esp + 0x28]
// 00640f87  d844241c             fadd dword ptr [esp + 0x1c]
// 00640f8b  d944242c             fld dword ptr [esp + 0x2c]
// 00640f8f  d8442420             fadd dword ptr [esp + 0x20]
// 00640f93  d9442430             fld dword ptr [esp + 0x30]
// 00640f97  d8442424             fadd dword ptr [esp + 0x24]
// 00640f9b  d905ac9b8100         fld dword ptr [0x819bac]
// 00640fa1  dccb                 fmul st(3), st(0)
// 00640fa3  d9cb                 fxch st(3)
// 00640fa5  d95c2404             fstp dword ptr [esp + 4]
// 00640fa9  d9c9                 fxch st(1)
// 00640fab  d8ca                 fmul st(2)
// 00640fad  d95c2408             fstp dword ptr [esp + 8]
// 00640fb1  dec9                 fmulp st(1)
// 00640fb3  d95c240c             fstp dword ptr [esp + 0xc]
// 00640fb7  e8642eedff           call 0x513e20
// 00640fbc  50                   push eax
// 00640fbd  8d4c2438             lea ecx, [esp + 0x38]
// 00640fc1  e85a22edff           call 0x513220
// 00640fc6  d9442404             fld dword ptr [esp + 4]
// 00640fca  d95c2458             fstp dword ptr [esp + 0x58]
// 00640fce  8b7614               mov esi, dword ptr [esi + 0x14]
// 00640fd1  d9442408             fld dword ptr [esp + 8]
// 00640fd5  81c688020000         add esi, 0x288
// 00640fdb  d95c245c             fstp dword ptr [esp + 0x5c]
// 00640fdf  d944240c             fld dword ptr [esp + 0xc]
// 00640fe3  d95c2460             fstp dword ptr [esp + 0x60]
// 00640fe7  d9442428             fld dword ptr [esp + 0x28]
// 00640feb  d864241c             fsub dword ptr [esp + 0x1c]
// 00640fef  d95c2410             fstp dword ptr [esp + 0x10]
// 00640ff3  d944242c             fld dword ptr [esp + 0x2c]
// 00640ff7  d8642420             fsub dword ptr [esp + 0x20]
// 00640ffb  d95c2414             fstp dword ptr [esp + 0x14]
// 00640fff  d9442430             fld dword ptr [esp + 0x30]
// 00641003  d8642424             fsub dword ptr [esp + 0x24]
// 00641007  d95c2418             fstp dword ptr [esp + 0x18]
// 0064100b  e8a039edff           call 0x5149b0
// 00641010  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00641014  8b16                 mov edx, dword ptr [esi]
// 00641016  50                   push eax
// 00641017  8b4208               mov eax, dword ptr [edx + 8]
// 0064101a  51                   push ecx
// 0064101b  8bce                 mov ecx, esi
// 0064101d  ffd0                 call eax
// 0064101f  50                   push eax
// 00641020  8d4c2440             lea ecx, [esp + 0x40]
// 00641024  51                   push ecx
// 00641025  8d542420             lea edx, [esp + 0x20]
// 00641029  52                   push edx
// 0064102a  e8f16a0300           call 0x677b20
// 0064102f  83c414               add esp, 0x14
// 00641032  5e                   pop esi
// 00641033  83c460               add esp, 0x60
// 00641036  c20400               ret 4

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
    Matrix3(const Matrix3&);
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
};

struct Work {
    Vector3 midpoint;
    Vector3 difference;
    Vector3 first;
    Vector3 second;
};

extern const Vector3& __cdecl position();
extern const Matrix3& __cdecl identity();
extern const Vector3& __cdecl axis();

struct Controller {
    virtual void slot0();
    virtual void slot1();
    virtual void* transform();
};

extern void __cdecl apply(Vector3*, const Frame*, void*, void*, const Vector3&);

struct Owner {
    char padding[0x288];
    Controller controller;
};

struct Base {
    bool adjust(Vector3&);
};

struct Tool {
    char padding[0x14];
    Owner* owner;
    void update(void*);
};

void Tool::update(void* argument)
{
    Work w;

    const Vector3& a = position();
    w.first.x = a.x;
    w.first.y = a.y;
    w.first.z = a.z;

    const Vector3& b = position();
    w.second.x = -b.x;
    w.second.y = -b.y;
    w.second.z = -b.z;

    if (reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 4)->adjust(w.first)) {
        Vector3 sum = {
            w.second.x + w.first.x,
            w.second.y + w.first.y,
            w.second.z + w.first.z
        };

        w.midpoint.x = sum.x * 0.5f;
        w.midpoint.y = sum.y * 0.5f;
        w.midpoint.z = sum.z * 0.5f;

        Frame frame = {
            identity(),
            { w.midpoint.x, w.midpoint.y, w.midpoint.z }
        };

        Controller* controller = &owner->controller;

        w.difference.x = w.second.x - w.first.x;
        w.difference.y = w.second.y - w.first.y;
        w.difference.z = w.second.z - w.first.z;

        apply(&w.difference, &frame, controller->transform(), argument, axis());
    }
}
