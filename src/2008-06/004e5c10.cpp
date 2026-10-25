// from server: 100% by king_originala
// roc 2008-06 004e5c10  unit: RBX::Block  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5c10
//
// 004e5c10  56                   push esi
// 004e5c11  57                   push edi
// 004e5c12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e5c16  8bf1                 mov esi, ecx
// 004e5c18  8bcf                 mov ecx, edi
// 004e5c1a  e881270300           call 0x5183a0
// 004e5c1f  33d2                 xor edx, edx
// 004e5c21  8bc8                 mov ecx, eax
// 004e5c23  f7760c               div dword ptr [esi + 0xc]
// 004e5c26  8b4608               mov eax, dword ptr [esi + 8]
// 004e5c29  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e5c2c  85d2                 test edx, edx
// 004e5c2e  7431                 je 0x4e5c61
// 004e5c30  390a                 cmp dword ptr [edx], ecx
// 004e5c32  7526                 jne 0x4e5c5a
// 004e5c34  d907                 fld dword ptr [edi]
// 004e5c36  d85a04               fcomp dword ptr [edx + 4]
// 004e5c39  dfe0                 fnstsw ax
// 004e5c3b  f6c444               test ah, 0x44
// 004e5c3e  7a1a                 jp 0x4e5c5a
// 004e5c40  d94704               fld dword ptr [edi + 4]
// 004e5c43  d85a08               fcomp dword ptr [edx + 8]
// 004e5c46  dfe0                 fnstsw ax
// 004e5c48  f6c444               test ah, 0x44
// 004e5c4b  7a0d                 jp 0x4e5c5a
// 004e5c4d  d94708               fld dword ptr [edi + 8]
// 004e5c50  d85a0c               fcomp dword ptr [edx + 0xc]
// 004e5c53  dfe0                 fnstsw ax
// 004e5c55  f6c444               test ah, 0x44
// 004e5c58  7b07                 jnp 0x4e5c61
// 004e5c5a  8b5220               mov edx, dword ptr [edx + 0x20]
// 004e5c5d  85d2                 test edx, edx
// 004e5c5f  75cf                 jne 0x4e5c30
// 004e5c61  5f                   pop edi
// 004e5c62  8d4210               lea eax, [edx + 0x10]
// 004e5c65  5e                   pop esi
// 004e5c66  c20400               ret 4

struct Vector3 {
    float x, y, z;
    unsigned int hashCode() const;
};

struct Value {
    unsigned char storage[16];
};

struct Node {
    unsigned int hash;
    Vector3 key;
    Value value;
    Node* next;
};

struct Block {
    unsigned char padding[8];
    Node** buckets;
    unsigned int bucketCount;

    Value* find(const Vector3& key);
};

#pragma float_control(precise, off, push)

Value* Block::find(const Vector3& key)
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

#pragma float_control(pop)
