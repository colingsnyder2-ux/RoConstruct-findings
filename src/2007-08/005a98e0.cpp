// from server: 61% by colin
// roc 2007-08 005a98e0  unit: RBX::VHumanoid::?$SignalDesc  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a98e0
//
// 005a98e0  56                   push esi
// 005a98e1  8bf1                 mov esi, ecx
// 005a98e3  8b465c               mov eax, dword ptr [esi + 0x5c]
// 005a98e6  57                   push edi
// 005a98e7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a98eb  8d4e58               lea ecx, [esi + 0x58]
// 005a98ee  8d54240c             lea edx, [esp + 0xc]
// 005a98f2  52                   push edx
// 005a98f3  897c2410             mov dword ptr [esp + 0x10], edi
// 005a98f7  894718               mov dword ptr [edi + 0x18], eax
// 005a98fa  e8d1b3fcff           call 0x574cd0
// 005a98ff  89771c               mov dword ptr [edi + 0x1c], esi
// 005a9902  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005a9905  57                   push edi
// 005a9906  e8b59b0500           call 0x6034c0
// 005a990b  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005a990e  57                   push edi
// 005a990f  e8dc5b0500           call 0x5ff4f0
// 005a9914  5f                   pop edi
// 005a9915  5e                   pop esi
// 005a9916  c20400               ret 4

struct SignalDesc {
    void f(void* p);
};

extern "C" void __cdecl sub_574CD0();
extern "C" void __cdecl sub_6034C0();
extern "C" void __cdecl sub_5FF4F0();

void SignalDesc::f(void* p)
{
    int* pi = (int*)p;
    pi[6] = *(int*)((char*)this + 0x5c);
    sub_574CD0();
    pi[7] = (int)this;
    sub_6034C0();
    sub_5FF4F0();
}
