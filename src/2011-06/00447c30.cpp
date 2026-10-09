// roc 2011-06 00447c30  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00447c30
//
// 00447c30  8b442404             mov eax, dword ptr [esp + 4]
// 00447c34  8b08                 mov ecx, dword ptr [eax]
// 00447c36  8b542408             mov edx, dword ptr [esp + 8]
// 00447c3a  33c0                 xor eax, eax
// 00447c3c  3b0a                 cmp ecx, dword ptr [edx]
// 00447c3e  0f94c0               sete al
// 00447c41  c20800               ret 8
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
