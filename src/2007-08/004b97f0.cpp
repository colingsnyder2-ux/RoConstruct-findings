// from server: 53% by colin
// roc 2007-08 004b97f0  unit: RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b97f0
//
// 004b97f0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b97f4  56                   push esi
// 004b97f5  57                   push edi
// 004b97f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004b97fa  be03000000           mov esi, 3
// 004b97ff  8d410c               lea eax, [ecx + 0xc]
// 004b9802  2bf9                 sub edi, ecx
// 004b9804  8b0c07               mov ecx, dword ptr [edi + eax]
// 004b9807  8b10                 mov edx, dword ptr [eax]
// 004b9809  3bca                 cmp ecx, edx
// 004b980b  7711                 ja 0x4b981e
// 004b980d  720a                 jb 0x4b9819
// 004b980f  83ee01               sub esi, 1
// 004b9812  83e804               sub eax, 4
// 004b9815  85f6                 test esi, esi
// 004b9817  7deb                 jge 0x4b9804
// 004b9819  5f                   pop edi
// 004b981a  32c0                 xor al, al
// 004b981c  5e                   pop esi
// 004b981d  c3                   ret 
// 004b981e  5f                   pop edi
// 004b981f  b001                 mov al, 1
// 004b9821  5e                   pop esi
// 004b9822  c3                   ret 

struct RakPeer {
    bool compare(const void* other) const;
};

bool RakPeer::compare(const void* other) const {
    const unsigned char* a = (const unsigned char*)this + 0xc;
    const unsigned char* b = (const unsigned char*)other + 0xc;
    int i = 3;
    do {
        unsigned int av = *(const unsigned int*)a;
        unsigned int bv = *(const unsigned int*)b;
        if (bv > av) return true;
        if (bv < av) return false;
        i--;
        a -= 4;
    } while (i >= 0);
    return false;
}
