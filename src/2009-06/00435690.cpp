// roc 2009-06 00435690  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00435690
//
// 00435690  8b442404             mov eax, dword ptr [esp + 4]
// 00435694  8b08                 mov ecx, dword ptr [eax]
// 00435696  8b542408             mov edx, dword ptr [esp + 8]
// 0043569a  33c0                 xor eax, eax
// 0043569c  3b0a                 cmp ecx, dword ptr [edx]
// 0043569e  0f94c0               sete al
// 004356a1  c20800               ret 8
// copied from an identical function in another client (function ?compareItems@ns_ROCX000007@@YG_NPAUHVCXTPPropertyGridItem@1@0@Z)

namespace ns_ROCX000007 {
struct HVCXTPPropertyGridItem
{
    int XItem;
};

bool __stdcall compareItems(HVCXTPPropertyGridItem* a, HVCXTPPropertyGridItem* b)
{
    return a->XItem == b->XItem;
}
}
