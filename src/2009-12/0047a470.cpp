// roc 2009-12 0047a470  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047a470
//
// 0047a470  51                   push ecx
// 0047a471  56                   push esi
// 0047a472  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047a476  83c13c               add ecx, 0x3c
// 0047a479  51                   push ecx
// 0047a47a  8bce                 mov ecx, esi
// 0047a47c  c744240800000000     mov dword ptr [esp + 8], 0
// 0047a484  ff15f0b69800         call dword ptr [0x98b6f0]
// 0047a48a  8bc6                 mov eax, esi
// 0047a48c  5e                   pop esi
// 0047a48d  59                   pop ecx
// 0047a48e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_00470270@@QAEPAUStr_00470270@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_00470270 { int words[8]; };
extern void (__thiscall* str_ctor_00470270)(Str_00470270*, Str_00470270*);
struct X_00470270 {
    char pad[0x3c];
    Str_00470270 value;
    Str_00470270* copy(Str_00470270* out);
};
Str_00470270* X_00470270::copy(Str_00470270* out)
{
    volatile int zero = 0;
    str_ctor_00470270(out, &value);
    return out;
}