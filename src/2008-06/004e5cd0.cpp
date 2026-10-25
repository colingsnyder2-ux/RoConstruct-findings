// from server: 100% by king_originala
// roc 2008-06 004e5cd0  unit: RBX::Block  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5cd0
//
// 004e5cd0  56                   push esi
// 004e5cd1  57                   push edi
// 004e5cd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e5cd6  8bf1                 mov esi, ecx
// 004e5cd8  8bcf                 mov ecx, edi
// 004e5cda  e8c1260300           call 0x5183a0
// 004e5cdf  33d2                 xor edx, edx
// 004e5ce1  8bc8                 mov ecx, eax
// 004e5ce3  f7760c               div dword ptr [esi + 0xc]
// 004e5ce6  8b4608               mov eax, dword ptr [esi + 8]
// 004e5ce9  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e5cec  85d2                 test edx, edx
// 004e5cee  7431                 je 0x4e5d21
// 004e5cf0  390a                 cmp dword ptr [edx], ecx
// 004e5cf2  7526                 jne 0x4e5d1a
// 004e5cf4  d907                 fld dword ptr [edi]
// 004e5cf6  d85a04               fcomp dword ptr [edx + 4]
// 004e5cf9  dfe0                 fnstsw ax
// 004e5cfb  f6c444               test ah, 0x44
// 004e5cfe  7a1a                 jp 0x4e5d1a
// 004e5d00  d94704               fld dword ptr [edi + 4]
// 004e5d03  d85a08               fcomp dword ptr [edx + 8]
// 004e5d06  dfe0                 fnstsw ax
// 004e5d08  f6c444               test ah, 0x44
// 004e5d0b  7a0d                 jp 0x4e5d1a
// 004e5d0d  d94708               fld dword ptr [edi + 8]
// 004e5d10  d85a0c               fcomp dword ptr [edx + 0xc]
// 004e5d13  dfe0                 fnstsw ax
// 004e5d15  f6c444               test ah, 0x44
// 004e5d18  7b0e                 jnp 0x4e5d28
// 004e5d1a  8b5214               mov edx, dword ptr [edx + 0x14]
// 004e5d1d  85d2                 test edx, edx
// 004e5d1f  75cf                 jne 0x4e5cf0
// 004e5d21  5f                   pop edi
// 004e5d22  32c0                 xor al, al
// 004e5d24  5e                   pop esi
// 004e5d25  c20400               ret 4
// 004e5d28  5f                   pop edi
// 004e5d29  b001                 mov al, 1
// 004e5d2b  5e                   pop esi
// 004e5d2c  c20400               ret 4

struct Vector3 {
    float x, y, z;
    unsigned int hashCode() const;
};

struct Node {
    unsigned int hash;
    Vector3 key;
    unsigned char padding[4];
    Node* next;
};

struct Block {
    unsigned char padding[8];
    Node** buckets;
    unsigned int bucketCount;

    bool contains(const Vector3& key);
};

#pragma float_control(precise, off, push)

bool Block::contains(const Vector3& key)
{
    unsigned int hash = key.hashCode();
    Node* node = buckets[hash % bucketCount];
    while (node) {
        if (node->hash == hash &&
            node->key.x == key.x &&
            node->key.y == key.y &&
            node->key.z == key.z)
            return true;
        node = node->next;
    }
    return false;
}

#pragma float_control(pop)
