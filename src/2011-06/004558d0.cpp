// from server: 84% by atomic.potato
// roc 2011-06 004558d0  unit: RBX::CRenderSettings::W4GeometryQuality::?$EnumDesc  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004558d0
//
// 004558d0  8b442404             mov eax, dword ptr [esp + 4]
// 004558d4  56                   push esi
// 004558d5  83c004               add eax, 4
// 004558d8  50                   push eax
// 004558d9  8bf1                 mov esi, ecx
// 004558db  e8b0e3ffff           call 0x453c90
// 004558e0  8b00                 mov eax, dword ptr [eax]
// 004558e2  83c404               add esp, 4
// 004558e5  85c0                 test eax, eax
// 004558e7  7d06                 jge 0x4558ef
// 004558e9  33c0                 xor eax, eax
// 004558eb  5e                   pop esi
// 004558ec  c20400               ret 4
// 004558ef  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 004558f2  2b4e68               sub ecx, dword ptr [esi + 0x68]
// 004558f5  c1f902               sar ecx, 2
// 004558f8  3bc1                 cmp eax, ecx
// 004558fa  73ed                 jae 0x4558e9
// 004558fc  8b5668               mov edx, dword ptr [esi + 0x68]
// 004558ff  8b0482               mov eax, dword ptr [edx + eax*4]
// 00455902  5e                   pop esi
// 00455903  c20400               ret 4

struct CRenderSettings {
    char pad0[0x68];
    int* begin;
    int* end;
    int get(int index);
};

extern "C" int* __cdecl sub_453C90(int*);

int CRenderSettings::get(int index)
{
    int v = *sub_453C90((int*)(index + 4));
    if (v < 0)
        return 0;
    int count = end - begin;
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v];
}
