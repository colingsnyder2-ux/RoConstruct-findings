// roc 2009-12 0052ea10  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052ea10
//
// 0052ea10  8bc1                 mov eax, ecx
// 0052ea12  8d4811               lea ecx, [eax + 0x11]
// 0052ea15  c70000000000         mov dword ptr [eax], 0
// 0052ea1b  c7400400200000       mov dword ptr [eax + 4], 0x2000
// 0052ea22  c7400800000000       mov dword ptr [eax + 8], 0
// 0052ea29  89480c               mov dword ptr [eax + 0xc], ecx
// 0052ea2c  c6401001             mov byte ptr [eax + 0x10], 1
// 0052ea30  c3                   ret 
// copied from an identical function in another client (function ??0S@ns_ROCX000011@@QAE@XZ)

namespace ns_ROCX000011 {
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
}
