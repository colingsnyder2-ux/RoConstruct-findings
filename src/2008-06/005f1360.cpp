// from server: 100% by colin
// roc 2008-06 005f1360  unit: RBX::FaceInstance  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1360
//
// 005f1360  8b01                 mov eax, dword ptr [ecx]
// 005f1362  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1365  0528020000           add eax, 0x228
// 005f136a  8b8488d0000000       mov eax, dword ptr [eax + ecx*4 + 0xd0]
// 005f1371  85c0                 test eax, eax
// 005f1373  753a                 jne 0x5f13af
// 005f1375  b801000000           mov eax, 1
// 005f137a  8405d0ab9700         test byte ptr [0x97abd0], al
// 005f1380  7528                 jne 0x5f13aa
// 005f1382  d905dc828200         fld dword ptr [0x8282dc]
// 005f1388  0905d0ab9700         or dword ptr [0x97abd0], eax
// 005f138e  d91dc8ab9700         fstp dword ptr [0x97abc8]
// 005f1394  c705c4ab970000000000 mov dword ptr [0x97abc4], 0
// 005f139e  d905ac9b8100         fld dword ptr [0x819bac]
// 005f13a4  d91dccab9700         fstp dword ptr [0x97abcc]
// 005f13aa  b8c4ab9700           mov eax, 0x97abc4
// 005f13af  d94008               fld dword ptr [eax + 8]
// 005f13b2  c3                   ret 

extern const float initialFirst;
extern const float initialSecond;

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Value {
    int type;
    float first;
    float second;
    Value(float a, float b);
};

inline Value::Value(float a, float b)
    : type(0), first(a), second(b)
{
}

struct Properties {
    char padding[0xd0];
    Value* values[6];
};

struct Part {
    char padding[0x228];
    Properties properties;
};

struct FaceInstance {
    Part* part;
    int face;
    float getValue() const;
};

float FaceInstance::getValue() const
{
    Properties* properties = &part->properties;
    int index = face;
    _ReadWriteBarrier();
    Value* value = properties->values[index];
    if (!value) {
        static Value fallback(initialFirst, initialSecond);
        value = &fallback;
    }
    return value->second;
}
