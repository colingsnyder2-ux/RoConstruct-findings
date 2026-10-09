// roc 2009-12 0040e390  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040e390
//
// 0040e390  8b442404             mov eax, dword ptr [esp + 4]
// 0040e394  8b4808               mov ecx, dword ptr [eax + 8]
// 0040e397  894810               mov dword ptr [eax + 0x10], ecx
// 0040e39a  33c0                 xor eax, eax
// 0040e39c  c20400               ret 4
// copied from an identical function in another client (function ?copyField@ns_ROCX00000b@@YGHPAUS@1@@Z)

namespace ns_ROCX00000b {
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
