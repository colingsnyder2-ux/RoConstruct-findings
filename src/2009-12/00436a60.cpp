// roc 2009-12 00436a60  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00436a60
//
// 00436a60  8b442404             mov eax, dword ptr [esp + 4]
// 00436a64  8b08                 mov ecx, dword ptr [eax]
// 00436a66  8b542408             mov edx, dword ptr [esp + 8]
// 00436a6a  33c0                 xor eax, eax
// 00436a6c  3b0a                 cmp ecx, dword ptr [edx]
// 00436a6e  0f94c0               sete al
// 00436a71  c20800               ret 8
// copied from an identical function in another client (function ?compareItems@ns_ROCX000005@@YG_NPAUHVCXTPPropertyGridItem@1@0@Z)

namespace ns_ROCX000005 {
struct HVCXTPPropertyGridItem
{
    int XItem;
};

bool __stdcall compareItems(HVCXTPPropertyGridItem* a, HVCXTPPropertyGridItem* b)
{
    return a->XItem == b->XItem;
}
}
