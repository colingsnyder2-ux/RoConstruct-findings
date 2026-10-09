// roc 2012-06 0045a330  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0045a330
//
// 0045a330  8b442404             mov eax, dword ptr [esp + 4]
// 0045a334  8b08                 mov ecx, dword ptr [eax]
// 0045a336  8b542408             mov edx, dword ptr [esp + 8]
// 0045a33a  33c0                 xor eax, eax
// 0045a33c  3b0a                 cmp ecx, dword ptr [edx]
// 0045a33e  0f94c0               sete al
// 0045a341  c20800               ret 8
// copied from an identical function in another client (function ?compareItems@ns_ROCX000008@@YG_NPAUHVCXTPPropertyGridItem@1@0@Z)

namespace ns_ROCX000008 {
struct HVCXTPPropertyGridItem
{
    int XItem;
};

bool __stdcall compareItems(HVCXTPPropertyGridItem* a, HVCXTPPropertyGridItem* b)
{
    return a->XItem == b->XItem;
}
}
