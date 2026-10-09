// from server: 100% by colin
// roc 2007-08 005971c0  unit: RBX::Stats::VItem::?$BoundFuncDesc  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005971c0
//
// 005971c0  56                   push esi
// 005971c1  8bf1                 mov esi, ecx
// 005971c3  e8f838ecff           call 0x45aac0
// 005971c8  8b442408             mov eax, dword ptr [esp + 8]
// 005971cc  898610010000         mov dword ptr [esi + 0x110], eax
// 005971d2  c706cc0f7b00         mov dword ptr [esi], 0x7b0fcc
// 005971d8  c74604c40f7b00       mov dword ptr [esi + 4], 0x7b0fc4
// 005971df  c74610bc0f7b00       mov dword ptr [esi + 0x10], 0x7b0fbc
// 005971e6  c74614ac0f7b00       mov dword ptr [esi + 0x14], 0x7b0fac
// 005971ed  c7462c9c0f7b00       mov dword ptr [esi + 0x2c], 0x7b0f9c
// 005971f4  c746448c0f7b00       mov dword ptr [esi + 0x44], 0x7b0f8c
// 005971fb  c7465c7c0f7b00       mov dword ptr [esi + 0x5c], 0x7b0f7c
// 00597202  c746746c0f7b00       mov dword ptr [esi + 0x74], 0x7b0f6c
// 00597209  c7868c0000005c0f7b00 mov dword ptr [esi + 0x8c], 0x7b0f5c
// 00597213  8bc6                 mov eax, esi
// 00597215  5e                   pop esi
// 00597216  c20400               ret 4

struct S_func_005971c0 {
    char pad0[0x110];
    int m_x;
    int f(int);
};

extern "C" void __fastcall sub_0045aac0(void*);

int S_func_005971c0::f(int a)
{
    sub_0045aac0(this);
    m_x = a;
    *(int*)((char*)this + 0x00) = 0x7b0fcc;
    *(int*)((char*)this + 0x04) = 0x7b0fc4;
    *(int*)((char*)this + 0x10) = 0x7b0fbc;
    *(int*)((char*)this + 0x14) = 0x7b0fac;
    *(int*)((char*)this + 0x2c) = 0x7b0f9c;
    *(int*)((char*)this + 0x44) = 0x7b0f8c;
    *(int*)((char*)this + 0x5c) = 0x7b0f7c;
    *(int*)((char*)this + 0x74) = 0x7b0f6c;
    *(int*)((char*)this + 0x8c) = 0x7b0f5c;
    return (int)this;
}
