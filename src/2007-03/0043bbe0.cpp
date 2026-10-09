// roc 2007-03 0043bbe0  unit: seg_00430000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043bbe0
//
// 0043bbe0  8b442404             mov eax, dword ptr [esp + 4]
// 0043bbe4  8b08                 mov ecx, dword ptr [eax]
// 0043bbe6  8b542408             mov edx, dword ptr [esp + 8]
// 0043bbea  33c0                 xor eax, eax
// 0043bbec  3b0a                 cmp ecx, dword ptr [edx]
// 0043bbee  0f94c0               sete al
// 0043bbf1  c20800               ret 8
// copied from an identical function in another client (function ?compareItems@ns_ROCX000000@@YG_NPAUHVCXTPPropertyGridItem@1@0@Z)

namespace ns_ROCX000000 {
struct HVCXTPPropertyGridItem
{
    int XItem;
};

bool __stdcall compareItems(HVCXTPPropertyGridItem* a, HVCXTPPropertyGridItem* b)
{
    return a->XItem == b->XItem;
}
}
