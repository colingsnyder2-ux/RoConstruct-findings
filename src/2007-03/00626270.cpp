// roc 2007-03 00626270  unit: seg_00620000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00626270
//
// 00626270  56                   push esi
// 00626271  8bf1                 mov esi, ecx
// 00626273  e808edffff           call 0x624f80
// 00626278  8b442408             mov eax, dword ptr [esp + 8]
// 0062627c  8906                 mov dword ptr [esi], eax
// 0062627e  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00626285  8bc6                 mov eax, esi
// 00626287  5e                   pop esi
// 00626288  c20400               ret 4
// copied from an identical function in another client (function ?init@S@ns_ROCX00001a@@QAEPAU12@H@Z)

namespace ns_ROCX00001a {
struct S {
    int field_0;
    int pad0;
    int pad1;
    int field_c;
    S* init(int arg);
};

extern void __fastcall sub_00648640(void* self);

S* S::init(int arg)
{
    sub_00648640(this);
    field_0 = arg;
    field_c = 1;
    return this;
}
}
