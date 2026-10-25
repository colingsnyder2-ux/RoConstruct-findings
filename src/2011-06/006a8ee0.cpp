// from server: 80% by atomic.potato
// roc 2011-06 006a8ee0  unit: RBX::VGuiBase::?$NonFactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a8ee0
//
// 006a8ee0  8bc1                 mov eax, ecx
// 006a8ee2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a8ee6  8b11                 mov edx, dword ptr [ecx]
// 006a8ee8  0f57c0               xorps xmm0, xmm0
// 006a8eeb  8910                 mov dword ptr [eax], edx
// 006a8eed  8b5104               mov edx, dword ptr [ecx + 4]
// 006a8ef0  895004               mov dword ptr [eax + 4], edx
// 006a8ef3  8b5108               mov edx, dword ptr [ecx + 8]
// 006a8ef6  895008               mov dword ptr [eax + 8], edx
// 006a8ef9  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006a8efc  89480c               mov dword ptr [eax + 0xc], ecx
// 006a8eff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a8f03  8b11                 mov edx, dword ptr [ecx]
// 006a8f05  895010               mov dword ptr [eax + 0x10], edx
// 006a8f08  8b5104               mov edx, dword ptr [ecx + 4]
// 006a8f0b  895014               mov dword ptr [eax + 0x14], edx
// 006a8f0e  8b5108               mov edx, dword ptr [ecx + 8]
// 006a8f11  895018               mov dword ptr [eax + 0x18], edx
// 006a8f14  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006a8f17  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a8f1b  f30f114020           movss dword ptr [eax + 0x20], xmm0
// 006a8f20  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 006a8f26  89481c               mov dword ptr [eax + 0x1c], ecx
// 006a8f29  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a8f2d  f30f114024           movss dword ptr [eax + 0x24], xmm0
// 006a8f32  f30f10442418         movss xmm0, dword ptr [esp + 0x18]
// 006a8f38  895028               mov dword ptr [eax + 0x28], edx
// 006a8f3b  89482c               mov dword ptr [eax + 0x2c], ecx
// 006a8f3e  f30f114030           movss dword ptr [eax + 0x30], xmm0
// 006a8f43  c7403800000000       mov dword ptr [eax + 0x38], 0
// 006a8f4a  c21800               ret 0x18

struct S {
    char pad0[0x10];
    char pad1[0x10];
    float f20;
    float f24;
    int i28;
    int i2c;
    float f30;
    char pad34[4];
    int i38;
    S* ctor(const S* a, const S* b, float x, int y, int z, float w);
};

S* S::ctor(const S* a, const S* b, float x, int y, int z, float w)
{
    *(int*)((char*)this + 0x00) = *(int*)((char*)a + 0x00);
    *(int*)((char*)this + 0x04) = *(int*)((char*)a + 0x04);
    *(int*)((char*)this + 0x08) = *(int*)((char*)a + 0x08);
    *(int*)((char*)this + 0x0c) = *(int*)((char*)a + 0x0c);
    *(int*)((char*)this + 0x10) = *(int*)((char*)b + 0x00);
    *(int*)((char*)this + 0x14) = *(int*)((char*)b + 0x04);
    *(int*)((char*)this + 0x18) = *(int*)((char*)b + 0x08);
    *(int*)((char*)this + 0x1c) = *(int*)((char*)b + 0x0c);
    f20 = 0.0f;
    f24 = x;
    i28 = y;
    i2c = z;
    f30 = w;
    i38 = 0;
    return this;
}
