// roc 2007-03 004c4430  unit: seg_004c0000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4430
//
// 004c4430  56                   push esi
// 004c4431  57                   push edi
// 004c4432  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004c4436  8bf1                 mov esi, ecx
// 004c4438  8bcf                 mov ecx, edi
// 004c443a  e821f50300           call 0x503960
// 004c443f  33d2                 xor edx, edx
// 004c4441  8bc8                 mov ecx, eax
// 004c4443  f7760c               div dword ptr [esi + 0xc]
// 004c4446  8b4608               mov eax, dword ptr [esi + 8]
// 004c4449  8b1490               mov edx, dword ptr [eax + edx*4]
// 004c444c  85d2                 test edx, edx
// 004c444e  7437                 je 0x4c4487
// 004c4450  390a                 cmp dword ptr [edx], ecx
// 004c4452  752c                 jne 0x4c4480
// 004c4454  d94204               fld dword ptr [edx + 4]
// 004c4457  d907                 fld dword ptr [edi]
// 004c4459  dae9                 fucompp 
// 004c445b  dfe0                 fnstsw ax
// 004c445d  f6c444               test ah, 0x44
// 004c4460  7a1e                 jp 0x4c4480
// 004c4462  d94208               fld dword ptr [edx + 8]
// 004c4465  d94704               fld dword ptr [edi + 4]
// 004c4468  dae9                 fucompp 
// 004c446a  dfe0                 fnstsw ax
// 004c446c  f6c444               test ah, 0x44
// 004c446f  7a0f                 jp 0x4c4480
// 004c4471  d9420c               fld dword ptr [edx + 0xc]
// 004c4474  d94708               fld dword ptr [edi + 8]
// 004c4477  dae9                 fucompp 
// 004c4479  dfe0                 fnstsw ax
// 004c447b  f6c444               test ah, 0x44
// 004c447e  7b07                 jnp 0x4c4487
// 004c4480  8b5214               mov edx, dword ptr [edx + 0x14]
// 004c4483  85d2                 test edx, edx
// 004c4485  75c9                 jne 0x4c4450
// 004c4487  5f                   pop edi
// 004c4488  8d4210               lea eax, [edx + 0x10]
// 004c448b  5e                   pop esi
// 004c448c  c20400               ret 4
// copied from an identical function in another client (function ?find@HashTable@ns_ROCX000004@@QAEPAUVec3@2@PAU32@@Z)

namespace ns_ROCX000004 {
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
}
