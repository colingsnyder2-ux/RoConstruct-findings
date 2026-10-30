// roc 2009-12 007a92f0  unit: RBX::NewNullTool  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a92f0
//
// 007a92f0  51                   push ecx
// 007a92f1  56                   push esi
// 007a92f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a92f6  83c11c               add ecx, 0x1c
// 007a92f9  51                   push ecx
// 007a92fa  8bce                 mov ecx, esi
// 007a92fc  c744240800000000     mov dword ptr [esp + 8], 0
// 007a9304  ff15f0b69800         call dword ptr [0x98b6f0]
// 007a930a  8bc6                 mov eax, esi
// 007a930c  5e                   pop esi
// 007a930d  59                   pop ecx
// 007a930e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_006cc840@@QAEPAUStr_006cc840@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_006cc840 { int words[8]; };
extern void (__thiscall* str_ctor_006cc840)(Str_006cc840*, Str_006cc840*);
struct X_006cc840 {
    char pad[0x1c];
    Str_006cc840 value;
    Str_006cc840* copy(Str_006cc840* out);
};
Str_006cc840* X_006cc840::copy(Str_006cc840* out)
{
    volatile int zero = 0;
    str_ctor_006cc840(out, &value);
    return out;
}