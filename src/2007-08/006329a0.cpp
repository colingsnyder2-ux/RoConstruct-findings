// from server: 68% by colin
// roc 2007-08 006329a0  unit: CXTPCommandBarKeyboardTip  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006329a0
//
// 006329a0  56                   push esi
// 006329a1  57                   push edi
// 006329a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006329a6  85ff                 test edi, edi
// 006329a8  8bf1                 mov esi, ecx
// 006329aa  7425                 je 0x6329d1
// 006329ac  33d2                 xor edx, edx
// 006329ae  399684000000         cmp dword ptr [esi + 0x84], edx
// 006329b4  7e1b                 jle 0x6329d1
// 006329b6  52                   push edx
// 006329b7  8bce                 mov ecx, esi
// 006329b9  e852ffffff           call 0x632910
// 006329be  39b8d4000000         cmp dword ptr [eax + 0xd4], edi
// 006329c4  740d                 je 0x6329d3
// 006329c6  83c201               add edx, 1
// 006329c9  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 006329cf  7ce5                 jl 0x6329b6
// 006329d1  33c0                 xor eax, eax
// 006329d3  5f                   pop edi
// 006329d4  5e                   pop esi
// 006329d5  c20400               ret 4

struct CXTPCommandBarKeyboardTip {
    int FindTip(int);
    int Find(int);
    char pad[0x80];
    int m_nCount;
};

int CXTPCommandBarKeyboardTip::Find(int arg) {
    if (arg != 0) {
        int i = 0;
        if (m_nCount > 0) {
            do {
                CXTPCommandBarKeyboardTip* p = (CXTPCommandBarKeyboardTip*)FindTip(i);
                if (*(int*)((char*)p + 0xd4) == arg)
                    return (int)p;
                i++;
            } while (i < m_nCount);
        }
    }
    return 0;
}
