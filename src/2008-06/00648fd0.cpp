// from server: 100% by king_originala
// roc 2008-06 00648fd0  unit: RBX::Block  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00648fd0
//
// 00648fd0  83ec0c               sub esp, 0xc
// 00648fd3  56                   push esi
// 00648fd4  8bf1                 mov esi, ecx
// 00648fd6  d94604               fld dword ptr [esi + 4]
// 00648fd9  8d442404             lea eax, [esp + 4]
// 00648fdd  d905dc828200         fld dword ptr [0x8282dc]
// 00648fe3  50                   push eax
// 00648fe4  dcc9                 fmul st(1), st(0)
// 00648fe6  d9c9                 fxch st(1)
// 00648fe8  d95c2408             fstp dword ptr [esp + 8]
// 00648fec  d94608               fld dword ptr [esi + 8]
// 00648fef  d8c9                 fmul st(1)
// 00648ff1  d95c240c             fstp dword ptr [esp + 0xc]
// 00648ff5  d84e0c               fmul dword ptr [esi + 0xc]
// 00648ff8  d95c2410             fstp dword ptr [esp + 0x10]
// 00648ffc  e82fffffff           call 0x648f30
// 00649001  894610               mov dword ptr [esi + 0x10], eax
// 00649004  d94008               fld dword ptr [eax + 8]
// 00649007  d94004               fld dword ptr [eax + 4]
// 0064900a  83c404               add esp, 4
// 0064900d  d900                 fld dword ptr [eax]
// 0064900f  dcc8                 fmul st(0), st(0)
// 00649011  d9c1                 fld st(1)
// 00649013  deca                 fmulp st(2)
// 00649015  dec1                 faddp st(1)
// 00649017  d9c1                 fld st(1)
// 00649019  deca                 fmulp st(2)
// 0064901b  dec1                 faddp st(1)
// 0064901d  d9fa                 fsqrt 
// 0064901f  d95e14               fstp dword ptr [esi + 0x14]
// 00649022  5e                   pop esi
// 00649023  83c40c               add esp, 0xc
// 00649026  c3                   ret 

struct Vector3 {
    float x, y, z;
};

extern const float scale;
extern Vector3* __cdecl lookup(const Vector3&);
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

struct Block {
    void* header;
    float x, y, z;
    Vector3* vector;
    float magnitude;

    void update();
};

void Block::update()
{
    Vector3 scaled = { x * scale, y * scale, z * scale };
    vector = lookup(scaled);
    magnitude = (float)sqrt(vector->x * vector->x
                         + vector->y * vector->y
                         + vector->z * vector->z);
}
