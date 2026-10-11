// from server: 100% by tester
// roc 2009-06 004d9610  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9610
//
// 004d9610  8bc1                 mov eax, ecx
// 004d9612  8d4811               lea ecx, [eax + 0x11]
// 004d9615  c70000000000         mov dword ptr [eax], 0
// 004d961b  c7400400200000       mov dword ptr [eax + 4], 0x2000
// 004d9622  c7400800000000       mov dword ptr [eax + 8], 0
// 004d9629  89480c               mov dword ptr [eax + 0xc], ecx
// 004d962c  c6401001             mov byte ptr [eax + 0x10], 1
// 004d9630  c3                   ret 

struct S
{
    int value0;
    int value4;
    int value8;
    int valueC;
    char value10;

    S();
};

S::S()
{
    value0 = 0;
    value4 = 0x2000;
    value8 = 0;
    valueC = (int)((char *)this + 0x11);
    value10 = 1;
}
