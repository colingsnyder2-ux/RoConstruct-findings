// roc 2012-06 00454ae0  unit: G3D::VColor3::?$XItem  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00454ae0
//
// 00454ae0  51                   push ecx
// 00454ae1  8b542408             mov edx, dword ptr [esp + 8]
// 00454ae5  d97c2408             fnstcw word ptr [esp + 8]
// 00454ae9  0fb7442408           movzx eax, word ptr [esp + 8]
// 00454aee  d94208               fld dword ptr [edx + 8]
// 00454af1  dd05383bb500         fld qword ptr [0xb53b38]
// 00454af7  0d000c0000           or eax, 0xc00
// 00454afc  890424               mov dword ptr [esp], eax
// 00454aff  dcc9                 fmul st(1), st(0)
// 00454b01  d9c9                 fxch st(1)
// 00454b03  56                   push esi
// 00454b04  d96c2404             fldcw word ptr [esp + 4]
// 00454b08  57                   push edi
// 00454b09  8b31                 mov esi, dword ptr [ecx]
// 00454b0b  db5c2408             fistp dword ptr [esp + 8]
// 00454b0f  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00454b14  0fb6f8               movzx edi, al
// 00454b17  d96c2410             fldcw word ptr [esp + 0x10]
// 00454b1b  c1e708               shl edi, 8
// 00454b1e  d94204               fld dword ptr [edx + 4]
// 00454b21  d97c2410             fnstcw word ptr [esp + 0x10]
// 00454b25  d8c9                 fmul st(1)
// 00454b27  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00454b2c  0d000c0000           or eax, 0xc00
// 00454b31  89442408             mov dword ptr [esp + 8], eax
// 00454b35  d96c2408             fldcw word ptr [esp + 8]
// 00454b39  db5c2408             fistp dword ptr [esp + 8]
// 00454b3d  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00454b42  0bf8                 or edi, eax
// 00454b44  c1e708               shl edi, 8
// 00454b47  d96c2410             fldcw word ptr [esp + 0x10]
// 00454b4b  d80a                 fmul dword ptr [edx]
// 00454b4d  d97c2410             fnstcw word ptr [esp + 0x10]
// 00454b51  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00454b56  0d000c0000           or eax, 0xc00
// 00454b5b  89442408             mov dword ptr [esp + 8], eax
// 00454b5f  d96c2408             fldcw word ptr [esp + 8]
// 00454b63  db5c2408             fistp dword ptr [esp + 8]
// 00454b67  8a542408             mov dl, byte ptr [esp + 8]
// 00454b6b  0fb6c2               movzx eax, dl
// 00454b6e  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00454b74  d96c2410             fldcw word ptr [esp + 0x10]
// 00454b78  0bf8                 or edi, eax
// 00454b7a  57                   push edi
// 00454b7b  ffd2                 call edx
// 00454b7d  5f                   pop edi
// 00454b7e  5e                   pop esi
// 00454b7f  59                   pop ecx
// 00454b80  c20400               ret 4
// copied from an identical function in another client (function ?setColor@S@@QAEXABUColor3@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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