// from server: 100% by king_originala
// roc 2008-06 0062dda0  unit: RBX::GeometryService  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062dda0
//
// 0062dda0  56                   push esi
// 0062dda1  8bf1                 mov esi, ecx
// 0062dda3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062dda7  85c9                 test ecx, ecx
// 0062dda9  740b                 je 0x62ddb6
// 0062ddab  e8402de6ff           call 0x490af0
// 0062ddb0  898630010000         mov dword ptr [esi + 0x130], eax
// 0062ddb6  5e                   pop esi
// 0062ddb7  c20800               ret 8

struct Argument {
    int get();
};

struct S_func_0062dda0 {
    char pad0[304];
    int value;
    void f(int a1, Argument* a2);
};

void S_func_0062dda0::f(int a1, Argument* a2)
{
    if (a2)
        value = a2->get();
}
