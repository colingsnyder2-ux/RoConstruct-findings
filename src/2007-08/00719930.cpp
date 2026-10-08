// from server: 88% by colin
// roc 2007-08 00719930  unit: CXTPRibbonGroupControlPopup  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719930
//
// 00719930  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 00719933  33c0                 xor eax, eax
// 00719935  85d2                 test edx, edx
// 00719937  7e20                 jle 0x719959
// 00719939  56                   push esi
// 0071993a  8b742408             mov esi, dword ptr [esp + 8]
// 0071993e  57                   push edi
// 0071993f  90                   nop 
// 00719940  85c0                 test eax, eax
// 00719942  7c23                 jl 0x719967
// 00719944  3bc2                 cmp eax, edx
// 00719946  7d1f                 jge 0x719967
// 00719948  8b7948               mov edi, dword ptr [ecx + 0x48]
// 0071994b  393487               cmp dword ptr [edi + eax*4], esi
// 0071994e  740c                 je 0x71995c
// 00719950  83c001               add eax, 1
// 00719953  3bc2                 cmp eax, edx
// 00719955  7ce9                 jl 0x719940
// 00719957  5f                   pop edi
// 00719958  5e                   pop esi
// 00719959  c20400               ret 4
// 0071995c  5f                   pop edi
// 0071995d  5e                   pop esi
// 0071995e  89442404             mov dword ptr [esp + 4], eax
// 00719962  e969ffffff           jmp 0x7198d0
// 00719967  e8b465f1ff           call 0x62ff20

struct CXTPRibbonGroupControlPopup
{
    int sub_7198D0(int);
    int Find(int);
};

int CXTPRibbonGroupControlPopup::Find(int arg)
{
    int count = *(int*)((char*)this + 0x4c);
    int i = 0;
    if (count <= 0)
        return 0;
    while (i < count)
    {
        if (i < 0 || i >= count)
            break;
        int* arr = *(int**)((char*)this + 0x48);
        if (arr[i] == arg)
        {
            return sub_7198D0(i);
        }
        i++;
    }
    return 0;
}
