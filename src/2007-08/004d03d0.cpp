// from server: 53% by colin
// roc 2007-08 004d03d0  unit: RBX::TextureProxyBase  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d03d0
//
// 004d03d0  83ec0c               sub esp, 0xc
// 004d03d3  83b9c800000000       cmp dword ptr [ecx + 0xc8], 0
// 004d03da  754f                 jne 0x4d042b
// 004d03dc  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 004d03e2  83b98c01000001       cmp dword ptr [ecx + 0x18c], 1
// 004d03e9  7540                 jne 0x4d042b
// 004d03eb  e8203c0a00           call 0x574010
// 004d03f0  d900                 fld dword ptr [eax]
// 004d03f2  d91c24               fstp dword ptr [esp]
// 004d03f5  d94004               fld dword ptr [eax + 4]
// 004d03f8  d95c2404             fstp dword ptr [esp + 4]
// 004d03fc  d94008               fld dword ptr [eax + 8]
// 004d03ff  8d0424               lea eax, [esp]
// 004d0402  50                   push eax
// 004d0403  d95c240c             fstp dword ptr [esp + 0xc]
// 004d0407  e8c4faffff           call 0x4cfed0
// 004d040c  dc1d78b37900         fcomp qword ptr [0x79b378]
// 004d0412  83c404               add esp, 4
// 004d0415  dfe0                 fnstsw ax
// 004d0417  f6c405               test ah, 5
// 004d041a  7a09                 jp 0x4d0425
// 004d041c  b801000000           mov eax, 1
// 004d0421  83c40c               add esp, 0xc
// 004d0424  c3                   ret 
// 004d0425  33c0                 xor eax, eax
// 004d0427  83c40c               add esp, 0xc
// 004d042a  c3                   ret 
// 004d042b  32c0                 xor al, al
// 004d042d  83c40c               add esp, 0xc
// 004d0430  c3                   ret 

struct G3DVector3 {
    float x;
    float y;
    float z;
};

struct TextureProxyBase {
    char pad[0xb0];
    void* field_b0;
    char pad2[0xc8 - 0xb0 - 4];
    int field_c8;
    bool isReady();
};

extern "C" G3DVector3* __cdecl sub_574010();
extern "C" float __cdecl sub_4cfed0(G3DVector3* v);

extern const double g_79b378;

bool TextureProxyBase::isReady()
{
    if (this->field_c8 != 0)
        return false;
    void* p = this->field_b0;
    if (*(int*)((char*)p + 0x18c) != 1)
        return false;
    G3DVector3* v = sub_574010();
    G3DVector3 tmp;
    tmp.x = v->x;
    tmp.y = v->y;
    tmp.z = v->z;
    float r = sub_4cfed0(&tmp);
    if (r != (float)g_79b378)
        return false;
    return true;
}
