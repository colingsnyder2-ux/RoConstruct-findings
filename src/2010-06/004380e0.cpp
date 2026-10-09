// roc 2010-06 004380e0  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004380e0
//
// 004380e0  8b442404             mov eax, dword ptr [esp + 4]
// 004380e4  8b08                 mov ecx, dword ptr [eax]
// 004380e6  8b542408             mov edx, dword ptr [esp + 8]
// 004380ea  33c0                 xor eax, eax
// 004380ec  3b0a                 cmp ecx, dword ptr [edx]
// 004380ee  0f94c0               sete al
// 004380f1  c20800               ret 8
// copied from an identical function in another client (function ?compareItems@ns_ROCX000001@@YG_NPAUHVCXTPPropertyGridItem@1@0@Z)

namespace ns_ROCX000001 {
struct HVCXTPPropertyGridItem
{
    int XItem;
};

bool __stdcall compareItems(HVCXTPPropertyGridItem* a, HVCXTPPropertyGridItem* b)
{
    return a->XItem == b->XItem;
}
}
