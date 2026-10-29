// roc 2009-12 0081a070  unit: CXTPReportView  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a070
//
// 0081a070  51                   push ecx
// 0081a071  56                   push esi
// 0081a072  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0081a076  83c124               add ecx, 0x24
// 0081a079  51                   push ecx
// 0081a07a  8bce                 mov ecx, esi
// 0081a07c  c744240800000000     mov dword ptr [esp + 8], 0
// 0081a084  ff1594de9800         call dword ptr [0x98de94]
// 0081a08a  8bc6                 mov eax, esi
// 0081a08c  5e                   pop esi
// 0081a08d  59                   pop ecx
// 0081a08e  c20400               ret 4
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