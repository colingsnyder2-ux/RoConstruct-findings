// roc 2009-12 0049a650  unit: RBX::LevelGenFunc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049a650
//
// 0049a650  51                   push ecx
// 0049a651  56                   push esi
// 0049a652  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049a656  83c10c               add ecx, 0xc
// 0049a659  51                   push ecx
// 0049a65a  8bce                 mov ecx, esi
// 0049a65c  c744240800000000     mov dword ptr [esp + 8], 0
// 0049a664  ff15f4bc9800         call dword ptr [0x98bcf4]
// 0049a66a  8bc6                 mov eax, esi
// 0049a66c  5e                   pop esi
// 0049a66d  59                   pop ecx
// 0049a66e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_008eddb0@@QAEPAUStr_008eddb0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_008eddb0 { int words[8]; };
extern void (__thiscall* str_ctor_008eddb0)(Str_008eddb0*, Str_008eddb0*);
struct X_008eddb0 {
    char pad[0xc];
    Str_008eddb0 value;
    Str_008eddb0* copy(Str_008eddb0* out);
};
Str_008eddb0* X_008eddb0::copy(Str_008eddb0* out)
{
    volatile int zero = 0;
    str_ctor_008eddb0(out, &value);
    return out;
}