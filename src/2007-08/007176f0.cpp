// from server: 51% by colin
// roc 2007-08 007176f0  unit: CXTPRibbonControlTab  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007176f0
//
// 007176f0  56                   push esi
// 007176f1  8bf1                 mov esi, ecx
// 007176f3  8b8688feffff         mov eax, dword ptr [esi - 0x178]
// 007176f9  8b5074               mov edx, dword ptr [eax + 0x74]
// 007176fc  8d8e88feffff         lea ecx, [esi - 0x178]
// 00717702  ffd2                 call edx
// 00717704  85c0                 test eax, eax
// 00717706  7413                 je 0x71771b
// 00717708  8b4684               mov eax, dword ptr [esi - 0x7c]
// 0071770b  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 00717712  7407                 je 0x71771b
// 00717714  b801000000           mov eax, 1
// 00717719  5e                   pop esi
// 0071771a  c3                   ret 
// 0071771b  33c0                 xor eax, eax
// 0071771d  5e                   pop esi
// 0071771e  c3                   ret 

struct CXTPRibbonControlTab {
    bool IsSomething();
};

bool CXTPRibbonControlTab::IsSomething() {
    char* base = reinterpret_cast<char*>(this) - 0x178;
    int* vtable = *reinterpret_cast<int**>(base);
    int (*func)(void*) = reinterpret_cast<int (*)(void*)>(vtable[0x74 / 4]);
    if (func(base) != 0)
        return false;
    char* p = *reinterpret_cast<char**>(reinterpret_cast<char*>(this) - 0x7c);
    if (*reinterpret_cast<int*>(p + 0xdc) == 0)
        return false;
    return true;
}
