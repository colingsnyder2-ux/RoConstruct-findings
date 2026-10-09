// from server: 67% by colin
// roc 2007-08 006e0580  unit: CXTPDockingPane  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0580
//
// 006e0580  51                   push ecx
// 006e0581  53                   push ebx
// 006e0582  55                   push ebp
// 006e0583  56                   push esi
// 006e0584  57                   push edi
// 006e0585  8bf9                 mov edi, ecx
// 006e0587  8b4708               mov eax, dword ptr [edi + 8]
// 006e058a  33f6                 xor esi, esi
// 006e058c  3bc6                 cmp eax, esi
// 006e058e  89742410             mov dword ptr [esp + 0x10], esi
// 006e0592  7e3a                 jle 0x6e05ce
// 006e0594  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006e0598  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006e059c  8d642400             lea esp, [esp]
// 006e05a0  85f6                 test esi, esi
// 006e05a2  7c36                 jl 0x6e05da
// 006e05a4  3bf0                 cmp esi, eax
// 006e05a6  7d32                 jge 0x6e05da
// 006e05a8  8b4704               mov eax, dword ptr [edi + 4]
// 006e05ab  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006e05ae  8d04b0               lea eax, [eax + esi*4]
// 006e05b1  53                   push ebx
// 006e05b2  55                   push ebp
// 006e05b3  e8d89f0000           call 0x6ea590
// 006e05b8  85c0                 test eax, eax
// 006e05ba  7408                 je 0x6e05c4
// 006e05bc  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006e05c4  8b4708               mov eax, dword ptr [edi + 8]
// 006e05c7  83c601               add esi, 1
// 006e05ca  3bf0                 cmp esi, eax
// 006e05cc  7cd2                 jl 0x6e05a0
// 006e05ce  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e05d2  5f                   pop edi
// 006e05d3  5e                   pop esi
// 006e05d4  5d                   pop ebp
// 006e05d5  5b                   pop ebx
// 006e05d6  59                   pop ecx
// 006e05d7  c20800               ret 8
// 006e05da  e841f9f4ff           call 0x62ff20

struct CXTPDockingPane {
    char pad0[4];
    int* m_pData;
    int m_nCount;
    int Find(int a, int b);
};

extern "C" int __stdcall sub_006ea590(int* p, int a, int b);
extern "C" void __stdcall sub_0062ff20();

int CXTPDockingPane::Find(int a, int b)
{
    int found = 0;
    int i = 0;
    if (m_nCount > 0) {
        do {
            if (i < 0 || i >= m_nCount) {
                sub_0062ff20();
            }
            int* p = &m_pData[i];
            if (sub_006ea590(p, a, b)) {
                found = 1;
            }
            i++;
        } while (i < m_nCount);
    }
    return found;
}
