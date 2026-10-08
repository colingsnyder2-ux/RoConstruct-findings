// from server: 100% by colin
// roc 2007-08 004861c0  unit: G3D::VertexAndPixelShader  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004861c0
//
// 004861c0  56                   push esi
// 004861c1  8bf1                 mov esi, ecx
// 004861c3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004861c6  50                   push eax
// 004861c7  ff1554eb7700         call dword ptr [0x77eb54]
// 004861cd  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 004861d0  8b5618               mov edx, dword ptr [esi + 0x18]
// 004861d3  51                   push ecx
// 004861d4  52                   push edx
// 004861d5  8bce                 mov ecx, esi
// 004861d7  e894ffffff           call 0x486170
// 004861dc  5e                   pop esi
// 004861dd  c3                   ret 

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
