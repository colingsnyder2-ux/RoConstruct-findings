// roc 2009-12 007f8e30  unit: CRobloxControlColorSelector  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8e30
//
// 007f8e30  51                   push ecx
// 007f8e31  56                   push esi
// 007f8e32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f8e36  83c154               add ecx, 0x54
// 007f8e39  51                   push ecx
// 007f8e3a  8bce                 mov ecx, esi
// 007f8e3c  c744240800000000     mov dword ptr [esp + 8], 0
// 007f8e44  ff1594de9800         call dword ptr [0x98de94]
// 007f8e4a  8bc6                 mov eax, esi
// 007f8e4c  5e                   pop esi
// 007f8e4d  59                   pop ecx
// 007f8e4e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0040fc00@@QAEPAUStr_0040fc00@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0040fc00 { int words[8]; };
extern void (__thiscall* str_ctor_0040fc00)(Str_0040fc00*, Str_0040fc00*);
struct X_0040fc00 {
    char pad[0x54];
    Str_0040fc00 value;
    Str_0040fc00* copy(Str_0040fc00* out);
};
Str_0040fc00* X_0040fc00::copy(Str_0040fc00* out)
{
    volatile int zero = 0;
    str_ctor_0040fc00(out, &value);
    return out;
}