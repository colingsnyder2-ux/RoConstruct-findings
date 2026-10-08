// from server: 89% by colin
// roc 2007-08 006a7600  unit: CXTPMenuBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7600
//
// 006a7600  56                   push esi
// 006a7601  8bf1                 mov esi, ecx
// 006a7603  8b06                 mov eax, dword ptr [esi]
// 006a7605  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 006a760b  ffd2                 call edx
// 006a760d  85c0                 test eax, eax
// 006a760f  7504                 jne 0x6a7615
// 006a7611  33c0                 xor eax, eax
// 006a7613  5e                   pop esi
// 006a7614  c3                   ret 
// 006a7615  8bce                 mov ecx, esi
// 006a7617  e844ffffff           call 0x6a7560
// 006a761c  85c0                 test eax, eax
// 006a761e  7514                 jne 0x6a7634
// 006a7620  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 006a7626  39413c               cmp dword ptr [ecx + 0x3c], eax
// 006a7629  7409                 je 0x6a7634
// 006a762b  e84048fdff           call 0x67be70
// 006a7630  85c0                 test eax, eax
// 006a7632  74dd                 je 0x6a7611
// 006a7634  b801000000           mov eax, 1
// 006a7639  5e                   pop esi
// 006a763a  c3                   ret 

struct CXTPMenuBar {
    int sub_6A7560();
    int sub_6A7600();
};

extern "C" int __stdcall sub_67BE70();

int CXTPMenuBar::sub_6A7600() {
    int (__stdcall *fn)(void);
    fn = *(int (__stdcall **)(void))((*(char **)this) + 0x178);
    if (fn() == 0)
        return 0;
    if (!sub_6A7560()) {
        int *p = *(int **)((char *)this + 0xf8);
        if (p[0xf] == 0)
            return 1;
        if (!sub_67BE70())
            return 0;
    }
    return 1;
}
