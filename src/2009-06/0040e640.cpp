// roc 2009-06 0040e640  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e640
//
// 0040e640  8b442404             mov eax, dword ptr [esp + 4]
// 0040e644  8b4808               mov ecx, dword ptr [eax + 8]
// 0040e647  894810               mov dword ptr [eax + 0x10], ecx
// 0040e64a  33c0                 xor eax, eax
// 0040e64c  c20400               ret 4
// copied from an identical function in another client (function ?copyField@ns_ROCX00007a@@YGHPAUS@1@@Z)

namespace ns_ROCX00007a {
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
