// from server: 65% by colin
// roc 2007-08 00692d00  unit: CXTPStatusBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692d00
//
// 00692d00  56                   push esi
// 00692d01  8bf1                 mov esi, ecx
// 00692d03  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00692d09  85c0                 test eax, eax
// 00692d0b  7f07                 jg 0x692d14
// 00692d0d  83c8ff               or eax, 0xffffffff
// 00692d10  5e                   pop esi
// 00692d11  c20400               ret 4
// 00692d14  33d2                 xor edx, edx
// 00692d16  85c0                 test eax, eax
// 00692d18  57                   push edi
// 00692d19  7e1d                 jle 0x692d38
// 00692d1b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00692d1f  90                   nop 
// 00692d20  52                   push edx
// 00692d21  8bce                 mov ecx, esi
// 00692d23  e838ffffff           call 0x692c60
// 00692d28  397820               cmp dword ptr [eax + 0x20], edi
// 00692d2b  7413                 je 0x692d40
// 00692d2d  83c201               add edx, 1
// 00692d30  3b969c000000         cmp edx, dword ptr [esi + 0x9c]
// 00692d36  7ce8                 jl 0x692d20
// 00692d38  5f                   pop edi
// 00692d39  83c8ff               or eax, 0xffffffff
// 00692d3c  5e                   pop esi
// 00692d3d  c20400               ret 4
// 00692d40  5f                   pop edi
// 00692d41  8bc2                 mov eax, edx
// 00692d43  5e                   pop esi
// 00692d44  c20400               ret 4

struct CXTPStatusBar {
    int GetItem(int nIndex);
    int Find(int nID);
};

int CXTPStatusBar::Find(int nID) {
    int nCount = *(int*)((char*)this + 0x9c);
    if (nCount <= 0)
        return -1;
    int i = 0;
    if (nCount > 0) {
        do {
            int* pItem = (int*)GetItem(i);
            if (pItem[8] == nID)
                return i;
            i++;
        } while (i < *(int*)((char*)this + 0x9c));
    }
    return -1;
}
