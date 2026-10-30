// roc 2009-06 00509230  unit: RBX::Network::PhysicsSender::Job  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00509230
//
// 00509230  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00509234  56                   push esi
// 00509235  8b742408             mov esi, dword ptr [esp + 8]
// 00509239  2bce                 sub ecx, esi
// 0050923b  c1f902               sar ecx, 2
// 0050923e  85c9                 test ecx, ecx
// 00509240  7e2e                 jle 0x509270
// 00509242  8b442410             mov eax, dword ptr [esp + 0x10]
// 00509246  57                   push edi
// 00509247  8b38                 mov edi, dword ptr [eax]
// 00509249  8da42400000000       lea esp, [esp]
// 00509250  8bc1                 mov eax, ecx
// 00509252  99                   cdq 
// 00509253  2bc2                 sub eax, edx
// 00509255  d1f8                 sar eax, 1
// 00509257  393c86               cmp dword ptr [esi + eax*4], edi
// 0050925a  730d                 jae 0x509269
// 0050925c  83caff               or edx, 0xffffffff
// 0050925f  2bd0                 sub edx, eax
// 00509261  8d748604             lea esi, [esi + eax*4 + 4]
// 00509265  03ca                 add ecx, edx
// 00509267  eb02                 jmp 0x50926b
// 00509269  8bc8                 mov ecx, eax
// 0050926b  85c9                 test ecx, ecx
// 0050926d  7fe1                 jg 0x509250
// 0050926f  5f                   pop edi
// 00509270  8bc6                 mov eax, esi
// 00509272  5e                   pop esi
// 00509273  c3                   ret 
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