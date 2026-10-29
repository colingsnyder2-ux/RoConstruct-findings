// roc 2009-12 008243b0  unit: CXTPReportControl  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008243b0
//
// 008243b0  51                   push ecx
// 008243b1  56                   push esi
// 008243b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008243b6  81c180020000         add ecx, 0x280
// 008243bc  51                   push ecx
// 008243bd  8bce                 mov ecx, esi
// 008243bf  c744240800000000     mov dword ptr [esp + 8], 0
// 008243c7  ff1594de9800         call dword ptr [0x98de94]
// 008243cd  8bc6                 mov eax, esi
// 008243cf  5e                   pop esi
// 008243d0  59                   pop ecx
// 008243d1  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_007495a0@@QAEPAUStr_007495a0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_007495a0 { int words[8]; };
extern void (__thiscall* str_ctor_007495a0)(Str_007495a0*, Str_007495a0*);
struct X_007495a0 {
    char pad[0x280];
    Str_007495a0 value;
    Str_007495a0* copy(Str_007495a0* out);
};
Str_007495a0* X_007495a0::copy(Str_007495a0* out)
{
    volatile int zero = 0;
    str_ctor_007495a0(out, &value);
    return out;
}