// roc 2009-12 0055e240  unit: RBX::Network::NetworkOwnerJob  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055e240
//
// 0055e240  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055e244  56                   push esi
// 0055e245  8b742408             mov esi, dword ptr [esp + 8]
// 0055e249  2bce                 sub ecx, esi
// 0055e24b  c1f902               sar ecx, 2
// 0055e24e  85c9                 test ecx, ecx
// 0055e250  7e2e                 jle 0x55e280
// 0055e252  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055e256  57                   push edi
// 0055e257  8b38                 mov edi, dword ptr [eax]
// 0055e259  8da42400000000       lea esp, [esp]
// 0055e260  8bc1                 mov eax, ecx
// 0055e262  99                   cdq 
// 0055e263  2bc2                 sub eax, edx
// 0055e265  d1f8                 sar eax, 1
// 0055e267  393c86               cmp dword ptr [esi + eax*4], edi
// 0055e26a  730d                 jae 0x55e279
// 0055e26c  83caff               or edx, 0xffffffff
// 0055e26f  2bd0                 sub edx, eax
// 0055e271  8d748604             lea esi, [esi + eax*4 + 4]
// 0055e275  03ca                 add ecx, edx
// 0055e277  eb02                 jmp 0x55e27b
// 0055e279  8bc8                 mov ecx, eax
// 0055e27b  85c9                 test ecx, ecx
// 0055e27d  7fe1                 jg 0x55e260
// 0055e27f  5f                   pop edi
// 0055e280  8bc6                 mov eax, esi
// 0055e282  5e                   pop esi
// 0055e283  c3                   ret 
// copied from an identical function in another client (function ?lower_bound_value@@YAPAIPAI0ABI@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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