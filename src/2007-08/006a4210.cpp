// from server: 97% by colin
// roc 2007-08 006a4210  unit: CXTPMouseManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4210
//
// 006a4210  53                   push ebx
// 006a4211  56                   push esi
// 006a4212  57                   push edi
// 006a4213  6a00                 push 0
// 006a4215  8bf9                 mov edi, ecx
// 006a4217  8b07                 mov eax, dword ptr [edi]
// 006a4219  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 006a421f  6a00                 push 0
// 006a4221  680c040000           push 0x40c
// 006a4226  ffd2                 call edx
// 006a4228  8bf0                 mov esi, eax
// 006a422a  85f6                 test esi, esi
// 006a422c  7417                 je 0x6a4245
// 006a422e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a4232  83ee01               sub esi, 1
// 006a4235  56                   push esi
// 006a4236  8bcf                 mov ecx, edi
// 006a4238  e883ffffff           call 0x6a41c0
// 006a423d  3bc3                 cmp eax, ebx
// 006a423f  740d                 je 0x6a424e
// 006a4241  85f6                 test esi, esi
// 006a4243  75ed                 jne 0x6a4232
// 006a4245  5f                   pop edi
// 006a4246  5e                   pop esi
// 006a4247  83c8ff               or eax, 0xffffffff
// 006a424a  5b                   pop ebx
// 006a424b  c20400               ret 4
// 006a424e  5f                   pop edi
// 006a424f  8bc6                 mov eax, esi
// 006a4251  5e                   pop esi
// 006a4252  5b                   pop ebx
// 006a4253  c20400               ret 4

struct CXTPMouseManager {
    int FindItem(int nStart);
    int Find(int nItem);
};

int CXTPMouseManager::Find(int nItem)
{
    int (__stdcall* fn)(int, int, int);
    int nCount;
    fn = *(int (__stdcall**)(int, int, int))((char*)(*(int*)this) + 0x118);
    nCount = fn(0x40c, 0, 0);
    if (nCount != 0) {
        do {
            nCount--;
            if (this->FindItem(nCount) == nItem)
                return nCount;
        } while (nCount != 0);
    }
    return -1;
}
