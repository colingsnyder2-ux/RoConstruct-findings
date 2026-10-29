// roc 2009-06 004311b0  unit: G3D::VColor3::?$XItem  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004311b0
//
// 004311b0  51                   push ecx
// 004311b1  8b542408             mov edx, dword ptr [esp + 8]
// 004311b5  d97c2408             fnstcw word ptr [esp + 8]
// 004311b9  0fb7442408           movzx eax, word ptr [esp + 8]
// 004311be  d94208               fld dword ptr [edx + 8]
// 004311c1  dd05703b8b00         fld qword ptr [0x8b3b70]
// 004311c7  0d000c0000           or eax, 0xc00
// 004311cc  890424               mov dword ptr [esp], eax
// 004311cf  dcc9                 fmul st(1), st(0)
// 004311d1  d9c9                 fxch st(1)
// 004311d3  56                   push esi
// 004311d4  d96c2404             fldcw word ptr [esp + 4]
// 004311d8  57                   push edi
// 004311d9  8b31                 mov esi, dword ptr [ecx]
// 004311db  db5c2408             fistp dword ptr [esp + 8]
// 004311df  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004311e4  0fb6f8               movzx edi, al
// 004311e7  d96c2410             fldcw word ptr [esp + 0x10]
// 004311eb  c1e708               shl edi, 8
// 004311ee  d94204               fld dword ptr [edx + 4]
// 004311f1  d97c2410             fnstcw word ptr [esp + 0x10]
// 004311f5  d8c9                 fmul st(1)
// 004311f7  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004311fc  0d000c0000           or eax, 0xc00
// 00431201  89442408             mov dword ptr [esp + 8], eax
// 00431205  d96c2408             fldcw word ptr [esp + 8]
// 00431209  db5c2408             fistp dword ptr [esp + 8]
// 0043120d  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00431212  0bf8                 or edi, eax
// 00431214  c1e708               shl edi, 8
// 00431217  d96c2410             fldcw word ptr [esp + 0x10]
// 0043121b  d80a                 fmul dword ptr [edx]
// 0043121d  d97c2410             fnstcw word ptr [esp + 0x10]
// 00431221  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00431226  0d000c0000           or eax, 0xc00
// 0043122b  89442408             mov dword ptr [esp + 8], eax
// 0043122f  d96c2408             fldcw word ptr [esp + 8]
// 00431233  db5c2408             fistp dword ptr [esp + 8]
// 00431237  8a542408             mov dl, byte ptr [esp + 8]
// 0043123b  0fb6c2               movzx eax, dl
// 0043123e  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00431244  d96c2410             fldcw word ptr [esp + 0x10]
// 00431248  0bf8                 or edi, eax
// 0043124a  57                   push edi
// 0043124b  ffd2                 call edx
// 0043124d  5f                   pop edi
// 0043124e  5e                   pop esi
// 0043124f  59                   pop ecx
// 00431250  c20400               ret 4
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