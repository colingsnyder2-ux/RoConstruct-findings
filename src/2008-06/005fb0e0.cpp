// from server: 100% by king_originala
// roc 2008-06 005fb0e0  unit: RBX::Kernel  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb0e0
//
// 005fb0e0  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005fb0e3  56                   push esi
// 005fb0e4  8b742408             mov esi, dword ptr [esp + 8]
// 005fb0e8  56                   push esi
// 005fb0e9  e8a2feffff           call 0x5faf90
// 005fb0ee  e81de20400           call 0x649310
// 005fb0f3  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb0f6  5e                   pop esi
// 005fb0f7  85c0                 test eax, eax
// 005fb0f9  7406                 je 0x5fb101
// 005fb0fb  d95804               fstp dword ptr [eax + 4]
// 005fb0fe  c20400               ret 4
// 005fb101  ddd8                 fstp st(0)
// 005fb103  c20400               ret 4

struct Value {
    int index;
    float value;
};

struct Argument {
    char padding[44];
    Value* target;
};

struct Receiver {
    void resize(Argument* argument);
};

extern "C" float __cdecl infinity();

struct S {
    char padding[16];
    Receiver* receiver;
    void f(Argument* argument);
};

void S::f(Argument* argument)
{
    receiver->resize(argument);
    double value = infinity();
    if (argument->target)
        argument->target->value = value;
}
