// from server: 100% by king_originala
// roc 2008-06 005a0560  unit: RBX::ArrowTool  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0560
//
// 005a0560  8b442404             mov eax, dword ptr [esp + 4]
// 005a0564  8b9004010000         mov edx, dword ptr [eax + 0x104]
// 005a056a  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 005a0570  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 005a0576  85c9                 test ecx, ecx
// 005a0578  7414                 je 0x5a058e
// 005a057a  8d9b00000000         lea ebx, [ebx]
// 005a0580  8bd0                 mov edx, eax
// 005a0582  8bc1                 mov eax, ecx
// 005a0584  8b8804010000         mov ecx, dword ptr [eax + 0x104]
// 005a058a  85c9                 test ecx, ecx
// 005a058c  75f2                 jne 0x5a0580
// 005a058e  8b82e4020000         mov eax, dword ptr [edx + 0x2e4]
// 005a0594  c3                   ret 

int __cdecl f(int a1)
{
    int* previous = *(int**)(a1 + 0x104);
    int* current = *(int**)((char*)previous + 0x104);
    while (*(int**)((char*)current + 0x104) != 0) {
        previous = current;
        current = *(int**)((char*)current + 0x104);
    }
    return *(int*)((char*)previous + 0x2e4);
}
