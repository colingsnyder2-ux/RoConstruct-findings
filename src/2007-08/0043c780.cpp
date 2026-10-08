// from server: 100% by colin
// roc 2007-08 0043c780  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043c780
//
// 0043c780  8b442404             mov eax, dword ptr [esp + 4]
// 0043c784  8b08                 mov ecx, dword ptr [eax]
// 0043c786  8b542408             mov edx, dword ptr [esp + 8]
// 0043c78a  33c0                 xor eax, eax
// 0043c78c  3b0a                 cmp ecx, dword ptr [edx]
// 0043c78e  0f94c0               sete al
// 0043c791  c20800               ret 8

struct HVCXTPPropertyGridItem
{
    int XItem;
};

bool __stdcall compareItems(HVCXTPPropertyGridItem* a, HVCXTPPropertyGridItem* b)
{
    return a->XItem == b->XItem;
}
