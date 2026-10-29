// roc 2009-12 00432290  unit: G3D::VColor3::?$XItem  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432290
//
// 00432290  51                   push ecx
// 00432291  8b542408             mov edx, dword ptr [esp + 8]
// 00432295  d97c2408             fnstcw word ptr [esp + 8]
// 00432299  0fb7442408           movzx eax, word ptr [esp + 8]
// 0043229e  d94208               fld dword ptr [edx + 8]
// 004322a1  dd05e0689a00         fld qword ptr [0x9a68e0]
// 004322a7  0d000c0000           or eax, 0xc00
// 004322ac  890424               mov dword ptr [esp], eax
// 004322af  dcc9                 fmul st(1), st(0)
// 004322b1  d9c9                 fxch st(1)
// 004322b3  56                   push esi
// 004322b4  d96c2404             fldcw word ptr [esp + 4]
// 004322b8  57                   push edi
// 004322b9  8b31                 mov esi, dword ptr [ecx]
// 004322bb  db5c2408             fistp dword ptr [esp + 8]
// 004322bf  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004322c4  0fb6f8               movzx edi, al
// 004322c7  d96c2410             fldcw word ptr [esp + 0x10]
// 004322cb  c1e708               shl edi, 8
// 004322ce  d94204               fld dword ptr [edx + 4]
// 004322d1  d97c2410             fnstcw word ptr [esp + 0x10]
// 004322d5  d8c9                 fmul st(1)
// 004322d7  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004322dc  0d000c0000           or eax, 0xc00
// 004322e1  89442408             mov dword ptr [esp + 8], eax
// 004322e5  d96c2408             fldcw word ptr [esp + 8]
// 004322e9  db5c2408             fistp dword ptr [esp + 8]
// 004322ed  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004322f2  0bf8                 or edi, eax
// 004322f4  c1e708               shl edi, 8
// 004322f7  d96c2410             fldcw word ptr [esp + 0x10]
// 004322fb  d80a                 fmul dword ptr [edx]
// 004322fd  d97c2410             fnstcw word ptr [esp + 0x10]
// 00432301  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00432306  0d000c0000           or eax, 0xc00
// 0043230b  89442408             mov dword ptr [esp + 8], eax
// 0043230f  d96c2408             fldcw word ptr [esp + 8]
// 00432313  db5c2408             fistp dword ptr [esp + 8]
// 00432317  8a542408             mov dl, byte ptr [esp + 8]
// 0043231b  0fb6c2               movzx eax, dl
// 0043231e  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00432324  d96c2410             fldcw word ptr [esp + 0x10]
// 00432328  0bf8                 or edi, eax
// 0043232a  57                   push edi
// 0043232b  ffd2                 call edx
// 0043232d  5f                   pop edi
// 0043232e  5e                   pop esi
// 0043232f  59                   pop ecx
// 00432330  c20400               ret 4
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