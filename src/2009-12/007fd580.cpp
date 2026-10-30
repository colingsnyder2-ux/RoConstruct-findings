// roc 2009-12 007fd580  unit: CXTPControlComboBoxAutoCompleteWnd  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd580
//
// 007fd580  51                   push ecx
// 007fd581  56                   push esi
// 007fd582  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007fd586  81c1f4000000         add ecx, 0xf4
// 007fd58c  51                   push ecx
// 007fd58d  8bce                 mov ecx, esi
// 007fd58f  c744240800000000     mov dword ptr [esp + 8], 0
// 007fd597  ff1594de9800         call dword ptr [0x98de94]
// 007fd59d  8bc6                 mov eax, esi
// 007fd59f  5e                   pop esi
// 007fd5a0  59                   pop ecx
// 007fd5a1  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_007226f0@@QAEPAUStr_007226f0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_007226f0 { int words[8]; };
extern void (__thiscall* str_ctor_007226f0)(Str_007226f0*, Str_007226f0*);
struct X_007226f0 {
    char pad[0xf4];
    Str_007226f0 value;
    Str_007226f0* copy(Str_007226f0* out);
};
Str_007226f0* X_007226f0::copy(Str_007226f0* out)
{
    volatile int zero = 0;
    str_ctor_007226f0(out, &value);
    return out;
}