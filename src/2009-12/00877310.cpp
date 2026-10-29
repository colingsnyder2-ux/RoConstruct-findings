// roc 2009-12 00877310  unit: CXTPRibbonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877310
//
// 00877310  51                   push ecx
// 00877311  56                   push esi
// 00877312  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00877316  83c134               add ecx, 0x34
// 00877319  51                   push ecx
// 0087731a  8bce                 mov ecx, esi
// 0087731c  c744240800000000     mov dword ptr [esp + 8], 0
// 00877324  ff1594de9800         call dword ptr [0x98de94]
// 0087732a  8bc6                 mov eax, esi
// 0087732c  5e                   pop esi
// 0087732d  59                   pop ecx
// 0087732e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0079c380@@QAEPAUStr_0079c380@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0079c380 { int words[8]; };
extern void (__thiscall* str_ctor_0079c380)(Str_0079c380*, Str_0079c380*);
struct X_0079c380 {
    char pad[0x34];
    Str_0079c380 value;
    Str_0079c380* copy(Str_0079c380* out);
};
Str_0079c380* X_0079c380::copy(Str_0079c380* out)
{
    volatile int zero = 0;
    str_ctor_0079c380(out, &value);
    return out;
}