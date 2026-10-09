// from server: 89% by colin
// roc 2007-08 006f5e80  unit: CXTPPropertyGridInplaceButton  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5e80
//
// 006f5e80  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006f5e83  56                   push esi
// 006f5e84  33c0                 xor eax, eax
// 006f5e86  85d2                 test edx, edx
// 006f5e88  57                   push edi
// 006f5e89  7e1f                 jle 0x6f5eaa
// 006f5e8b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f5e8f  90                   nop 
// 006f5e90  85c0                 test eax, eax
// 006f5e92  7c2c                 jl 0x6f5ec0
// 006f5e94  3bc2                 cmp eax, edx
// 006f5e96  7d28                 jge 0x6f5ec0
// 006f5e98  8b7924               mov edi, dword ptr [ecx + 0x24]
// 006f5e9b  8b3c87               mov edi, dword ptr [edi + eax*4]
// 006f5e9e  397730               cmp dword ptr [edi + 0x30], esi
// 006f5ea1  740e                 je 0x6f5eb1
// 006f5ea3  83c001               add eax, 1
// 006f5ea6  3bc2                 cmp eax, edx
// 006f5ea8  7ce6                 jl 0x6f5e90
// 006f5eaa  5f                   pop edi
// 006f5eab  33c0                 xor eax, eax
// 006f5ead  5e                   pop esi
// 006f5eae  c20400               ret 4
// 006f5eb1  3bc2                 cmp eax, edx
// 006f5eb3  7d0b                 jge 0x6f5ec0
// 006f5eb5  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 006f5eb8  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006f5ebb  5f                   pop edi
// 006f5ebc  5e                   pop esi
// 006f5ebd  c20400               ret 4
// 006f5ec0  e85ba0f3ff           call 0x62ff20

struct CXTPPropertyGridInplaceButton
{
    int FindButton(int id);
};

int CXTPPropertyGridInplaceButton::FindButton(int id)
{
    int count = *(int*)((char*)this + 0x28);
    int i = 0;
    if (count > 0)
    {
        do
        {
            if (i < 0 || i >= count)
                break;
            int* arr = *(int**)((char*)this + 0x24);
            int item = arr[i];
            if (*(int*)((char*)item + 0x30) == id)
            {
                if (i >= count)
                    break;
                int* arr2 = *(int**)((char*)this + 0x24);
                return arr2[i];
            }
            ++i;
        } while (i < count);
    }
    return 0;
}
