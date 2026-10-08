// from server: 41% by colin
// roc 2007-08 004a8d00  unit: RBX::Network::VClient::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8d00
//
// 004a8d00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a8d04  83ec0c               sub esp, 0xc
// 004a8d07  8d0424               lea eax, [esp]
// 004a8d0a  50                   push eax
// 004a8d0b  51                   push ecx
// 004a8d0c  e84f7fffff           call 0x4a0c60
// 004a8d11  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a8d15  83c408               add esp, 8
// 004a8d18  8d1424               lea edx, [esp]
// 004a8d1b  52                   push edx
// 004a8d1c  e83ff4ffff           call 0x4a8160
// 004a8d21  83c40c               add esp, 0xc
// 004a8d24  c3                   ret 

struct S {
    void f(int, int);
};

extern void __cdecl func_004a0c60(void*, int);
extern void __cdecl func_004a8160(void*);

void S::f(int a, int b)
{
    char buf[12];
    func_004a0c60(buf, b);
    func_004a8160(buf);
}
