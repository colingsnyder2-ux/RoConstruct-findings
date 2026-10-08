// from server: 94% by colin
// roc 2007-08 00580fb0  unit: RBX::Accoutrement  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580fb0
//
// 00580fb0  56                   push esi
// 00580fb1  8b742408             mov esi, dword ptr [esp + 8]
// 00580fb5  6a00                 push 0
// 00580fb7  56                   push esi
// 00580fb8  81c100010000         add ecx, 0x100
// 00580fbe  e87d86f8ff           call 0x509640
// 00580fc3  8bc6                 mov eax, esi
// 00580fc5  5e                   pop esi
// 00580fc6  c20400               ret 4

struct S_func_00580fb0
{
    char pad[0x100];
    void* field_100;
    void* f(void* arg);
};

extern "C" void __stdcall sub_00509640(void* a, void* b, int c);

void* S_func_00580fb0::f(void* arg)
{
    sub_00509640(&field_100, arg, 0);
    return arg;
}
