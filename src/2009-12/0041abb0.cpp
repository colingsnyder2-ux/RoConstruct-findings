// roc 2009-12 0041abb0  unit: CInstanceRecord::CNameItem  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041abb0
//
// 0041abb0  51                   push ecx
// 0041abb1  56                   push esi
// 0041abb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041abb6  83c140               add ecx, 0x40
// 0041abb9  51                   push ecx
// 0041abba  8bce                 mov ecx, esi
// 0041abbc  c744240800000000     mov dword ptr [esp + 8], 0
// 0041abc4  ff1594de9800         call dword ptr [0x98de94]
// 0041abca  8bc6                 mov eax, esi
// 0041abcc  5e                   pop esi
// 0041abcd  59                   pop ecx
// 0041abce  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0077f730@@QAEPAUStr_0077f730@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0077f730 { int words[8]; };
extern void (__thiscall* str_ctor_0077f730)(Str_0077f730*, Str_0077f730*);
struct X_0077f730 {
    char pad[0x40];
    Str_0077f730 value;
    Str_0077f730* copy(Str_0077f730* out);
};
Str_0077f730* X_0077f730::copy(Str_0077f730* out)
{
    volatile int zero = 0;
    str_ctor_0077f730(out, &value);
    return out;
}