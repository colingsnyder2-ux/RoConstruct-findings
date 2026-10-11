// from server: 100% by atomic.potato
// roc 2008-06 00585cc0  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585cc0
//
// 00585cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00585cc4  56                   push esi
// 00585cc5  50                   push eax
// 00585cc6  8bf1                 mov esi, ecx
// 00585cc8  e8935cfdff           call 0x55b960
// 00585ccd  c706dc108300         mov dword ptr [esi], 0x8310dc
// 00585cd3  c74610cc108300       mov dword ptr [esi + 0x10], 0x8310cc
// 00585cda  c74614c4108300       mov dword ptr [esi + 0x14], 0x8310c4
// 00585ce1  c74620bc108300       mov dword ptr [esi + 0x20], 0x8310bc
// 00585ce8  c74624ac108300       mov dword ptr [esi + 0x24], 0x8310ac
// 00585cef  c746449c108300       mov dword ptr [esi + 0x44], 0x83109c
// 00585cf6  c746648c108300       mov dword ptr [esi + 0x64], 0x83108c
// 00585cfd  c786840000007c108300 mov dword ptr [esi + 0x84], 0x83107c
// 00585d07  c786a40000006c108300 mov dword ptr [esi + 0xa4], 0x83106c
// 00585d11  c786c40000005c108300 mov dword ptr [esi + 0xc4], 0x83105c
// 00585d1b  8bc6                 mov eax, esi
// 00585d1d  5e                   pop esi
// 00585d1e  c20400               ret 4

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
