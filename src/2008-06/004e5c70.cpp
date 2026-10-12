// from server: 100% by king_originala
// roc 2008-06 004e5c70  unit: RBX::Block  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e5c70
//
// 004e5c70  56                   push esi
// 004e5c71  57                   push edi
// 004e5c72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e5c76  8bf1                 mov esi, ecx
// 004e5c78  8bcf                 mov ecx, edi
// 004e5c7a  e821270300           call 0x5183a0
// 004e5c7f  33d2                 xor edx, edx
// 004e5c81  8bc8                 mov ecx, eax
// 004e5c83  f7760c               div dword ptr [esi + 0xc]
// 004e5c86  8b4608               mov eax, dword ptr [esi + 8]
// 004e5c89  8b1490               mov edx, dword ptr [eax + edx*4]
// 004e5c8c  85d2                 test edx, edx
// 004e5c8e  7431                 je 0x4e5cc1
// 004e5c90  390a                 cmp dword ptr [edx], ecx
// 004e5c92  7526                 jne 0x4e5cba
// 004e5c94  d907                 fld dword ptr [edi]
// 004e5c96  d85a04               fcomp dword ptr [edx + 4]
// 004e5c99  dfe0                 fnstsw ax
// 004e5c9b  f6c444               test ah, 0x44
// 004e5c9e  7a1a                 jp 0x4e5cba
// 004e5ca0  d94704               fld dword ptr [edi + 4]
// 004e5ca3  d85a08               fcomp dword ptr [edx + 8]
// 004e5ca6  dfe0                 fnstsw ax
// 004e5ca8  f6c444               test ah, 0x44
// 004e5cab  7a0d                 jp 0x4e5cba
// 004e5cad  d94708               fld dword ptr [edi + 8]
// 004e5cb0  d85a0c               fcomp dword ptr [edx + 0xc]
// 004e5cb3  dfe0                 fnstsw ax
// 004e5cb5  f6c444               test ah, 0x44
// 004e5cb8  7b0e                 jnp 0x4e5cc8
// 004e5cba  8b5220               mov edx, dword ptr [edx + 0x20]
// 004e5cbd  85d2                 test edx, edx
// 004e5cbf  75cf                 jne 0x4e5c90
// 004e5cc1  5f                   pop edi
// 004e5cc2  32c0                 xor al, al
// 004e5cc4  5e                   pop esi
// 004e5cc5  c20400               ret 4
// 004e5cc8  5f                   pop edi
// 004e5cc9  b001                 mov al, 1
// 004e5ccb  5e                   pop esi
// 004e5ccc  c20400               ret 4

struct Vector3 {
    float x, y, z;
    unsigned int hashCode() const;
};

struct Node {
    unsigned int hash;
    Vector3 key;
    unsigned char padding[16];
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
