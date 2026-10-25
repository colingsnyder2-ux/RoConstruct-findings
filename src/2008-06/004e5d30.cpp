// from server: 100% by king_originala
// roc 2008-06 004e5d30  unit: RBX::Block  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5d30
//
// 004e5d30  56                   push esi
// 004e5d31  57                   push edi
// 004e5d32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e5d36  8bf1                 mov esi, ecx
// 004e5d38  8bcf                 mov ecx, edi
// 004e5d3a  e861260300           call 0x5183a0
// 004e5d3f  33d2                 xor edx, edx
// 004e5d41  8bc8                 mov ecx, eax
// 004e5d43  f7760c               div dword ptr [esi + 0xc]
// 004e5d46  8b4608               mov eax, dword ptr [esi + 8]
// 004e5d49  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e5d4c  85d2                 test edx, edx
// 004e5d4e  7431                 je 0x4e5d81
// 004e5d50  390a                 cmp dword ptr [edx], ecx
// 004e5d52  7526                 jne 0x4e5d7a
// 004e5d54  d907                 fld dword ptr [edi]
// 004e5d56  d85a04               fcomp dword ptr [edx + 4]
// 004e5d59  dfe0                 fnstsw ax
// 004e5d5b  f6c444               test ah, 0x44
// 004e5d5e  7a1a                 jp 0x4e5d7a
// 004e5d60  d94704               fld dword ptr [edi + 4]
// 004e5d63  d85a08               fcomp dword ptr [edx + 8]
// 004e5d66  dfe0                 fnstsw ax
// 004e5d68  f6c444               test ah, 0x44
// 004e5d6b  7a0d                 jp 0x4e5d7a
// 004e5d6d  d94708               fld dword ptr [edi + 8]
// 004e5d70  d85a0c               fcomp dword ptr [edx + 0xc]
// 004e5d73  dfe0                 fnstsw ax
// 004e5d75  f6c444               test ah, 0x44
// 004e5d78  7b07                 jnp 0x4e5d81
// 004e5d7a  8b5214               mov edx, dword ptr [edx + 0x14]
// 004e5d7d  85d2                 test edx, edx
// 004e5d7f  75cf                 jne 0x4e5d50
// 004e5d81  5f                   pop edi
// 004e5d82  8d4210               lea eax, [edx + 0x10]
// 004e5d85  5e                   pop esi
// 004e5d86  c20400               ret 4

#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    unsigned int hashCode() const;
};

struct Node {
    unsigned int hash;
    Vector3 key;
    void* value;
    Node* next;
};

struct Block {
    unsigned int reserved[2];
    Node** buckets;
    unsigned int bucketCount;

    void** find(const Vector3& key);
};

void** Block::find(const Vector3& key)
{
    unsigned int hash = key.hashCode();
    Node* node = buckets[hash % bucketCount];

    while (node) {
        if (node->hash == hash &&
            node->key.x == key.x &&
            node->key.y == key.y &&
            node->key.z == key.z)
            break;
        node = node->next;
    }

    return &node->value;
}
