// from server: 100% by king_originala
// roc 2008-06 00584aa0  unit: RBX::ModelInstance  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584aa0
//
// 00584aa0  83ec18               sub esp, 0x18
// 00584aa3  8d0424               lea eax, [esp]
// 00584aa6  50                   push eax
// 00584aa7  81c128020000         add ecx, 0x228
// 00584aad  e88eebffff           call 0x583640
// 00584ab2  d90424               fld dword ptr [esp]
// 00584ab5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00584ab9  d918                 fstp dword ptr [eax]
// 00584abb  d9442404             fld dword ptr [esp + 4]
// 00584abf  d95804               fstp dword ptr [eax + 4]
// 00584ac2  d9442408             fld dword ptr [esp + 8]
// 00584ac6  d95808               fstp dword ptr [eax + 8]
// 00584ac9  d944240c             fld dword ptr [esp + 0xc]
// 00584acd  d9580c               fstp dword ptr [eax + 0xc]
// 00584ad0  d9442410             fld dword ptr [esp + 0x10]
// 00584ad4  d95810               fstp dword ptr [eax + 0x10]
// 00584ad7  d9442414             fld dword ptr [esp + 0x14]
// 00584adb  d95814               fstp dword ptr [eax + 0x14]
// 00584ade  83c418               add esp, 0x18
// 00584ae1  c20400               ret 4

struct Float6 {
    float a, b, c, d, e, f;
};

struct Value {
    void read(Float6* result);
};

struct ModelInstance {
    char padding[0x228];
    Value value;
    Float6* method(Float6* result);
};

Float6* ModelInstance::method(Float6* result) {
    Float6 temporary;
    value.read(&temporary);
    result->a = temporary.a;
    result->b = temporary.b;
    result->c = temporary.c;
    result->d = temporary.d;
    result->e = temporary.e;
    result->f = temporary.f;
    return result;
}
