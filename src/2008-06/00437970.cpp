// from server: 100% by king_originala
// roc 2008-06 00437970  unit: G3D::VColor3::?$XItem  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437970
//
// 00437970  51                   push ecx
// 00437971  8b542408             mov edx, dword ptr [esp + 8]
// 00437975  d97c2408             fnstcw word ptr [esp + 8]
// 00437979  0fb7442408           movzx eax, word ptr [esp + 8]
// 0043797e  d94208               fld dword ptr [edx + 8]
// 00437981  dd05d8358100         fld qword ptr [0x8135d8]
// 00437987  0d000c0000           or eax, 0xc00
// 0043798c  890424               mov dword ptr [esp], eax
// 0043798f  dcc9                 fmul st(1), st(0)
// 00437991  d9c9                 fxch st(1)
// 00437993  56                   push esi
// 00437994  d96c2404             fldcw word ptr [esp + 4]
// 00437998  57                   push edi
// 00437999  8b31                 mov esi, dword ptr [ecx]
// 0043799b  db5c2408             fistp dword ptr [esp + 8]
// 0043799f  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004379a4  0fb6f8               movzx edi, al
// 004379a7  d96c2410             fldcw word ptr [esp + 0x10]
// 004379ab  c1e708               shl edi, 8
// 004379ae  d94204               fld dword ptr [edx + 4]
// 004379b1  d97c2410             fnstcw word ptr [esp + 0x10]
// 004379b5  d8c9                 fmul st(1)
// 004379b7  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004379bc  0d000c0000           or eax, 0xc00
// 004379c1  89442408             mov dword ptr [esp + 8], eax
// 004379c5  d96c2408             fldcw word ptr [esp + 8]
// 004379c9  db5c2408             fistp dword ptr [esp + 8]
// 004379cd  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004379d2  0bf8                 or edi, eax
// 004379d4  c1e708               shl edi, 8
// 004379d7  d96c2410             fldcw word ptr [esp + 0x10]
// 004379db  d80a                 fmul dword ptr [edx]
// 004379dd  d97c2410             fnstcw word ptr [esp + 0x10]
// 004379e1  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004379e6  0d000c0000           or eax, 0xc00
// 004379eb  89442408             mov dword ptr [esp + 8], eax
// 004379ef  d96c2408             fldcw word ptr [esp + 8]
// 004379f3  db5c2408             fistp dword ptr [esp + 8]
// 004379f7  8a542408             mov dl, byte ptr [esp + 8]
// 004379fb  0fb6c2               movzx eax, dl
// 004379fe  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00437a04  d96c2410             fldcw word ptr [esp + 0x10]
// 00437a08  0bf8                 or edi, eax
// 00437a0a  57                   push edi
// 00437a0b  ffd2                 call edx
// 00437a0d  5f                   pop edi
// 00437a0e  5e                   pop esi
// 00437a0f  59                   pop ecx
// 00437a10  c20400               ret 4

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
