// roc 2009-12 004f52b0  unit: RBX::GfxAttachement  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f52b0
//
// 004f52b0  51                   push ecx
// 004f52b1  56                   push esi
// 004f52b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f52b6  81c1c0000000         add ecx, 0xc0
// 004f52bc  51                   push ecx
// 004f52bd  8bce                 mov ecx, esi
// 004f52bf  c744240800000000     mov dword ptr [esp + 8], 0
// 004f52c7  ff15f0b69800         call dword ptr [0x98b6f0]
// 004f52cd  8bc6                 mov eax, esi
// 004f52cf  5e                   pop esi
// 004f52d0  59                   pop ecx
// 004f52d1  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_004a31e0@@QAEPAUStr_004a31e0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_004a31e0 { int words[8]; };
extern void (__thiscall* str_ctor_004a31e0)(Str_004a31e0*, Str_004a31e0*);
struct X_004a31e0 {
    char pad[0xc0];
    Str_004a31e0 value;
    Str_004a31e0* copy(Str_004a31e0* out);
};
Str_004a31e0* X_004a31e0::copy(Str_004a31e0* out)
{
    volatile int zero = 0;
    str_ctor_004a31e0(out, &value);
    return out;
}