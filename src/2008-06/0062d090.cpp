// from server: 100% by tester
// roc 2008-06 0062d090  unit: RBX::ForceField  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d090
//
// 0062d090  8b442404             mov eax, dword ptr [esp + 4]
// 0062d094  6a00                 push 0
// 0062d096  68b8819400           push 0x9481b8
// 0062d09b  687c909200           push 0x92907c
// 0062d0a0  6a00                 push 0
// 0062d0a2  50                   push eax
// 0062d0a3  e81e470700           call 0x6a17c6
// 0062d0a8  83c414               add esp, 0x14
// 0062d0ab  f7d8                 neg eax
// 0062d0ad  1bc0                 sbb eax, eax
// 0062d0af  40                   inc eax
// 0062d0b0  c20400               ret 4

struct S {
    bool f(int);
};

extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);

bool S::f(int a) {
    int r = sub_6A17C6(a, 0, 0x92907c, 0x9481b8, 0);
    return r == 0;
}
