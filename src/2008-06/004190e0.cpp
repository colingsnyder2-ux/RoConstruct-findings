// from server: 100% by king_originala
// roc 2008-06 004190e0  unit: VCLuaFunction::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004190e0
//
// 004190e0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004190e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004190e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004190ec  50                   push eax
// 004190ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 004190f1  51                   push ecx
// 004190f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004190f6  52                   push edx
// 004190f7  50                   push eax
// 004190f8  51                   push ecx
// 004190f9  b918c69200           mov ecx, 0x92c618
// 004190fe  e88dc0feff           call 0x405190
// 00419103  c21800               ret 0x18

struct S {
    long resolve(const void* iid, wchar_t** names, unsigned int count,
                 unsigned long locale, long* ids);
};

extern S globalObject;

long __stdcall f(void* object, const void* iid, wchar_t** names,
                 unsigned int count, unsigned long locale, long* ids)
{
    return globalObject.resolve(iid, names, count, locale, ids);
}
