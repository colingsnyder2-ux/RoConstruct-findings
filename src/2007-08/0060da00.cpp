// from server: 65% by colin
// roc 2007-08 0060da00  unit: RBX::Block  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060da00
//
// 0060da00  83ec0c               sub esp, 0xc
// 0060da03  56                   push esi
// 0060da04  8bf1                 mov esi, ecx
// 0060da06  d94604               fld dword ptr [esi + 4]
// 0060da09  8d442404             lea eax, [esp + 4]
// 0060da0d  d905f0547b00         fld dword ptr [0x7b54f0]
// 0060da13  50                   push eax
// 0060da14  dcc9                 fmul st(1), st(0)
// 0060da16  d9c9                 fxch st(1)
// 0060da18  d95c2408             fstp dword ptr [esp + 8]
// 0060da1c  d94608               fld dword ptr [esi + 8]
// 0060da1f  d8c9                 fmul st(1)
// 0060da21  d95c240c             fstp dword ptr [esp + 0xc]
// 0060da25  d84e0c               fmul dword ptr [esi + 0xc]
// 0060da28  d95c2410             fstp dword ptr [esp + 0x10]
// 0060da2c  e82fffffff           call 0x60d960
// 0060da31  894610               mov dword ptr [esi + 0x10], eax
// 0060da34  d94008               fld dword ptr [eax + 8]
// 0060da37  d94004               fld dword ptr [eax + 4]
// 0060da3a  83c404               add esp, 4
// 0060da3d  d900                 fld dword ptr [eax]
// 0060da3f  dcc8                 fmul st(0), st(0)
// 0060da41  d9c1                 fld st(1)
// 0060da43  deca                 fmulp st(2)
// 0060da45  dec1                 faddp st(1)
// 0060da47  d9c1                 fld st(1)
// 0060da49  deca                 fmulp st(2)
// 0060da4b  dec1                 faddp st(1)
// 0060da4d  d9fa                 fsqrt 
// 0060da4f  d95e14               fstp dword ptr [esi + 0x14]
// 0060da52  5e                   pop esi
// 0060da53  83c40c               add esp, 0xc
// 0060da56  c3                   ret 

struct Vector3 {
    float x;
    float y;
    float z;
};

struct Block {
    char pad0[4];
    float sizeX;
    float sizeY;
    float sizeZ;
    void* blockMesh;
    float radius;
    void updateSize();
};

extern float g_scale;

void* __fastcall sub_60D960(Vector3* v);

void Block::updateSize() {
    Vector3 scaled;
    scaled.x = sizeX * g_scale;
    scaled.y = sizeY * g_scale;
    scaled.z = sizeZ * g_scale;
    Vector3* result = (Vector3*)sub_60D960(&scaled);
    blockMesh = result;
    float x = result->x;
    float y = result->y;
    float z = result->z;
    radius = x * y + x * y + z * z;
}
