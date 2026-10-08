// from server: 78% by colin
// roc 2007-08 004b9a80  unit: RakPeer  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9a80
//
// 004b9a80  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b9a84  56                   push esi
// 004b9a85  57                   push edi
// 004b9a86  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004b9a8a  be07000000           mov esi, 7
// 004b9a8f  8d411c               lea eax, [ecx + 0x1c]
// 004b9a92  2bf9                 sub edi, ecx
// 004b9a94  8b0c07               mov ecx, dword ptr [edi + eax]
// 004b9a97  8b10                 mov edx, dword ptr [eax]
// 004b9a99  3bca                 cmp ecx, edx
// 004b9a9b  7711                 ja 0x4b9aae
// 004b9a9d  720a                 jb 0x4b9aa9
// 004b9a9f  83ee01               sub esi, 1
// 004b9aa2  83e804               sub eax, 4
// 004b9aa5  85f6                 test esi, esi
// 004b9aa7  7deb                 jge 0x4b9a94
// 004b9aa9  5f                   pop edi
// 004b9aaa  32c0                 xor al, al
// 004b9aac  5e                   pop esi
// 004b9aad  c3                   ret 
// 004b9aae  5f                   pop edi
// 004b9aaf  b001                 mov al, 1
// 004b9ab1  5e                   pop esi
// 004b9ab2  c3                   ret 

struct RakPeer {
    unsigned int data[8];
    bool lessThan(const RakPeer& other) const;
};

bool RakPeer::lessThan(const RakPeer& other) const {
    const unsigned int* a = &data[7];
    const unsigned int* b = &other.data[7];
    for (int i = 7; i >= 0; --i) {
        if (b[i] > a[i]) return true;
        if (b[i] < a[i]) return false;
    }
    return false;
}
