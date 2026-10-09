// from server: 86% by colin
// roc 2007-08 00438820  unit: G3D::VColor3::?$XItem  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438820
//
// 00438820  51                   push ecx
// 00438821  8b01                 mov eax, dword ptr [ecx]
// 00438823  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00438829  ffd2                 call edx
// 0043882b  0fb6c8               movzx ecx, al
// 0043882e  890c24               mov dword ptr [esp], ecx
// 00438831  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00438835  0fb6d4               movzx edx, ah
// 00438838  db0424               fild dword ptr [esp]
// 0043883b  dd05a8d37800         fld qword ptr [0x78d3a8]
// 00438841  89542408             mov dword ptr [esp + 8], edx
// 00438845  dcf9                 fdiv st(1), st(0)
// 00438847  c1e810               shr eax, 0x10
// 0043884a  0fb6c0               movzx eax, al
// 0043884d  d9c9                 fxch st(1)
// 0043884f  d919                 fstp dword ptr [ecx]
// 00438851  db442408             fild dword ptr [esp + 8]
// 00438855  89442408             mov dword ptr [esp + 8], eax
// 00438859  8bc1                 mov eax, ecx
// 0043885b  d8f1                 fdiv st(1)
// 0043885d  d95904               fstp dword ptr [ecx + 4]
// 00438860  db442408             fild dword ptr [esp + 8]
// 00438864  def1                 fdivrp st(1)
// 00438866  d95908               fstp dword ptr [ecx + 8]
// 00438869  59                   pop ecx
// 0043886a  c20400               ret 4

struct VColor3
{
    float r;
    float g;
    float b;
};

struct XItem
{
    VColor3 *convert(VColor3 *out);
};

VColor3 *XItem::convert(VColor3 *out)
{
    unsigned int packed = (*(unsigned int (__thiscall **)(void))((char *)this + 0xE8))();
    unsigned char r = (unsigned char)packed;
    unsigned char g = (unsigned char)(packed >> 8);
    unsigned char b = (unsigned char)(packed >> 16);
    out->r = (float)r / 255.0;
    out->g = (float)g / 255.0;
    out->b = (float)b / 255.0;
    return out;
}
