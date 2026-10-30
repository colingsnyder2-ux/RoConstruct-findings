// roc 2009-12 008a39f0  unit: CXTPReportGroupRow_Batch  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a39f0
//
// 008a39f0  51                   push ecx
// 008a39f1  56                   push esi
// 008a39f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a39f6  83c174               add ecx, 0x74
// 008a39f9  51                   push ecx
// 008a39fa  8bce                 mov ecx, esi
// 008a39fc  c744240800000000     mov dword ptr [esp + 8], 0
// 008a3a04  ff1594de9800         call dword ptr [0x98de94]
// 008a3a0a  8bc6                 mov eax, esi
// 008a3a0c  5e                   pop esi
// 008a3a0d  59                   pop ecx
// 008a3a0e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_0041a940@@QAEPAUStr_0041a940@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_0041a940 { int words[8]; };
extern void (__thiscall* str_ctor_0041a940)(Str_0041a940*, Str_0041a940*);
struct X_0041a940 {
    char pad[0x74];
    Str_0041a940 value;
    Str_0041a940* copy(Str_0041a940* out);
};
Str_0041a940* X_0041a940::copy(Str_0041a940* out)
{
    volatile int zero = 0;
    str_ctor_0041a940(out, &value);
    return out;
}