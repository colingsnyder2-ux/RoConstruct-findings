// from server: 69% by colin
// roc 2007-08 004b9b20  unit: RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9b20
//
// 004b9b20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b9b24  56                   push esi
// 004b9b25  57                   push edi
// 004b9b26  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004b9b2a  be0f000000           mov esi, 0xf
// 004b9b2f  8d413c               lea eax, [ecx + 0x3c]
// 004b9b32  2bf9                 sub edi, ecx
// 004b9b34  8b0c07               mov ecx, dword ptr [edi + eax]
// 004b9b37  8b10                 mov edx, dword ptr [eax]
// 004b9b39  3bca                 cmp ecx, edx
// 004b9b3b  7711                 ja 0x4b9b4e
// 004b9b3d  720a                 jb 0x4b9b49
// 004b9b3f  83ee01               sub esi, 1
// 004b9b42  83e804               sub eax, 4
// 004b9b45  85f6                 test esi, esi
// 004b9b47  7deb                 jge 0x4b9b34
// 004b9b49  5f                   pop edi
// 004b9b4a  32c0                 xor al, al
// 004b9b4c  5e                   pop esi
// 004b9b4d  c3                   ret 
// 004b9b4e  5f                   pop edi
// 004b9b4f  b001                 mov al, 1
// 004b9b51  5e                   pop esi
// 004b9b52  c3                   ret 

struct RakPeer {
    char field_0x3c[64];

    char compare(const RakPeer* other) const;
};

char RakPeer::compare(const RakPeer* other) const {
    const int* a = reinterpret_cast<const int*>(reinterpret_cast<const char*>(this) + 0x3c);
    const int* b = reinterpret_cast<const int*>(reinterpret_cast<const char*>(other) + 0x3c);
    int i = 15;
    do {
        unsigned int va = *a;
        unsigned int vb = *b;
        if (va > vb) return 1;
        if (va < vb) return 0;
        --i;
        --a;
        --b;
    } while (i >= 0);
    return 0;
}
