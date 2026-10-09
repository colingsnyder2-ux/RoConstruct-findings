// from server: 79% by colin
// roc 2007-08 005ab290  unit: RBX::World  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab290
//
// 005ab290  8b442404             mov eax, dword ptr [esp + 4]
// 005ab294  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ab298  d94008               fld dword ptr [eax + 8]
// 005ab29b  d84908               fmul dword ptr [ecx + 8]
// 005ab29e  d94004               fld dword ptr [eax + 4]
// 005ab2a1  d84904               fmul dword ptr [ecx + 4]
// 005ab2a4  dec1                 faddp st(1)
// 005ab2a6  d900                 fld dword ptr [eax]
// 005ab2a8  d809                 fmul dword ptr [ecx]
// 005ab2aa  dec1                 faddp st(1)
// 005ab2ac  d9e8                 fld1 
// 005ab2ae  d8d9                 fcomp st(1)
// 005ab2b0  dfe0                 fnstsw ax
// 005ab2b2  f6c441               test ah, 0x41
// 005ab2b5  7a05                 jp 0x5ab2bc
// 005ab2b7  ddd8                 fstp st(0)
// 005ab2b9  d9ee                 fldz 
// 005ab2bb  c3                   ret 
// 005ab2bc  d9056c647900         fld dword ptr [0x79646c]
// 005ab2c2  d8d9                 fcomp st(1)
// 005ab2c4  dfe0                 fnstsw ax
// 005ab2c6  f6c401               test ah, 1
// 005ab2c9  7509                 jne 0x5ab2d4
// 005ab2cb  ddd8                 fstp st(0)
// 005ab2cd  d905307b7900         fld dword ptr [0x797b30]
// 005ab2d3  c3                   ret 
// 005ab2d4  e985600800           jmp 0x63135e

struct Vector3 {
    float x;
    float y;
    float z;
};

extern float g_79646c;
extern float g_797b30;

float func_005ab290(const Vector3* a, const Vector3* b)
{
    float dot = a->z * b->z + a->y * b->y + a->x * b->x;
    if (dot == 1.0f)
        return 0.0f;
    if (dot < g_79646c)
        return g_797b30;
    return dot;
}
