// roc 2010-06 004336a0  unit: G3D::VColor3::?$XItem  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004336a0
//
// 004336a0  51                   push ecx
// 004336a1  8b542408             mov edx, dword ptr [esp + 8]
// 004336a5  d97c2408             fnstcw word ptr [esp + 8]
// 004336a9  0fb7442408           movzx eax, word ptr [esp + 8]
// 004336ae  d94208               fld dword ptr [edx + 8]
// 004336b1  dd058076a000         fld qword ptr [0xa07680]
// 004336b7  0d000c0000           or eax, 0xc00
// 004336bc  890424               mov dword ptr [esp], eax
// 004336bf  dcc9                 fmul st(1), st(0)
// 004336c1  d9c9                 fxch st(1)
// 004336c3  56                   push esi
// 004336c4  d96c2404             fldcw word ptr [esp + 4]
// 004336c8  57                   push edi
// 004336c9  8b31                 mov esi, dword ptr [ecx]
// 004336cb  db5c2408             fistp dword ptr [esp + 8]
// 004336cf  0fb6442408           movzx eax, byte ptr [esp + 8]
// 004336d4  0fb6f8               movzx edi, al
// 004336d7  d96c2410             fldcw word ptr [esp + 0x10]
// 004336db  c1e708               shl edi, 8
// 004336de  d94204               fld dword ptr [edx + 4]
// 004336e1  d97c2410             fnstcw word ptr [esp + 0x10]
// 004336e5  d8c9                 fmul st(1)
// 004336e7  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 004336ec  0d000c0000           or eax, 0xc00
// 004336f1  89442408             mov dword ptr [esp + 8], eax
// 004336f5  d96c2408             fldcw word ptr [esp + 8]
// 004336f9  db5c2408             fistp dword ptr [esp + 8]
// 004336fd  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00433702  0bf8                 or edi, eax
// 00433704  c1e708               shl edi, 8
// 00433707  d96c2410             fldcw word ptr [esp + 0x10]
// 0043370b  d80a                 fmul dword ptr [edx]
// 0043370d  d97c2410             fnstcw word ptr [esp + 0x10]
// 00433711  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00433716  0d000c0000           or eax, 0xc00
// 0043371b  89442408             mov dword ptr [esp + 8], eax
// 0043371f  d96c2408             fldcw word ptr [esp + 8]
// 00433723  db5c2408             fistp dword ptr [esp + 8]
// 00433727  8a542408             mov dl, byte ptr [esp + 8]
// 0043372b  0fb6c2               movzx eax, dl
// 0043372e  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 00433734  d96c2410             fldcw word ptr [esp + 0x10]
// 00433738  0bf8                 or edi, eax
// 0043373a  57                   push edi
// 0043373b  ffd2                 call edx
// 0043373d  5f                   pop edi
// 0043373e  5e                   pop esi
// 0043373f  59                   pop ecx
// 00433740  c20400               ret 4
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