// from server: 100% by colin
// roc 2007-08 004cff60  unit: RBX::TextureProxyBase  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cff60
//
// 004cff60  56                   push esi
// 004cff61  57                   push edi
// 004cff62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004cff66  8bf1                 mov esi, ecx
// 004cff68  8bcf                 mov ecx, edi
// 004cff6a  e851f30300           call 0x50f2c0
// 004cff6f  33d2                 xor edx, edx
// 004cff71  8bc8                 mov ecx, eax
// 004cff73  f7760c               div dword ptr [esi + 0xc]
// 004cff76  8b4608               mov eax, dword ptr [esi + 8]
// 004cff79  8b1490               mov edx, dword ptr [eax + edx*4]
// 004cff7c  85d2                 test edx, edx
// 004cff7e  7437                 je 0x4cffb7
// 004cff80  390a                 cmp dword ptr [edx], ecx
// 004cff82  752c                 jne 0x4cffb0
// 004cff84  d94204               fld dword ptr [edx + 4]
// 004cff87  d907                 fld dword ptr [edi]
// 004cff89  dae9                 fucompp 
// 004cff8b  dfe0                 fnstsw ax
// 004cff8d  f6c444               test ah, 0x44
// 004cff90  7a1e                 jp 0x4cffb0
// 004cff92  d94208               fld dword ptr [edx + 8]
// 004cff95  d94704               fld dword ptr [edi + 4]
// 004cff98  dae9                 fucompp 
// 004cff9a  dfe0                 fnstsw ax
// 004cff9c  f6c444               test ah, 0x44
// 004cff9f  7a0f                 jp 0x4cffb0
// 004cffa1  d9420c               fld dword ptr [edx + 0xc]
// 004cffa4  d94708               fld dword ptr [edi + 8]
// 004cffa7  dae9                 fucompp 
// 004cffa9  dfe0                 fnstsw ax
// 004cffab  f6c444               test ah, 0x44
// 004cffae  7b07                 jnp 0x4cffb7
// 004cffb0  8b5220               mov edx, dword ptr [edx + 0x20]
// 004cffb3  85d2                 test edx, edx
// 004cffb5  75c9                 jne 0x4cff80
// 004cffb7  5f                   pop edi
// 004cffb8  8d4210               lea eax, [edx + 0x10]
// 004cffbb  5e                   pop esi
// 004cffbc  c20400               ret 4

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
    int pad[4];
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
