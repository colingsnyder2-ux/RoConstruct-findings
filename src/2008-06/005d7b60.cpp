// from server: 100% by king_originala
// roc 2008-06 005d7b60  unit: RBX::P8Humanoid::?$GetSetImpl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7b60
//
// 005d7b60  8bc1                 mov eax, ecx
// 005d7b62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7b66  85c9                 test ecx, ecx
// 005d7b68  7405                 je 0x5d7b6f
// 005d7b6a  83c1ec               add ecx, -0x14
// 005d7b6d  eb02                 jmp 0x5d7b71
// 005d7b6f  33c9                 xor ecx, ecx
// 005d7b71  8b9150010000         mov edx, dword ptr [ecx + 0x150]
// 005d7b77  56                   push esi
// 005d7b78  8b7010               mov esi, dword ptr [eax + 0x10]
// 005d7b7b  8b1432               mov edx, dword ptr [edx + esi]
// 005d7b7e  03500c               add edx, dword ptr [eax + 0xc]
// 005d7b81  8b4008               mov eax, dword ptr [eax + 8]
// 005d7b84  8d8c0a50010000       lea ecx, [edx + ecx + 0x150]
// 005d7b8b  ffd0                 call eax
// 005d7b8d  d900                 fld dword ptr [eax]
// 005d7b8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d7b93  d919                 fstp dword ptr [ecx]
// 005d7b95  5e                   pop esi
// 005d7b96  d94004               fld dword ptr [eax + 4]
// 005d7b99  d95904               fstp dword ptr [ecx + 4]
// 005d7b9c  d94008               fld dword ptr [eax + 8]
// 005d7b9f  8bc1                 mov eax, ecx
// 005d7ba1  d95908               fstp dword ptr [ecx + 8]
// 005d7ba4  c20800               ret 8

struct Storage
{
    char padding[0x150];
};

struct VirtualBase
{
    int value;
};

struct Object : Storage, virtual VirtualBase
{
};

struct GetSetImpl
{
    char padding[8];
    float* (Object::*get)();

    float* getValue(float* out, void* obj);
};

float* GetSetImpl::getValue(float* out, void* obj)
{
    Object* object = obj ? (Object*)((char*)obj - 0x14) : 0;
    float* result = (object->*get)();
    out[0] = result[0];
    out[1] = result[1];
    out[2] = result[2];
    return out;
}
