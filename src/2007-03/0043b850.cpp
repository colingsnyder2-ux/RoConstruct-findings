// roc 2007-03 0043b850  unit: seg_00430000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043b850
//
// 0043b850  8b442404             mov eax, dword ptr [esp + 4]
// 0043b854  d900                 fld dword ptr [eax]
// 0043b856  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043b85a  d901                 fld dword ptr [ecx]
// 0043b85c  dae9                 fucompp 
// 0043b85e  dfe0                 fnstsw ax
// 0043b860  f6c444               test ah, 0x44
// 0043b863  7a08                 jp 0x43b86d
// 0043b865  b801000000           mov eax, 1
// 0043b86a  c20800               ret 8
// 0043b86d  33c0                 xor eax, eax
// 0043b86f  c20800               ret 8
// copied from an identical function in another client (function ?equal@MVCXTPPropertyGridItemXItem@ns_ROCX000006@@QBE_NPBM0@Z)

namespace ns_ROCX000006 {
struct MVCXTPPropertyGridItemXItem
{
    bool equal(const float* a, const float* b) const;
};

bool MVCXTPPropertyGridItemXItem::equal(const float* a, const float* b) const
{
    return *a == *b;
}
}
