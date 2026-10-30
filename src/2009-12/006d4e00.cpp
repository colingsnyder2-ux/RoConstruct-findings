// roc 2009-12 006d4e00  unit: RBX::AxisMoveTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d4e00
//
// 006d4e00  51                   push ecx
// 006d4e01  56                   push esi
// 006d4e02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d4e06  83c124               add ecx, 0x24
// 006d4e09  51                   push ecx
// 006d4e0a  8bce                 mov ecx, esi
// 006d4e0c  c744240800000000     mov dword ptr [esp + 8], 0
// 006d4e14  ff15f0b69800         call dword ptr [0x98b6f0]
// 006d4e1a  8bc6                 mov eax, esi
// 006d4e1c  5e                   pop esi
// 006d4e1d  59                   pop ecx
// 006d4e1e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_00653930@@QAEPAUStr_00653930@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_00653930 { int words[8]; };
extern void (__thiscall* str_ctor_00653930)(Str_00653930*, Str_00653930*);
struct X_00653930 {
    char pad[0x24];
    Str_00653930 value;
    Str_00653930* copy(Str_00653930* out);
};
Str_00653930* X_00653930::copy(Str_00653930* out)
{
    volatile int zero = 0;
    str_ctor_00653930(out, &value);
    return out;
}