// from server: 73% by colin
// roc 2007-08 0060db00  unit: RBX::Block  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060db00
//
// 0060db00  83ec0c               sub esp, 0xc
// 0060db03  d94110               fld dword ptr [ecx + 0x10]
// 0060db06  56                   push esi
// 0060db07  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060db0b  dcc8                 fmul st(0), st(0)
// 0060db0d  8d442404             lea eax, [esp + 4]
// 0060db11  50                   push eax
// 0060db12  d84c241c             fmul dword ptr [esp + 0x1c]
// 0060db16  56                   push esi
// 0060db17  d80db4a87a00         fmul dword ptr [0x7aa8b4]
// 0060db1d  d954240c             fst dword ptr [esp + 0xc]
// 0060db21  d9542410             fst dword ptr [esp + 0x10]
// 0060db25  d95c2414             fstp dword ptr [esp + 0x14]
// 0060db29  e832d2f9ff           call 0x5aad60
// 0060db2e  83c408               add esp, 8
// 0060db31  8bc6                 mov eax, esi
// 0060db33  5e                   pop esi
// 0060db34  83c40c               add esp, 0xc
// 0060db37  c20800               ret 8

struct Block {
    char pad[0x10];
    float sizeX;
    void* projectToFace(float* ray, int clip, int onBorder);
};

extern float G_7aa8b4;

extern "C" void* __stdcall func_005aad60(float* out, float* ray);

void* Block::projectToFace(float* ray, int clip, int onBorder)
{
    float v = sizeX * sizeX * ray[2] * G_7aa8b4;
    float tmp[3];
    tmp[0] = v;
    tmp[1] = v;
    tmp[2] = v;
    func_005aad60(tmp, ray);
    return ray;
}
