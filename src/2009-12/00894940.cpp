// roc 2009-12 00894940  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894940
//
// 00894940  51                   push ecx
// 00894941  56                   push esi
// 00894942  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00894946  81c198000000         add ecx, 0x98
// 0089494c  51                   push ecx
// 0089494d  8bce                 mov ecx, esi
// 0089494f  c744240800000000     mov dword ptr [esp + 8], 0
// 00894957  ff1594de9800         call dword ptr [0x98de94]
// 0089495d  8bc6                 mov eax, esi
// 0089495f  5e                   pop esi
// 00894960  59                   pop ecx
// 00894961  c20400               ret 4
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