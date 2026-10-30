// roc 2009-12 00675a20  unit: RBX::TextDisplay  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00675a20
//
// 00675a20  51                   push ecx
// 00675a21  56                   push esi
// 00675a22  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00675a26  81c1a8000000         add ecx, 0xa8
// 00675a2c  51                   push ecx
// 00675a2d  8bce                 mov ecx, esi
// 00675a2f  c744240800000000     mov dword ptr [esp + 8], 0
// 00675a37  ff15f0b69800         call dword ptr [0x98b6f0]
// 00675a3d  8bc6                 mov eax, esi
// 00675a3f  5e                   pop esi
// 00675a40  59                   pop ecx
// 00675a41  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_004b3830@@QAEPAUStr_004b3830@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_004b3830 { int words[8]; };
extern void (__thiscall* str_ctor_004b3830)(Str_004b3830*, Str_004b3830*);
struct X_004b3830 {
    char pad[0xa8];
    Str_004b3830 value;
    Str_004b3830* copy(Str_004b3830* out);
};
Str_004b3830* X_004b3830::copy(Str_004b3830* out)
{
    volatile int zero = 0;
    str_ctor_004b3830(out, &value);
    return out;
}