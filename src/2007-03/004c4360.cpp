// roc 2007-03 004c4360  unit: seg_004c0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4360
//
// 004c4360  56                   push esi
// 004c4361  57                   push edi
// 004c4362  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c4366  8bf1                 mov esi, ecx
// 004c4368  8bcf                 mov ecx, edi
// 004c436a  e8f1f50300           call 0x503960
// 004c436f  33d2                 xor edx, edx
// 004c4371  8bc8                 mov ecx, eax
// 004c4373  f7760c               div dword ptr [esi + 0xc]
// 004c4376  8b4608               mov eax, dword ptr [esi + 8]
// 004c4379  8b1490               mov edx, dword ptr [eax + edx*4]
// 004c437c  85d2                 test edx, edx
// 004c437e  7437                 je 0x4c43b7
// 004c4380  390a                 cmp dword ptr [edx], ecx
// 004c4382  752c                 jne 0x4c43b0
// 004c4384  d94204               fld dword ptr [edx + 4]
// 004c4387  d907                 fld dword ptr [edi]
// 004c4389  dae9                 fucompp 
// 004c438b  dfe0                 fnstsw ax
// 004c438d  f6c444               test ah, 0x44
// 004c4390  7a1e                 jp 0x4c43b0
// 004c4392  d94208               fld dword ptr [edx + 8]
// 004c4395  d94704               fld dword ptr [edi + 4]
// 004c4398  dae9                 fucompp 
// 004c439a  dfe0                 fnstsw ax
// 004c439c  f6c444               test ah, 0x44
// 004c439f  7a0f                 jp 0x4c43b0
// 004c43a1  d9420c               fld dword ptr [edx + 0xc]
// 004c43a4  d94708               fld dword ptr [edi + 8]
// 004c43a7  dae9                 fucompp 
// 004c43a9  dfe0                 fnstsw ax
// 004c43ab  f6c444               test ah, 0x44
// 004c43ae  7b07                 jnp 0x4c43b7
// 004c43b0  8b5220               mov edx, dword ptr [edx + 0x20]
// 004c43b3  85d2                 test edx, edx
// 004c43b5  75c9                 jne 0x4c4380
// 004c43b7  5f                   pop edi
// 004c43b8  8d4210               lea eax, [edx + 0x10]
// 004c43bb  5e                   pop esi
// 004c43bc  c20400               ret 4
// copied from an identical function in another client (function ?find@HashTable@ns_ROCX000003@@QAEPAUVec3@2@PAU32@@Z)

namespace ns_ROCX000003 {
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
}
