// from server: 84% by atomic.potato
// roc 2011-06 00455910  unit: RBX::CRenderSettings::W4QualityLevel::?$EnumDesc  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455910
//
// 00455910  8b442404             mov eax, dword ptr [esp + 4]
// 00455914  56                   push esi
// 00455915  83c004               add eax, 4
// 00455918  50                   push eax
// 00455919  8bf1                 mov esi, ecx
// 0045591b  e800e4ffff           call 0x453d20
// 00455920  8b00                 mov eax, dword ptr [eax]
// 00455922  83c404               add esp, 4
// 00455925  85c0                 test eax, eax
// 00455927  7d06                 jge 0x45592f
// 00455929  33c0                 xor eax, eax
// 0045592b  5e                   pop esi
// 0045592c  c20400               ret 4
// 0045592f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00455932  2b4e68               sub ecx, dword ptr [esi + 0x68]
// 00455935  c1f902               sar ecx, 2
// 00455938  3bc1                 cmp eax, ecx
// 0045593a  73ed                 jae 0x455929
// 0045593c  8b5668               mov edx, dword ptr [esi + 0x68]
// 0045593f  8b0482               mov eax, dword ptr [edx + eax*4]
// 00455942  5e                   pop esi
// 00455943  c20400               ret 4

struct CRenderSettings {
    char pad_0000[0x68];
    int* begin;
    int* end;
    int getQualityLevel(int* p);
};

extern "C" int* __cdecl sub_453D20(int* p);

int CRenderSettings::getQualityLevel(int* p)
{
    int v = *sub_453D20(p + 1);
    if (v < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned int)v >= (unsigned int)count)
        return 0;
    return begin[v];
}
