// from server: 100% by king_originala
// roc 2008-06 0063afa0  unit: G3D::VCoordinateFrame::V?$Value::?$SignalDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063afa0
//
// 0063afa0  83ec10               sub esp, 0x10
// 0063afa3  85c9                 test ecx, ecx
// 0063afa5  7405                 je 0x63afac
// 0063afa7  8d4114               lea eax, [ecx + 0x14]
// 0063afaa  eb02                 jmp 0x63afae
// 0063afac  33c0                 xor eax, eax
// 0063afae  d98130010000         fld dword ptr [ecx + 0x130]
// 0063afb4  50                   push eax
// 0063afb5  d95c2408             fstp dword ptr [esp + 8]
// 0063afb9  d98134010000         fld dword ptr [ecx + 0x134]
// 0063afbf  d95c240c             fstp dword ptr [esp + 0xc]
// 0063afc3  d98138010000         fld dword ptr [ecx + 0x138]
// 0063afc9  b94cd29700           mov ecx, 0x97d24c
// 0063afce  d95c2410             fstp dword ptr [esp + 0x10]
// 0063afd2  e84906f3ff           call 0x56b620
// 0063afd7  85c0                 test eax, eax
// 0063afd9  7426                 je 0x63b001
// 0063afdb  d9442404             fld dword ptr [esp + 4]
// 0063afdf  83ec0c               sub esp, 0xc
// 0063afe2  8bcc                 mov ecx, esp
// 0063afe4  d919                 fstp dword ptr [ecx]
// 0063afe6  d9442414             fld dword ptr [esp + 0x14]
// 0063afea  d95904               fstp dword ptr [ecx + 4]
// 0063afed  d9442418             fld dword ptr [esp + 0x18]
// 0063aff1  d95908               fstp dword ptr [ecx + 8]
// 0063aff4  8d4c240f             lea ecx, [esp + 0xf]
// 0063aff8  51                   push ecx
// 0063aff9  8d4810               lea ecx, [eax + 0x10]
// 0063affc  e88fe4ffff           call 0x639490
// 0063b001  83c410               add esp, 0x10
// 0063b004  c20400               ret 4

struct Vector {
    float x, y, z;
    Vector(const Vector&);
};

inline Vector::Vector(const Vector& v)
    : x(v.x), y(v.y), z(v.z) {}

struct Result {};

struct Signal {
    Result invoke(Vector);
};

struct Object {
    char padding[16];
    Signal signal;
};

struct Base {};

struct Registry {
    Object* find(Base*);
};

extern Registry registry;

struct S {
    char padding0[20];
    Base base;
    char padding1[283];
    Vector position;

    void update(int);
};

void S::update(int)
{
    Base* key = this ? &base : 0;
    Vector value(position);
    Object* object = registry.find(key);
    if (object)
        object->signal.invoke(value);
}
