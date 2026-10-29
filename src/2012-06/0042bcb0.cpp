// roc 2012-06 0042bcb0  unit: CSelectionTreeCtrl  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042bcb0
//
// 0042bcb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042bcb4  56                   push esi
// 0042bcb5  8b742408             mov esi, dword ptr [esp + 8]
// 0042bcb9  2bce                 sub ecx, esi
// 0042bcbb  c1f902               sar ecx, 2
// 0042bcbe  85c9                 test ecx, ecx
// 0042bcc0  7e2e                 jle 0x42bcf0
// 0042bcc2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042bcc6  57                   push edi
// 0042bcc7  8b38                 mov edi, dword ptr [eax]
// 0042bcc9  8da42400000000       lea esp, [esp]
// 0042bcd0  8bc1                 mov eax, ecx
// 0042bcd2  99                   cdq 
// 0042bcd3  2bc2                 sub eax, edx
// 0042bcd5  d1f8                 sar eax, 1
// 0042bcd7  393c86               cmp dword ptr [esi + eax*4], edi
// 0042bcda  730d                 jae 0x42bce9
// 0042bcdc  83caff               or edx, 0xffffffff
// 0042bcdf  2bd0                 sub edx, eax
// 0042bce1  8d748604             lea esi, [esi + eax*4 + 4]
// 0042bce5  03ca                 add ecx, edx
// 0042bce7  eb02                 jmp 0x42bceb
// 0042bce9  8bc8                 mov ecx, eax
// 0042bceb  85c9                 test ecx, ecx
// 0042bced  7fe1                 jg 0x42bcd0
// 0042bcef  5f                   pop edi
// 0042bcf0  8bc6                 mov eax, esi
// 0042bcf2  5e                   pop esi
// 0042bcf3  c3                   ret 
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