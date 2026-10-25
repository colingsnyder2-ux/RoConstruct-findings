// from server: 100% by king_originala
// roc 2008-06 00408150  unit: VCApp::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408150
//
// 00408150  8b442418             mov eax, dword ptr [esp + 0x18]
// 00408154  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00408158  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040815c  50                   push eax
// 0040815d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00408161  51                   push ecx
// 00408162  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00408166  52                   push edx
// 00408167  50                   push eax
// 00408168  51                   push ecx
// 00408169  b9d88b9200           mov ecx, 0x928bd8
// 0040816e  e81dd0ffff           call 0x405190
// 00408173  c21800               ret 0x18

struct S {
    int g(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
};

extern "C" int __stdcall f(
    void *,
    unsigned int a,
    unsigned int b,
    unsigned int c,
    unsigned int d,
    unsigned int e)
{
    return reinterpret_cast<S *>(0x928bd8)->g(a, b, c, d, e);
}
