// from server: 60% by colin
// roc 2007-08 004bad70  unit: RakPeer  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bad70
//
// 004bad70  8b4104               mov eax, dword ptr [ecx + 4]
// 004bad73  56                   push esi
// 004bad74  8b742408             mov esi, dword ptr [esp + 8]
// 004bad78  3bf0                 cmp esi, eax
// 004bad7a  7341                 jae 0x4badbd
// 004bad7c  83c0ff               add eax, -1
// 004bad7f  3bf0                 cmp esi, eax
// 004bad81  7336                 jae 0x4badb9
// 004bad83  8d1476               lea edx, [esi + esi*2]
// 004bad86  03d2                 add edx, edx
// 004bad88  03d2                 add edx, edx
// 004bad8a  57                   push edi
// 004bad8b  eb03                 jmp 0x4bad90
// 004bad8d  8d4900               lea ecx, [ecx]
// 004bad90  8b01                 mov eax, dword ptr [ecx]
// 004bad92  8b7c100c             mov edi, dword ptr [eax + edx + 0xc]
// 004bad96  03c2                 add eax, edx
// 004bad98  8938                 mov dword ptr [eax], edi
// 004bad9a  668b7810             mov di, word ptr [eax + 0x10]
// 004bad9e  66897804             mov word ptr [eax + 4], di
// 004bada2  8b7814               mov edi, dword ptr [eax + 0x14]
// 004bada5  897808               mov dword ptr [eax + 8], edi
// 004bada8  8b4104               mov eax, dword ptr [ecx + 4]
// 004badab  83c601               add esi, 1
// 004badae  83e801               sub eax, 1
// 004badb1  83c20c               add edx, 0xc
// 004badb4  3bf0                 cmp esi, eax
// 004badb6  72d8                 jb 0x4bad90
// 004badb8  5f                   pop edi
// 004badb9  834104ff             add dword ptr [ecx + 4], -1
// 004badbd  5e                   pop esi
// 004badbe  c20400               ret 4

struct RakPeer {
    int* data;
    unsigned int count;
    void remove(unsigned int index);
};

void RakPeer::remove(unsigned int index) {
    unsigned int n = count;
    if (index >= n) return;
    n -= 1;
    if (index >= n) {
        count = n;
        return;
    }
    unsigned int off = index * 12;
    for (;;) {
        int* base = data;
        int* dst = (int*)((char*)base + off);
        int* src = (int*)((char*)base + off + 12);
        dst[0] = src[0];
        *(short*)((char*)dst + 4) = *(short*)((char*)src + 4);
        *(int*)((char*)dst + 8) = *(int*)((char*)src + 8);
        index++;
        n = count - 1;
        off += 12;
        if (index >= n) break;
    }
    count = n;
}
