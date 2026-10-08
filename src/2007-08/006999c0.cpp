// from server: 100% by colin
// roc 2007-08 006999c0  unit: CXTPPropertyGridItemConstraints  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006999c0
//
// 006999c0  53                   push ebx
// 006999c1  56                   push esi
// 006999c2  57                   push edi
// 006999c3  8bf9                 mov edi, ecx
// 006999c5  33f6                 xor esi, esi
// 006999c7  397728               cmp dword ptr [edi + 0x28], esi
// 006999ca  7e19                 jle 0x6999e5
// 006999cc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006999d0  56                   push esi
// 006999d1  8bcf                 mov ecx, edi
// 006999d3  e848f8ffff           call 0x699220
// 006999d8  3b5824               cmp ebx, dword ptr [eax + 0x24]
// 006999db  7411                 je 0x6999ee
// 006999dd  83c601               add esi, 1
// 006999e0  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006999e3  7ceb                 jl 0x6999d0
// 006999e5  5f                   pop edi
// 006999e6  5e                   pop esi
// 006999e7  83c8ff               or eax, 0xffffffff
// 006999ea  5b                   pop ebx
// 006999eb  c20400               ret 4
// 006999ee  5f                   pop edi
// 006999ef  8bc6                 mov eax, esi
// 006999f1  5e                   pop esi
// 006999f2  5b                   pop ebx
// 006999f3  c20400               ret 4

struct CXTPPropertyGridItemConstraints {
    char pad0[0x28];
    int m_count;
    int GetItemIndex(int index);
    int FindItem(int value);
};

int CXTPPropertyGridItemConstraints::FindItem(int value)
{
    int i = 0;
    if (m_count > 0) {
        do {
            int item = GetItemIndex(i);
            if (value == *(int*)((char*)item + 0x24))
                return i;
            ++i;
        } while (i < m_count);
    }
    return -1;
}
