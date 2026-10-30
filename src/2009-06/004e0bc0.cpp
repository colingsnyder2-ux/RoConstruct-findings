// roc 2009-06 004e0bc0  unit: RBX::Network::IdSerializer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e0bc0
//
// 004e0bc0  8bc1                 mov eax, ecx
// 004e0bc2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e0bc6  33d2                 xor edx, edx
// 004e0bc8  2bc8                 sub ecx, eax
// 004e0bca  56                   push esi
// 004e0bcb  eb03                 jmp 0x4e0bd0
// 004e0bcd  8d4900               lea ecx, [ecx]
// 004e0bd0  8b30                 mov esi, dword ptr [eax]
// 004e0bd2  3b3401               cmp esi, dword ptr [ecx + eax]
// 004e0bd5  750f                 jne 0x4e0be6
// 004e0bd7  42                   inc edx
// 004e0bd8  83c004               add eax, 4
// 004e0bdb  83fa04               cmp edx, 4
// 004e0bde  72f0                 jb 0x4e0bd0
// 004e0be0  b001                 mov al, 1
// 004e0be2  5e                   pop esi
// 004e0be3  c20400               ret 4
// 004e0be6  32c0                 xor al, al
// 004e0be8  5e                   pop esi
// 004e0be9  c20400               ret 4
// copied from an identical function in another client (function ?equals@IdSerializer@ns_ROCX00000b@@QAE_NABU12@@Z)

namespace ns_ROCX00000b {
// from server: 100% by atomic.potato
struct IdSerializer {
    bool equals(const IdSerializer& other);
};

bool __thiscall IdSerializer::equals(const IdSerializer& other)
{
    const unsigned int* a = reinterpret_cast<const unsigned int*>(this);
    const unsigned int* b = reinterpret_cast<const unsigned int*>(&other);
    unsigned int i = 0;

    do {
        if (a[i] != b[i])
            return false;
        ++i;
    } while (i < 4);

    return true;
}
}
