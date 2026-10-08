// from server: 100% by colin
// roc 2007-08 00668770  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668770
//
// 00668770  8b442404             mov eax, dword ptr [esp + 4]
// 00668774  83f83e               cmp eax, 0x3e
// 00668777  7718                 ja 0x668791
// 00668779  8b948164020000       mov edx, dword ptr [ecx + eax*4 + 0x264]
// 00668780  83faff               cmp edx, -1
// 00668783  750a                 jne 0x66878f
// 00668785  8b848168010000       mov eax, dword ptr [ecx + eax*4 + 0x168]
// 0066878c  c20400               ret 4
// 0066878f  8bc2                 mov eax, edx
// 00668791  c20400               ret 4

struct CXTTreeBase {
    int Get(int index);
};

int CXTTreeBase::Get(int index) {
    if ((unsigned)index > 0x3e)
        return index;
    int v = *(int*)((char*)this + index * 4 + 0x264);
    if (v == -1)
        return *(int*)((char*)this + index * 4 + 0x168);
    return v;
}
