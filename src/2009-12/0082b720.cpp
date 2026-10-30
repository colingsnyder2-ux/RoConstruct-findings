// roc 2009-12 0082b720  unit: CXTPReportRecordItemPreview  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b720
//
// 0082b720  51                   push ecx
// 0082b721  56                   push esi
// 0082b722  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0082b726  83c17c               add ecx, 0x7c
// 0082b729  51                   push ecx
// 0082b72a  8bce                 mov ecx, esi
// 0082b72c  c744240800000000     mov dword ptr [esp + 8], 0
// 0082b734  ff1594de9800         call dword ptr [0x98de94]
// 0082b73a  8bc6                 mov eax, esi
// 0082b73c  5e                   pop esi
// 0082b73d  59                   pop ecx
// 0082b73e  c20400               ret 4
// copied from an identical function in another client (function ?copy@X_00750950@@QAEPAUStr_00750950@@PAU2@@Z)

// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
struct Str_00750950 { int words[8]; };
extern void (__thiscall* str_ctor_00750950)(Str_00750950*, Str_00750950*);
struct X_00750950 {
    char pad[0x7c];
    Str_00750950 value;
    Str_00750950* copy(Str_00750950* out);
};
Str_00750950* X_00750950::copy(Str_00750950* out)
{
    volatile int zero = 0;
    str_ctor_00750950(out, &value);
    return out;
}