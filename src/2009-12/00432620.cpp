// roc 2009-12 00432620  unit: RBX::VBrickColor::?$XItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432620
//
// 00432620  51                   push ecx
// 00432621  56                   push esi
// 00432622  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00432626  81c1a4000000         add ecx, 0xa4
// 0043262c  51                   push ecx
// 0043262d  8bce                 mov ecx, esi
// 0043262f  c744240800000000     mov dword ptr [esp + 8], 0
// 00432637  ff1594de9800         call dword ptr [0x98de94]
// 0043263d  8bc6                 mov eax, esi
// 0043263f  5e                   pop esi
// 00432640  59                   pop ecx
// 00432641  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_00431650@@QAEPAUStr_00431650@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_00431650 { int words[8]; };
extern void (__thiscall* str_ctor_00431650)(Str_00431650*, Str_00431650*);
struct X_00431650 {
    char pad[0xa4];
    Str_00431650 value;
    Str_00431650* copy(Str_00431650* out);
};
Str_00431650* X_00431650::copy(Str_00431650* out)
{
    volatile int zero = 0;
    str_ctor_00431650(out, &value);
    return out;
}