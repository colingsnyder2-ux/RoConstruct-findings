// roc 2010-06 0050cce0  unit: RBX::Network::NetworkOwnerJob  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050cce0
//
// 0050cce0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050cce4  56                   push esi
// 0050cce5  8b742408             mov esi, dword ptr [esp + 8]
// 0050cce9  2bce                 sub ecx, esi
// 0050cceb  c1f902               sar ecx, 2
// 0050ccee  85c9                 test ecx, ecx
// 0050ccf0  7e2e                 jle 0x50cd20
// 0050ccf2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050ccf6  57                   push edi
// 0050ccf7  8b38                 mov edi, dword ptr [eax]
// 0050ccf9  8da42400000000       lea esp, [esp]
// 0050cd00  8bc1                 mov eax, ecx
// 0050cd02  99                   cdq 
// 0050cd03  2bc2                 sub eax, edx
// 0050cd05  d1f8                 sar eax, 1
// 0050cd07  393c86               cmp dword ptr [esi + eax*4], edi
// 0050cd0a  730d                 jae 0x50cd19
// 0050cd0c  83caff               or edx, 0xffffffff
// 0050cd0f  2bd0                 sub edx, eax
// 0050cd11  8d748604             lea esi, [esi + eax*4 + 4]
// 0050cd15  03ca                 add ecx, edx
// 0050cd17  eb02                 jmp 0x50cd1b
// 0050cd19  8bc8                 mov ecx, eax
// 0050cd1b  85c9                 test ecx, ecx
// 0050cd1d  7fe1                 jg 0x50cd00
// 0050cd1f  5f                   pop edi
// 0050cd20  8bc6                 mov eax, esi
// 0050cd22  5e                   pop esi
// 0050cd23  c3                   ret 
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