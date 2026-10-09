// roc 2007-03 0054b170  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054b170
//
// 0054b170  8a442404             mov al, byte ptr [esp + 4]
// 0054b174  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0054b177  f6d8                 neg al
// 0054b179  1bc0                 sbb eax, eax
// 0054b17b  83e010               and eax, 0x10
// 0054b17e  83e2ef               and edx, 0xffffffef
// 0054b181  0bc2                 or eax, edx
// 0054b183  894154               mov dword ptr [ecx + 0x54], eax
// 0054b186  c20400               ret 4
// copied from an identical function in another client (function ?setFlag@S@ns_ROCX000001@@QAEX_N@Z)

namespace ns_ROCX000001 {
struct S {
    char pad[0x54];
    int m54;
    void setFlag(bool b);
};

void S::setFlag(bool b)
{
    m54 = (m54 & ~0x10) | (b ? 0x10 : 0);
}
}
