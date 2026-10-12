// from server: 100% by king_originala
// roc 2008-06 00476a70  unit: G3D::VARArea  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476a70
//
// 00476a70  56                   push esi
// 00476a71  8bf1                 mov esi, ecx
// 00476a73  ff4678               inc dword ptr [esi + 0x78]
// 00476a76  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00476a7a  d901                 fld dword ptr [ecx]
// 00476a7c  d89e5c040000         fcomp dword ptr [esi + 0x45c]
// 00476a82  dfe0                 fnstsw ax
// 00476a84  f6c444               test ah, 0x44
// 00476a87  7a20                 jp 0x476aa9
// 00476a89  d94104               fld dword ptr [ecx + 4]
// 00476a8c  d89e60040000         fcomp dword ptr [esi + 0x460]
// 00476a92  dfe0                 fnstsw ax
// 00476a94  f6c444               test ah, 0x44
// 00476a97  7a10                 jp 0x476aa9
// 00476a99  d94108               fld dword ptr [ecx + 8]
// 00476a9c  d89e64040000         fcomp dword ptr [esi + 0x464]
// 00476aa2  dfe0                 fnstsw ax
// 00476aa4  f6c444               test ah, 0x44
// 00476aa7  7b54                 jnp 0x476afd
// 00476aa9  d901                 fld dword ptr [ecx]
// 00476aab  6824f09600           push 0x96f024
// 00476ab0  d99e5c040000         fstp dword ptr [esi + 0x45c]
// 00476ab6  6802120000           push 0x1202
// 00476abb  d94104               fld dword ptr [ecx + 4]
// 00476abe  6808040000           push 0x408
// 00476ac3  d99e60040000         fstp dword ptr [esi + 0x460]
// 00476ac9  d94108               fld dword ptr [ecx + 8]
// 00476acc  d99e64040000         fstp dword ptr [esi + 0x464]
// 00476ad2  d901                 fld dword ptr [ecx]
// 00476ad4  d91d24f09600         fstp dword ptr [0x96f024]
// 00476ada  d94104               fld dword ptr [ecx + 4]
// 00476add  d91d28f09600         fstp dword ptr [0x96f028]
// 00476ae3  d94108               fld dword ptr [ecx + 8]
// 00476ae6  d91d2cf09600         fstp dword ptr [0x96f02c]
// 00476aec  d9e8                 fld1 
// 00476aee  d91d30f09600         fstp dword ptr [0x96f030]
// 00476af4  ff1570298000         call dword ptr [0x802970]
// 00476afa  ff4670               inc dword ptr [esi + 0x70]
// 00476afd  5e                   pop esi
// 00476afe  c20400               ret 4

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
