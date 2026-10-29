// roc 2009-12 00454c40  unit: CRobloxDHtmlDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00454c40
//
// 00454c40  51                   push ecx
// 00454c41  56                   push esi
// 00454c42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00454c46  81c198000000         add ecx, 0x98
// 00454c4c  51                   push ecx
// 00454c4d  8bce                 mov ecx, esi
// 00454c4f  c744240800000000     mov dword ptr [esp + 8], 0
// 00454c57  ff15f0b69800         call dword ptr [0x98b6f0]
// 00454c5d  8bc6                 mov eax, esi
// 00454c5f  5e                   pop esi
// 00454c60  59                   pop ecx
// 00454c61  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_00455d00@@QAEPAUStr_00455d00@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_00455d00 { int words[8]; };
extern void (__thiscall* str_ctor_00455d00)(Str_00455d00*, Str_00455d00*);
struct X_00455d00 {
    char pad[0x98];
    Str_00455d00 value;
    Str_00455d00* copy(Str_00455d00* out);
};
Str_00455d00* X_00455d00::copy(Str_00455d00* out)
{
    volatile int zero = 0;
    str_ctor_00455d00(out, &value);
    return out;
}