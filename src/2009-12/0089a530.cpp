// roc 2009-12 0089a530  unit: CXTPRibbonBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a530
//
// 0089a530  51                   push ecx
// 0089a531  56                   push esi
// 0089a532  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0089a536  83c130               add ecx, 0x30
// 0089a539  51                   push ecx
// 0089a53a  8bce                 mov ecx, esi
// 0089a53c  c744240800000000     mov dword ptr [esp + 8], 0
// 0089a544  ff1594de9800         call dword ptr [0x98de94]
// 0089a54a  8bc6                 mov eax, esi
// 0089a54c  5e                   pop esi
// 0089a54d  59                   pop ecx
// 0089a54e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0077f6d0@@QAEPAUStr_0077f6d0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0077f6d0 { int words[8]; };
extern void (__thiscall* str_ctor_0077f6d0)(Str_0077f6d0*, Str_0077f6d0*);
struct X_0077f6d0 {
    char pad[0x30];
    Str_0077f6d0 value;
    Str_0077f6d0* copy(Str_0077f6d0* out);
};
Str_0077f6d0* X_0077f6d0::copy(Str_0077f6d0* out)
{
    volatile int zero = 0;
    str_ctor_0077f6d0(out, &value);
    return out;
}