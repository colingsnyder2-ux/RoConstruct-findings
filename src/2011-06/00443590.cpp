// roc 2011-06 00443590  unit: G3D::VColor3::?$XItem  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00443590
//
// 00443590  51                   push ecx
// 00443591  8b542408             mov edx, dword ptr [esp + 8]
// 00443595  d97c2408             fnstcw word ptr [esp + 8]
// 00443599  0fb7442408           movzx eax, word ptr [esp + 8]
// 0044359e  d94208               fld dword ptr [edx + 8]
// 004435a1  dd052891a600         fld qword ptr [0xa69128]
// 004435a7  0d000c0000           or eax, 0xc00
// 004435ac  890424               mov dword ptr [esp], eax
// 004435af  dcc9                 fmul st(1), st(0)
// 004435b1  d9c9                 fxch st(1)
// 004435b3  56                   push esi
// 004435b4  d96c2404             fldcw word ptr [esp + 4]
// 004435b8  57                   push edi
// 004435b9  8b31                 mov esi, dword ptr [ecx]
// 004435bb  db5c2408             fistp dword ptr [esp + 8]
// 004435bf  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004435c4  0fb6f8               movzx edi, al
// 004435c7  d96c2410             fldcw word ptr [esp + 0x10]
// 004435cb  c1e708               shl edi, 8
// 004435ce  d94204               fld dword ptr [edx + 4]
// 004435d1  d97c2410             fnstcw word ptr [esp + 0x10]
// 004435d5  d8c9                 fmul st(1)
// 004435d7  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004435dc  0d000c0000           or eax, 0xc00
// 004435e1  89442408             mov dword ptr [esp + 8], eax
// 004435e5  d96c2408             fldcw word ptr [esp + 8]
// 004435e9  db5c2408             fistp dword ptr [esp + 8]
// 004435ed  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004435f2  0bf8                 or edi, eax
// 004435f4  c1e708               shl edi, 8
// 004435f7  d96c2410             fldcw word ptr [esp + 0x10]
// 004435fb  d80a                 fmul dword ptr [edx]
// 004435fd  d97c2410             fnstcw word ptr [esp + 0x10]
// 00443601  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00443606  0d000c0000           or eax, 0xc00
// 0044360b  89442408             mov dword ptr [esp + 8], eax
// 0044360f  d96c2408             fldcw word ptr [esp + 8]
// 00443613  db5c2408             fistp dword ptr [esp + 8]
// 00443617  8a542408             mov dl, byte ptr [esp + 8]
// 0044361b  0fb6c2               movzx eax, dl
// 0044361e  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00443624  d96c2410             fldcw word ptr [esp + 0x10]
// 00443628  0bf8                 or edi, eax
// 0044362a  57                   push edi
// 0044362b  ffd2                 call edx
// 0044362d  5f                   pop edi
// 0044362e  5e                   pop esi
// 0044362f  59                   pop ecx
// 00443630  c20400               ret 4
// copied from an identical function in another client (function ?setColor@S@ns_ROCX00001b@@QAEXABUColor3@2@@Z)

namespace ns_ROCX00001b {
struct Color3 {
    float r, g, b;
};

struct S {
    typedef void (__thiscall *Entry)(S*, unsigned int);
    Entry* table;
    void setColor(const Color3& color);
};

void S::setColor(const Color3& color) {
    table[57](this,
        (((unsigned int)(unsigned char)(int)(color.b * 255.0) << 8 |
          (unsigned char)(int)(color.g * 255.0)) << 8) |
          (unsigned char)(int)(color.r * 255.0));
}
}
