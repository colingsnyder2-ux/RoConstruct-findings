// from server: 100% by colin
// roc 2007-08 004d00a0  unit: RBX::TextureProxyBase  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d00a0
//
// 004d00a0  56                   push esi
// 004d00a1  57                   push edi
// 004d00a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d00a6  8bf1                 mov esi, ecx
// 004d00a8  8bcf                 mov ecx, edi
// 004d00aa  e811f20300           call 0x50f2c0
// 004d00af  33d2                 xor edx, edx
// 004d00b1  8bc8                 mov ecx, eax
// 004d00b3  f7760c               div dword ptr [esi + 0xc]
// 004d00b6  8b4608               mov eax, dword ptr [esi + 8]
// 004d00b9  8b1490               mov edx, dword ptr [eax + edx*4]
// 004d00bc  85d2                 test edx, edx
// 004d00be  7437                 je 0x4d00f7
// 004d00c0  390a                 cmp dword ptr [edx], ecx
// 004d00c2  752c                 jne 0x4d00f0
// 004d00c4  d94204               fld dword ptr [edx + 4]
// 004d00c7  d907                 fld dword ptr [edi]
// 004d00c9  dae9                 fucompp 
// 004d00cb  dfe0                 fnstsw ax
// 004d00cd  f6c444               test ah, 0x44
// 004d00d0  7a1e                 jp 0x4d00f0
// 004d00d2  d94208               fld dword ptr [edx + 8]
// 004d00d5  d94704               fld dword ptr [edi + 4]
// 004d00d8  dae9                 fucompp 
// 004d00da  dfe0                 fnstsw ax
// 004d00dc  f6c444               test ah, 0x44
// 004d00df  7a0f                 jp 0x4d00f0
// 004d00e1  d9420c               fld dword ptr [edx + 0xc]
// 004d00e4  d94708               fld dword ptr [edi + 8]
// 004d00e7  dae9                 fucompp 
// 004d00e9  dfe0                 fnstsw ax
// 004d00eb  f6c444               test ah, 0x44
// 004d00ee  7b07                 jnp 0x4d00f7
// 004d00f0  8b5214               mov edx, dword ptr [edx + 0x14]
// 004d00f3  85d2                 test edx, edx
// 004d00f5  75c9                 jne 0x4d00c0
// 004d00f7  5f                   pop edi
// 004d00f8  8d4210               lea eax, [edx + 0x10]
// 004d00fb  5e                   pop esi
// 004d00fc  c20400               ret 4

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Entry {
    int key;
    float x;
    float y;
    float z;
    int pad;
    Entry* next;
};

struct HashTable {
    int unknown0;
    int unknown4;
    Entry** buckets;
    unsigned int bucketCount;

    Vec3* find(Vec3* key);
};

extern "C" unsigned int __fastcall hashVec3(Vec3* v);

Vec3* HashTable::find(Vec3* key)
{
    unsigned int h = hashVec3(key);
    unsigned int idx = h % bucketCount;
    Entry* e = buckets[idx];
    while (e != 0)
    {
        if (e->key == (int)h)
        {
            if (e->x == key->x && e->y == key->y && e->z == key->z)
                break;
        }
        e = e->next;
    }
    return (Vec3*)((char*)e + 0x10);
}
