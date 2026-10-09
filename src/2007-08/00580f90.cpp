// from DeepSeek/server: 100% by colin
// roc 2007-08 00580f90  unit: RBX::Accoutrement  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580f90
//
// 00580f90  56                   push esi
// 00580f91  8b742408             mov esi, dword ptr [esp + 8]
// 00580f95  6a01                 push 1
// 00580f97  56                   push esi
// 00580f98  81c100010000         add ecx, 0x100
// 00580f9e  e89d86f8ff           call 0x509640
// 00580fa3  8bc6                 mov eax, esi
// 00580fa5  5e                   pop esi
// 00580fa6  c20400               ret 4

struct Sub {
    int method(int a, int b);
};

struct Accoutrement {
    char pad[0x100];
    Sub sub;
    int func(int value);
};

int Accoutrement::func(int value) {
    sub.method(value, 1);
    return value;
}
