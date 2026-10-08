// from server: 77% by colin
// roc 2007-08 004a8d30  unit: RBX::Network::VClient::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8d30
//
// 004a8d30  83ec0c               sub esp, 0xc
// 004a8d33  d9ee                 fldz 
// 004a8d35  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8d39  8d0424               lea eax, [esp]
// 004a8d3c  d91424               fst dword ptr [esp]
// 004a8d3f  50                   push eax
// 004a8d40  d9542408             fst dword ptr [esp + 8]
// 004a8d44  51                   push ecx
// 004a8d45  d95c2410             fstp dword ptr [esp + 0x10]
// 004a8d49  e8127fffff           call 0x4a0c60
// 004a8d4e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a8d52  83c408               add esp, 8
// 004a8d55  8d1424               lea edx, [esp]
// 004a8d58  52                   push edx
// 004a8d59  e862f4ffff           call 0x4a81c0
// 004a8d5e  83c40c               add esp, 0xc
// 004a8d61  c3                   ret 

struct S {
    void f(int, int, int, int);
};

extern "C" void __cdecl sub_4A0C60(int, float*);
extern "C" void __cdecl sub_4A81C0(float*);

void S::f(int a, int b, int c, int d)
{
    float v[3];
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    sub_4A0C60(b, v);
    sub_4A81C0(v);
}
