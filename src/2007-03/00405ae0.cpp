// roc 2007-03 00405ae0  unit: seg_00400000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00405ae0
//
// 00405ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00405ae4  8b4808               mov ecx, dword ptr [eax + 8]
// 00405ae7  894810               mov dword ptr [eax + 0x10], ecx
// 00405aea  33c0                 xor eax, eax
// 00405aec  c20400               ret 4
// copied from an identical function in another client (function ?copyField@ns_ROCX000015@@YGHPAUS@1@@Z)

namespace ns_ROCX000015 {
struct S {
    int m0;
    int m4;
    int m8;
    int mc;
    int m10;
};

int __stdcall copyField(S* s)
{
    s->m10 = s->m8;
    return 0;
}
}
