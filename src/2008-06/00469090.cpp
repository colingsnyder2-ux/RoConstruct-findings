// from server: 100% by atomic.potato
// roc 2008-06 00469090  unit: DxUserInput  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469090
//
// 00469090  56                   push esi
// 00469091  8bf1                 mov esi, ecx
// 00469093  e8080b0a00           call 0x509ba0
// 00469098  d900                 fld dword ptr [eax]
// 0046909a  d95e60               fstp dword ptr [esi + 0x60]
// 0046909d  d94004               fld dword ptr [eax + 4]
// 004690a0  d95e64               fstp dword ptr [esi + 0x64]
// 004690a3  5e                   pop esi
// 004690a4  c3                   ret 

struct G3D_Shader
{
    static float* GetValue();
};

struct DxUserInput
{
    char pad0[96];
    float m_x;
    float m_y;
    void f();
};

void DxUserInput::f()
{
    float* p = G3D_Shader::GetValue();
    m_x = p[0];
    m_y = p[1];
}
