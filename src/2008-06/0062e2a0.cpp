// from server: 100% by colin
// roc 2008-06 0062e2a0  unit: RBX::VDecal::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062e2a0
//
// 0062e2a0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0062e2a3  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0062e2a6  85c0                 test eax, eax
// 0062e2a8  7406                 je 0x62e2b0
// 0062e2aa  0584000000           add eax, 0x84
// 0062e2af  c3                   ret 
// 0062e2b0  b801000000           mov eax, 1
// 0062e2b5  840550f09600         test byte ptr [0x96f050], al
// 0062e2bb  751a                 jne 0x62e2d7
// 0062e2bd  d9ee                 fldz 
// 0062e2bf  090550f09600         or dword ptr [0x96f050], eax
// 0062e2c5  d91544f09600         fst dword ptr [0x96f044]
// 0062e2cb  d91548f09600         fst dword ptr [0x96f048]
// 0062e2d1  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0062e2d7  b844f09600           mov eax, 0x96f044
// 0062e2dc  c3                   ret 

struct Vector3 {
    float x, y, z;
    Vector3() : x(0.0f), y(0.0f), z(0.0f) {}
};

struct Object {
    char padding[0x84];
    Vector3 value;
};

struct Holder {
    char padding[0x2c];
    Object* object;
};

struct S {
    char padding[0x10];
    Holder* holder;
    const Vector3& f();
};

const Vector3& S::f()
{
    Object* object = holder->object;
    if (object)
        return object->value;

    static Vector3 zero;
    return zero;
}
