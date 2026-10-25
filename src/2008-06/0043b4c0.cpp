// from server: 100% by atomic.potato
// roc 2008-06 0043b4c0  unit: HVCXTPPropertyGridItem::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b4c0
//
// 0043b4c0  8b442404             mov eax, dword ptr [esp + 4]
// 0043b4c4  8b08                 mov ecx, dword ptr [eax]
// 0043b4c6  8b542408             mov edx, dword ptr [esp + 8]
// 0043b4ca  33c0                 xor eax, eax
// 0043b4cc  3b0a                 cmp ecx, dword ptr [edx]
// 0043b4ce  0f94c0               sete al
// 0043b4d1  c20800               ret 8

struct XItem
{
    static int __stdcall Equal(const void* a, const void* b);
};

int __stdcall XItem::Equal(const void* a, const void* b)
{
    return *(const int*)a == *(const int*)b;
}
