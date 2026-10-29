// roc 2009-12 008772e0  unit: CXTPRibbonTheme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008772e0
//
// 008772e0  51                   push ecx
// 008772e1  56                   push esi
// 008772e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008772e6  83c12c               add ecx, 0x2c
// 008772e9  51                   push ecx
// 008772ea  8bce                 mov ecx, esi
// 008772ec  c744240800000000     mov dword ptr [esp + 8], 0
// 008772f4  ff1594de9800         call dword ptr [0x98de94]
// 008772fa  8bc6                 mov eax, esi
// 008772fc  5e                   pop esi
// 008772fd  59                   pop ecx
// 008772fe  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0079c350@@QAEPAUStr_0079c350@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0079c350 { int words[8]; };
extern void (__thiscall* str_ctor_0079c350)(Str_0079c350*, Str_0079c350*);
struct X_0079c350 {
    char pad[0x2c];
    Str_0079c350 value;
    Str_0079c350* copy(Str_0079c350* out);
};
Str_0079c350* X_0079c350::copy(Str_0079c350* out)
{
    volatile int zero = 0;
    str_ctor_0079c350(out, &value);
    return out;
}