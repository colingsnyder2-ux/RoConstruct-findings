// from server: 100% by colin
// roc 2007-08 00718d30  unit: CXTPRibbonControls  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00718d30
//
// 00718d30  8b442404             mov eax, dword ptr [esp + 4]
// 00718d34  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00718d3a  85d2                 test edx, edx
// 00718d3c  7412                 je 0x718d50
// 00718d3e  394268               cmp dword ptr [edx + 0x68], eax
// 00718d41  7508                 jne 0x718d4b
// 00718d43  b801000000           mov eax, 1
// 00718d48  c20400               ret 4
// 00718d4b  39426c               cmp dword ptr [edx + 0x6c], eax
// 00718d4e  74f3                 je 0x718d43
// 00718d50  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00718d53  3b8164020000         cmp eax, dword ptr [ecx + 0x264]
// 00718d59  74e8                 je 0x718d43
// 00718d5b  3b8168020000         cmp eax, dword ptr [ecx + 0x268]
// 00718d61  74e0                 je 0x718d43
// 00718d63  3b816c020000         cmp eax, dword ptr [ecx + 0x26c]
// 00718d69  74d8                 je 0x718d43
// 00718d6b  3b81d0010000         cmp eax, dword ptr [ecx + 0x1d0]
// 00718d71  74d0                 je 0x718d43
// 00718d73  33d2                 xor edx, edx
// 00718d75  3b81d4010000         cmp eax, dword ptr [ecx + 0x1d4]
// 00718d7b  0f94c2               sete dl
// 00718d7e  8bc2                 mov eax, edx
// 00718d80  c20400               ret 4

struct CXTPRibbonControls {
    char pad[0x20];
    void* field20;
    int IsItemInGroup(void* item);
};

int CXTPRibbonControls::IsItemInGroup(void* item) {
    void* p = *(void**)((char*)item + 0x154);
    if (p != 0) {
        if (*(void**)((char*)p + 0x68) == item)
            return 1;
        if (*(void**)((char*)p + 0x6c) == item)
            return 1;
    }
    void* c = *(void**)((char*)field20 + 0x264);
    if (item == c)
        return 1;
    c = *(void**)((char*)field20 + 0x268);
    if (item == c)
        return 1;
    c = *(void**)((char*)field20 + 0x26c);
    if (item == c)
        return 1;
    c = *(void**)((char*)field20 + 0x1d0);
    if (item == c)
        return 1;
    return item == *(void**)((char*)field20 + 0x1d4);
}
