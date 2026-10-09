// from server: 100% by colin
// roc 2007-08 00530b10  unit: RBX::ModelInstance  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530b10
//
// 00530b10  83ec18               sub esp, 0x18
// 00530b13  8d0424               lea eax, [esp]
// 00530b16  50                   push eax
// 00530b17  81c1c8010000         add ecx, 0x1c8
// 00530b1d  e87ef3ffff           call 0x52fea0
// 00530b22  d90424               fld dword ptr [esp]
// 00530b25  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00530b29  d918                 fstp dword ptr [eax]
// 00530b2b  d9442404             fld dword ptr [esp + 4]
// 00530b2f  d95804               fstp dword ptr [eax + 4]
// 00530b32  d9442408             fld dword ptr [esp + 8]
// 00530b36  d95808               fstp dword ptr [eax + 8]
// 00530b39  d944240c             fld dword ptr [esp + 0xc]
// 00530b3d  d9580c               fstp dword ptr [eax + 0xc]
// 00530b40  d9442410             fld dword ptr [esp + 0x10]
// 00530b44  d95810               fstp dword ptr [eax + 0x10]
// 00530b47  d9442414             fld dword ptr [esp + 0x14]
// 00530b4b  d95814               fstp dword ptr [eax + 0x14]
// 00530b4e  83c418               add esp, 0x18
// 00530b51  c20400               ret 4

struct ModelInstance {
    char pad[0x1c8];
    void getSomething(float* out);
    void func_00530b10(float* out);
};

void ModelInstance::func_00530b10(float* out)
{
    float tmp[6];
    ((ModelInstance*)((char*)this + 0x1c8))->getSomething(tmp);
    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
    out[3] = tmp[3];
    out[4] = tmp[4];
    out[5] = tmp[5];
}
