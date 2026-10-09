// from server: 73% by colin
// roc 2007-08 006f6930  unit: CXTPPropertyGridInplaceEdit  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6930
//
// 006f6930  56                   push esi
// 006f6931  8bf1                 mov esi, ecx
// 006f6933  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 006f693a  743d                 je 0x6f6979
// 006f693c  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 006f6943  7434                 je 0x6f6979
// 006f6945  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006f694b  8b01                 mov eax, dword ptr [ecx]
// 006f694d  8b5058               mov edx, dword ptr [eax + 0x58]
// 006f6950  ffd2                 call edx
// 006f6952  85c0                 test eax, eax
// 006f6954  7523                 jne 0x6f6979
// 006f6956  8b06                 mov eax, dword ptr [esi]
// 006f6958  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 006f695e  6a01                 push 1
// 006f6960  6a01                 push 1
// 006f6962  8bce                 mov ecx, esi
// 006f6964  ffd2                 call edx
// 006f6966  85c0                 test eax, eax
// 006f6968  740f                 je 0x6f6979
// 006f696a  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 006f6970  e88f96f3ff           call 0x630004
// 006f6975  5e                   pop esi
// 006f6976  c20c00               ret 0xc
// 006f6979  8bce                 mov ecx, esi
// 006f697b  e8be98f3ff           call 0x63023e
// 006f6980  5e                   pop esi
// 006f6981  c20c00               ret 0xc

struct CXTPPropertyGridInplaceEdit {
    int field_0;
    char pad[0x98];
    int field_9c;
    int field_a0;
    int method_630004();
    int method_63023e();
    int method_0();
    int method_168(int, int);
};

int CXTPPropertyGridInplaceEdit::method_0()
{
    if (field_9c != 0 && field_a0 != 0) {
        int* p = (int*)field_a0;
        int (*fn)(void*) = (int (*)(void*))p[0x58 / 4];
        if (fn((void*)field_a0) == 0) {
            int (*fn2)(void*, int, int) = (int (*)(void*, int, int))((*(int**)this)[0x168 / 4]);
            if (fn2(this, 1, 1) != 0) {
                return ((CXTPPropertyGridInplaceEdit*)field_9c)->method_630004();
            }
        }
    }
    return method_63023e();
}
