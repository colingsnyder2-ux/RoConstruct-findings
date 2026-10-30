// roc 2009-12 008678d0  unit: CXTPPropertyGridItemColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008678d0
//
// 008678d0  51                   push ecx
// 008678d1  56                   push esi
// 008678d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008678d6  81c1b4000000         add ecx, 0xb4
// 008678dc  51                   push ecx
// 008678dd  8bce                 mov ecx, esi
// 008678df  c744240800000000     mov dword ptr [esp + 8], 0
// 008678e7  ff1594de9800         call dword ptr [0x98de94]
// 008678ed  8bc6                 mov eax, esi
// 008678ef  5e                   pop esi
// 008678f0  59                   pop ecx
// 008678f1  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0078c8d0@@QAEPAUStr_0078c8d0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0078c8d0 { int words[8]; };
extern void (__thiscall* str_ctor_0078c8d0)(Str_0078c8d0*, Str_0078c8d0*);
struct X_0078c8d0 {
    char pad[0xb4];
    Str_0078c8d0 value;
    Str_0078c8d0* copy(Str_0078c8d0* out);
};
Str_0078c8d0* X_0078c8d0::copy(Str_0078c8d0* out)
{
    volatile int zero = 0;
    str_ctor_0078c8d0(out, &value);
    return out;
}