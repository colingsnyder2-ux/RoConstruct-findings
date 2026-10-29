// roc 2009-12 007587c0  unit: RBX::ImageLabel  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007587c0
//
// 007587c0  51                   push ecx
// 007587c1  56                   push esi
// 007587c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007587c6  83c104               add ecx, 4
// 007587c9  51                   push ecx
// 007587ca  8bce                 mov ecx, esi
// 007587cc  c744240800000000     mov dword ptr [esp + 8], 0
// 007587d4  ff15f0b69800         call dword ptr [0x98b6f0]
// 007587da  8bc6                 mov eax, esi
// 007587dc  5e                   pop esi
// 007587dd  59                   pop ecx
// 007587de  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_006df3a0@@QAEPAUStr_006df3a0@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_006df3a0 { int words[8]; };
extern void (__thiscall* str_ctor_006df3a0)(Str_006df3a0*, Str_006df3a0*);
struct X_006df3a0 {
    char pad[0x4];
    Str_006df3a0 value;
    Str_006df3a0* copy(Str_006df3a0* out);
};
Str_006df3a0* X_006df3a0::copy(Str_006df3a0* out)
{
    volatile int zero = 0;
    str_ctor_006df3a0(out, &value);
    return out;
}