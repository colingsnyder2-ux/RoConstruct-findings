// from server: 100% by tester
// roc 2008-06 005a8dd0  unit: RBX::ScriptContext  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8dd0
//
// 005a8dd0  8b442404             mov eax, dword ptr [esp + 4]
// 005a8dd4  56                   push esi
// 005a8dd5  50                   push eax
// 005a8dd6  8bf1                 mov esi, ecx
// 005a8dd8  e8832bfbff           call 0x55b960
// 005a8ddd  c706fc978100         mov dword ptr [esi], 0x8197fc
// 005a8de3  c74610f0978100       mov dword ptr [esi + 0x10], 0x8197f0
// 005a8dea  c74614e8978100       mov dword ptr [esi + 0x14], 0x8197e8
// 005a8df1  c74620e0978100       mov dword ptr [esi + 0x20], 0x8197e0
// 005a8df8  c74624d0978100       mov dword ptr [esi + 0x24], 0x8197d0
// 005a8dff  c74644c0978100       mov dword ptr [esi + 0x44], 0x8197c0
// 005a8e06  c74664b0978100       mov dword ptr [esi + 0x64], 0x8197b0
// 005a8e0d  c78684000000a0978100 mov dword ptr [esi + 0x84], 0x8197a0
// 005a8e17  c786a400000090978100 mov dword ptr [esi + 0xa4], 0x819790
// 005a8e21  c786c400000080978100 mov dword ptr [esi + 0xc4], 0x819780
// 005a8e2b  8bc6                 mov eax, esi
// 005a8e2d  5e                   pop esi
// 005a8e2e  c20400               ret 4

struct S {
    char pad0[0x10];
    char pad10[0x10];
    char pad20[0x10];
    char pad30[0x14];
    char pad44[0x20];
    char pad64[0x20];
    char pad84[0x20];
    char padA4[0x20];
    char padC4[4];
    S* ctor(int);
};

extern "C" void __stdcall sub_55B960(int);

S* S::ctor(int a) {
    sub_55B960(a);
    *(int*)((char*)this + 0x00) = 0x8310dc;
    *(int*)((char*)this + 0x10) = 0x8310cc;
    *(int*)((char*)this + 0x14) = 0x8310c4;
    *(int*)((char*)this + 0x20) = 0x8310bc;
    *(int*)((char*)this + 0x24) = 0x8310ac;
    *(int*)((char*)this + 0x44) = 0x83109c;
    *(int*)((char*)this + 0x64) = 0x83108c;
    *(int*)((char*)this + 0x84) = 0x83107c;
    *(int*)((char*)this + 0xa4) = 0x83106c;
    *(int*)((char*)this + 0xc4) = 0x83105c;
    return this;
}
