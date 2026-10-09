// roc 2007-03 00484630  unit: seg_00480000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484630
//
// 00484630  56                   push esi
// 00484631  8bf1                 mov esi, ecx
// 00484633  8b4618               mov eax, dword ptr [esi + 0x18]
// 00484636  50                   push eax
// 00484637  ff156ceb7700         call dword ptr [0x77eb6c]
// 0048463d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00484640  8b5618               mov edx, dword ptr [esi + 0x18]
// 00484643  51                   push ecx
// 00484644  52                   push edx
// 00484645  8bce                 mov ecx, esi
// 00484647  e894ffffff           call 0x4845e0
// 0048464c  5e                   pop esi
// 0048464d  c3                   ret 
// copied from an identical function in another client (function ?apply@G3D_VertexAndPixelShader@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
extern "C" void (__stdcall *glEnable)(unsigned int);

struct G3D_VertexAndPixelShader {
    char pad0[0x18];
    unsigned int enable;
    char pad1[0x1c];
    unsigned int arg;
    void apply();
    void setup(unsigned int, unsigned int);
};

void G3D_VertexAndPixelShader::apply()
{
    glEnable(this->enable);
    this->setup(this->enable, this->arg);
}
}
