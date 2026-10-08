// from server: 80% by colin
// roc 2007-08 004baba0  unit: RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004baba0
//
// 004baba0  8b5104               mov edx, dword ptr [ecx + 4]
// 004baba3  8b442404             mov eax, dword ptr [esp + 4]
// 004baba7  3bc2                 cmp eax, edx
// 004baba9  7325                 jae 0x4babd0
// 004babab  83c2ff               add edx, -1
// 004babae  3bc2                 cmp eax, edx
// 004babb0  731a                 jae 0x4babcc
// 004babb2  56                   push esi
// 004babb3  8b11                 mov edx, dword ptr [ecx]
// 004babb5  8b748204             mov esi, dword ptr [edx + eax*4 + 4]
// 004babb9  8d1482               lea edx, [edx + eax*4]
// 004babbc  8932                 mov dword ptr [edx], esi
// 004babbe  8b5104               mov edx, dword ptr [ecx + 4]
// 004babc1  83c001               add eax, 1
// 004babc4  83ea01               sub edx, 1
// 004babc7  3bc2                 cmp eax, edx
// 004babc9  72e8                 jb 0x4babb3
// 004babcb  5e                   pop esi
// 004babcc  834104ff             add dword ptr [ecx + 4], -1
// 004babd0  c20400               ret 4

struct RakPeer {
    int* data;
    unsigned int count;
    void removeAtIndex(unsigned int index);
};

void RakPeer::removeAtIndex(unsigned int index) {
    unsigned int n = count;
    if (index >= n) return;
    n = n - 1;
    if (index < n) {
        int* p = data;
        do {
            p[index] = p[index + 1];
            index = index + 1;
            n = count - 1;
        } while (index < n);
    }
    count = count - 1;
}
