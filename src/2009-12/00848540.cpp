// roc 2009-12 00848540  unit: CXTPControls  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848540
//
// 00848540  51                   push ecx
// 00848541  56                   push esi
// 00848542  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00848546  81c1f0000000         add ecx, 0xf0
// 0084854c  51                   push ecx
// 0084854d  8bce                 mov ecx, esi
// 0084854f  c744240800000000     mov dword ptr [esp + 8], 0
// 00848557  ff1594de9800         call dword ptr [0x98de94]
// 0084855d  8bc6                 mov eax, esi
// 0084855f  5e                   pop esi
// 00848560  59                   pop ecx
// 00848561  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0076d780@@QAEPAUStr_0076d780@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0076d780 { int words[8]; };
extern void (__thiscall* str_ctor_0076d780)(Str_0076d780*, Str_0076d780*);
struct X_0076d780 {
    char pad[0xf0];
    Str_0076d780 value;
    Str_0076d780* copy(Str_0076d780* out);
};
Str_0076d780* X_0076d780::copy(Str_0076d780* out)
{
    volatile int zero = 0;
    str_ctor_0076d780(out, &value);
    return out;
}