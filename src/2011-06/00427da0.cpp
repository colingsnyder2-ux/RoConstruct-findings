// roc 2011-06 00427da0  unit: CSelectionTreeCtrl  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00427da0
//
// 00427da0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00427da4  56                   push esi
// 00427da5  8b742408             mov esi, dword ptr [esp + 8]
// 00427da9  2bce                 sub ecx, esi
// 00427dab  c1f902               sar ecx, 2
// 00427dae  85c9                 test ecx, ecx
// 00427db0  7e2e                 jle 0x427de0
// 00427db2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00427db6  57                   push edi
// 00427db7  8b38                 mov edi, dword ptr [eax]
// 00427db9  8da42400000000       lea esp, [esp]
// 00427dc0  8bc1                 mov eax, ecx
// 00427dc2  99                   cdq 
// 00427dc3  2bc2                 sub eax, edx
// 00427dc5  d1f8                 sar eax, 1
// 00427dc7  393c86               cmp dword ptr [esi + eax*4], edi
// 00427dca  730d                 jae 0x427dd9
// 00427dcc  83caff               or edx, 0xffffffff
// 00427dcf  2bd0                 sub edx, eax
// 00427dd1  8d748604             lea esi, [esi + eax*4 + 4]
// 00427dd5  03ca                 add ecx, edx
// 00427dd7  eb02                 jmp 0x427ddb
// 00427dd9  8bc8                 mov ecx, eax
// 00427ddb  85c9                 test ecx, ecx
// 00427ddd  7fe1                 jg 0x427dc0
// 00427ddf  5f                   pop edi
// 00427de0  8bc6                 mov eax, esi
// 00427de2  5e                   pop esi
// 00427de3  c3                   ret 
// copied from an identical function in another client (function ?lower_bound_value@ns_ROCX000002@@YAPAIPAI0ABI@Z)

namespace ns_ROCX000002 {
unsigned int* __cdecl lower_bound_value(
    unsigned int* first,
    unsigned int* last,
    const unsigned int& value)
{
    int count = last - first;
    while (count > 0) {
        int step = count / 2;
        unsigned int* middle = first + step;
        if (*middle < value) {
            first = middle + 1;
            count -= step + 1;
        } else {
            count = step;
        }
    }
    return first;
}
}
