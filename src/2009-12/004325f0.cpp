// roc 2009-12 004325f0  unit: RBX::VBrickColor::?$XItem  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004325f0
//
// 004325f0  51                   push ecx
// 004325f1  56                   push esi
// 004325f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004325f6  81c1ac000000         add ecx, 0xac
// 004325fc  51                   push ecx
// 004325fd  8bce                 mov ecx, esi
// 004325ff  c744240800000000     mov dword ptr [esp + 8], 0
// 00432607  ff1594de9800         call dword ptr [0x98de94]
// 0043260d  8bc6                 mov eax, esi
// 0043260f  5e                   pop esi
// 00432610  59                   pop ecx
// 00432611  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_00431610@@QAEPAUStr_00431610@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_00431610 { int words[8]; };
extern void (__thiscall* str_ctor_00431610)(Str_00431610*, Str_00431610*);
struct X_00431610 {
    char pad[0xac];
    Str_00431610 value;
    Str_00431610* copy(Str_00431610* out);
};
Str_00431610* X_00431610::copy(Str_00431610* out)
{
    volatile int zero = 0;
    str_ctor_00431610(out, &value);
    return out;
}