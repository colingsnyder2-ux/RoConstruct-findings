// from server: 100% by king_originala
// roc 2008-06 004acf00  unit: RBX::Network::Replicator::ChangePropertyItem  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acf00
//
// 004acf00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004acf04  56                   push esi
// 004acf05  8b742408             mov esi, dword ptr [esp + 8]
// 004acf09  2bce                 sub ecx, esi
// 004acf0b  c1f902               sar ecx, 2
// 004acf0e  85c9                 test ecx, ecx
// 004acf10  7e2e                 jle 0x4acf40
// 004acf12  8b442410             mov eax, dword ptr [esp + 0x10]
// 004acf16  57                   push edi
// 004acf17  8b38                 mov edi, dword ptr [eax]
// 004acf19  8da42400000000       lea esp, [esp]
// 004acf20  8bc1                 mov eax, ecx
// 004acf22  99                   cdq 
// 004acf23  2bc2                 sub eax, edx
// 004acf25  d1f8                 sar eax, 1
// 004acf27  393c86               cmp dword ptr [esi + eax*4], edi
// 004acf2a  730d                 jae 0x4acf39
// 004acf2c  83caff               or edx, 0xffffffff
// 004acf2f  2bd0                 sub edx, eax
// 004acf31  8d748604             lea esi, [esi + eax*4 + 4]
// 004acf35  03ca                 add ecx, edx
// 004acf37  eb02                 jmp 0x4acf3b
// 004acf39  8bc8                 mov ecx, eax
// 004acf3b  85c9                 test ecx, ecx
// 004acf3d  7fe1                 jg 0x4acf20
// 004acf3f  5f                   pop edi
// 004acf40  8bc6                 mov eax, esi
// 004acf42  5e                   pop esi
// 004acf43  c3                   ret 

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
