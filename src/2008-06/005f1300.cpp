// from server: 100% by colin
// roc 2008-06 005f1300  unit: RBX::FaceInstance  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1300
//
// 005f1300  8b01                 mov eax, dword ptr [ecx]
// 005f1302  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1305  0528020000           add eax, 0x228
// 005f130a  8b8488d0000000       mov eax, dword ptr [eax + ecx*4 + 0xd0]
// 005f1311  85c0                 test eax, eax
// 005f1313  753a                 jne 0x5f134f
// 005f1315  b801000000           mov eax, 1
// 005f131a  8405d0ab9700         test byte ptr [0x97abd0], al
// 005f1320  7528                 jne 0x5f134a
// 005f1322  d905dc828200         fld dword ptr [0x8282dc]
// 005f1328  0905d0ab9700         or dword ptr [0x97abd0], eax
// 005f132e  d91dc8ab9700         fstp dword ptr [0x97abc8]
// 005f1334  c705c4ab970000000000 mov dword ptr [0x97abc4], 0
// 005f133e  d905ac9b8100         fld dword ptr [0x819bac]
// 005f1344  d91dccab9700         fstp dword ptr [0x97abcc]
// 005f134a  b8c4ab9700           mov eax, 0x97abc4
// 005f134f  d94004               fld dword ptr [eax + 4]
// 005f1352  c3                   ret 

extern float valueY;
extern float valueZ;

extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Vector
{
    union
    {
        float x;
        unsigned int xBits;
    };
    float y, z;
    Vector();
};

inline Vector::Vector()
{
    y = valueY;
    xBits = 0;
    z = valueZ;
}

struct Table
{
    char padding[0xD0];
    Vector* entries[1];
};

struct Owner
{
    char padding[0x228];
};

struct S
{
    Owner* owner;
    int index;
    float f();
};

float S::f()
{
    Table* table = reinterpret_cast<Table*>(owner + 1);
    int idx = index;
    _ReadWriteBarrier();
    Vector* value = table->entries[idx];
    if (!value)
    {
        static Vector fallback;
        value = &fallback;
    }
    return value->y;
}
