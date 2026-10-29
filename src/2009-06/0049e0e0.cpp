// roc 2009-06 0049e0e0  unit: G3D::VARArea  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e0e0
//
// 0049e0e0  56                   push esi
// 0049e0e1  8bf1                 mov esi, ecx
// 0049e0e3  ff4678               inc dword ptr [esi + 0x78]
// 0049e0e6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049e0ea  d901                 fld dword ptr [ecx]
// 0049e0ec  d89e5c040000         fcomp dword ptr [esi + 0x45c]
// 0049e0f2  dfe0                 fnstsw ax
// 0049e0f4  f6c444               test ah, 0x44
// 0049e0f7  7a20                 jp 0x49e119
// 0049e0f9  d94104               fld dword ptr [ecx + 4]
// 0049e0fc  d89e60040000         fcomp dword ptr [esi + 0x460]
// 0049e102  dfe0                 fnstsw ax
// 0049e104  f6c444               test ah, 0x44
// 0049e107  7a10                 jp 0x49e119
// 0049e109  d94108               fld dword ptr [ecx + 8]
// 0049e10c  d89e64040000         fcomp dword ptr [esi + 0x464]
// 0049e112  dfe0                 fnstsw ax
// 0049e114  f6c444               test ah, 0x44
// 0049e117  7b54                 jnp 0x49e16d
// 0049e119  d901                 fld dword ptr [ecx]
// 0049e11b  68bcc8a300           push 0xa3c8bc
// 0049e120  d99e5c040000         fstp dword ptr [esi + 0x45c]
// 0049e126  6802120000           push 0x1202
// 0049e12b  d94104               fld dword ptr [ecx + 4]
// 0049e12e  6808040000           push 0x408
// 0049e133  d99e60040000         fstp dword ptr [esi + 0x460]
// 0049e139  d94108               fld dword ptr [ecx + 8]
// 0049e13c  d99e64040000         fstp dword ptr [esi + 0x464]
// 0049e142  d901                 fld dword ptr [ecx]
// 0049e144  d91dbcc8a300         fstp dword ptr [0xa3c8bc]
// 0049e14a  d94104               fld dword ptr [ecx + 4]
// 0049e14d  d91dc0c8a300         fstp dword ptr [0xa3c8c0]
// 0049e153  d94108               fld dword ptr [ecx + 8]
// 0049e156  d91dc4c8a300         fstp dword ptr [0xa3c8c4]
// 0049e15c  d9e8                 fld1 
// 0049e15e  d91dc8c8a300         fstp dword ptr [0xa3c8c8]
// 0049e164  ff157ceb8900         call dword ptr [0x89eb7c]
// 0049e16a  ff4670               inc dword ptr [esi + 0x70]
// 0049e16d  5e                   pop esi
// 0049e16e  c20400               ret 4
// copied from an identical function in another client (function ?setColor@S@@QAEXABUColor@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma float_control(precise, off)

struct Color {
    float r, g, b;
};

float material[4];
extern "C" void (__stdcall *glMaterialfv)(unsigned int, unsigned int, const float *);

struct S {
    char pad0[0x70];
    int changes;
    char pad1[4];
    int requests;
    char pad2[0x3e0];
    Color color;

    void setColor(const Color &value);
};

void S::setColor(const Color &value)
{
    ++requests;
    if (color.r != value.r || color.g != value.g || color.b != value.b) {
        color.r = value.r;
        color.g = value.g;
        color.b = value.b;
        material[0] = value.r;
        material[1] = value.g;
        material[2] = value.b;
        material[3] = 1.0f;
        glMaterialfv(0x408, 0x1202, material);
        ++changes;
    }
}