// roc 2009-12 008c95a0  unit: CXTPPropertyGridInplaceEdit  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c95a0
//
// 008c95a0  51                   push ecx
// 008c95a1  56                   push esi
// 008c95a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c95a6  83c120               add ecx, 0x20
// 008c95a9  51                   push ecx
// 008c95aa  8bce                 mov ecx, esi
// 008c95ac  c744240800000000     mov dword ptr [esp + 8], 0
// 008c95b4  ff1594de9800         call dword ptr [0x98de94]
// 008c95ba  8bc6                 mov eax, esi
// 008c95bc  5e                   pop esi
// 008c95bd  59                   pop ecx
// 008c95be  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_007eea20@@QAEPAUStr_007eea20@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_007eea20 { int words[8]; };
extern void (__thiscall* str_ctor_007eea20)(Str_007eea20*, Str_007eea20*);
struct X_007eea20 {
    char pad[0x20];
    Str_007eea20 value;
    Str_007eea20* copy(Str_007eea20* out);
};
Str_007eea20* X_007eea20::copy(Str_007eea20* out)
{
    volatile int zero = 0;
    str_ctor_007eea20(out, &value);
    return out;
}