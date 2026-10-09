// from server: 55% by colin
// roc 2007-08 0063bb50  unit: PAVCXTPControlAction::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bb50
//
// 0063bb50  8b5164               mov edx, dword ptr [ecx + 0x64]
// 0063bb53  33c0                 xor eax, eax
// 0063bb55  85d2                 test edx, edx
// 0063bb57  7e23                 jle 0x63bb7c
// 0063bb59  56                   push esi
// 0063bb5a  8b742408             mov esi, dword ptr [esp + 8]
// 0063bb5e  83c15c               add ecx, 0x5c
// 0063bb61  57                   push edi
// 0063bb62  85c0                 test eax, eax
// 0063bb64  7c3a                 jl 0x63bba0
// 0063bb66  3b4108               cmp eax, dword ptr [ecx + 8]
// 0063bb69  7d35                 jge 0x63bba0
// 0063bb6b  8b7904               mov edi, dword ptr [ecx + 4]
// 0063bb6e  393487               cmp dword ptr [edi + eax*4], esi
// 0063bb71  740c                 je 0x63bb7f
// 0063bb73  83c001               add eax, 1
// 0063bb76  3bc2                 cmp eax, edx
// 0063bb78  7ce8                 jl 0x63bb62
// 0063bb7a  5f                   pop edi
// 0063bb7b  5e                   pop esi
// 0063bb7c  c20400               ret 4
// 0063bb7f  6a01                 push 1
// 0063bb81  50                   push eax
// 0063bb82  e8296b0900           call 0x6d26b0
// 0063bb87  5f                   pop edi
// 0063bb88  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 0063bb92  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 0063bb9c  5e                   pop esi
// 0063bb9d  c20400               ret 4
// 0063bba0  e87b43ffff           call 0x62ff20

struct CArray {
    int m_nSize;
    int m_nGrowBy;
    void* m_pData;
};

struct CXTPControlAction {
    char pad[0x5c];
    CArray m_arrActions;
    int m_nCount;
    int f(int);
};

int CXTPControlAction::f(int arg) {
    int nCount = m_nCount;
    int i = 0;
    if (nCount > 0) {
        int* pData = (int*)m_arrActions.m_pData;
        while (i >= 0 && i < m_arrActions.m_nSize) {
            if (pData[i] != arg) {
                extern void __stdcall sub_6d26b0(int, int);
                sub_6d26b0(i, 1);
                *(int*)((char*)this + 0x9c) = 1;
                *(int*)((char*)this + 0xa0) = 0;
                return 0;
            }
            i++;
            if (i >= nCount) break;
        }
    }
    return 0;
}
