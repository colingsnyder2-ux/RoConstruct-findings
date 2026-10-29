// roc 2009-06 0044c0f0  unit: CRobloxControlColorSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044c0f0
//
// 0044c0f0  83ec10               sub esp, 0x10
// 0044c0f3  53                   push ebx
// 0044c0f4  8bd9                 mov ebx, ecx
// 0044c0f6  8b0d5cb3a300         mov ecx, dword ptr [0xa3b35c]
// 0044c0fc  2b0d58b3a300         sub ecx, dword ptr [0xa3b358]
// 0044c102  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044c107  f7e9                 imul ecx
// 0044c109  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044c10d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044c111  55                   push ebp
// 0044c112  57                   push edi
// 0044c113  d1fa                 sar edx, 1
// 0044c115  50                   push eax
// 0044c116  8bfa                 mov edi, edx
// 0044c118  51                   push ecx
// 0044c119  8dabc0000000         lea ebp, [ebx + 0xc0]
// 0044c11f  c1ef1f               shr edi, 0x1f
// 0044c122  55                   push ebp
// 0044c123  03fa                 add edi, edx
// 0044c125  ff15c0ed8900         call dword ptr [0x89edc0]
// 0044c12b  85c0                 test eax, eax
// 0044c12d  750c                 jne 0x44c13b
// 0044c12f  5f                   pop edi
// 0044c130  5d                   pop ebp
// 0044c131  83c8ff               or eax, 0xffffffff
// 0044c134  5b                   pop ebx
// 0044c135  83c410               add esp, 0x10
// 0044c138  c20800               ret 8
// 0044c13b  56                   push esi
// 0044c13c  33f6                 xor esi, esi
// 0044c13e  85ff                 test edi, edi
// 0044c140  7e65                 jle 0x44c1a7
// 0044c142  8bd6                 mov edx, esi
// 0044c144  81e207000080         and edx, 0x80000007
// 0044c14a  7905                 jns 0x44c151
// 0044c14c  4a                   dec edx
// 0044c14d  83caf8               or edx, 0xfffffff8
// 0044c150  42                   inc edx
// 0044c151  8b4500               mov eax, dword ptr [ebp]
// 0044c154  c1e205               shl edx, 5
// 0044c157  8d4c0202             lea ecx, [edx + eax + 2]
// 0044c15b  8bc6                 mov eax, esi
// 0044c15d  99                   cdq 
// 0044c15e  83e207               and edx, 7
// 0044c161  03c2                 add eax, edx
// 0044c163  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0044c169  c1f803               sar eax, 3
// 0044c16c  c1e005               shl eax, 5
// 0044c16f  8d441002             lea eax, [eax + edx + 2]
// 0044c173  89442414             mov dword ptr [esp + 0x14], eax
// 0044c177  83c020               add eax, 0x20
// 0044c17a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044c17e  83c120               add ecx, 0x20
// 0044c181  8944241c             mov dword ptr [esp + 0x1c], eax
// 0044c185  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044c189  894c2418             mov dword ptr [esp + 0x18], ecx
// 0044c18d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044c191  50                   push eax
// 0044c192  51                   push ecx
// 0044c193  8d542418             lea edx, [esp + 0x18]
// 0044c197  52                   push edx
// 0044c198  ff15c0ed8900         call dword ptr [0x89edc0]
// 0044c19e  85c0                 test eax, eax
// 0044c1a0  7512                 jne 0x44c1b4
// 0044c1a2  46                   inc esi
// 0044c1a3  3bf7                 cmp esi, edi
// 0044c1a5  7c9b                 jl 0x44c142
// 0044c1a7  5e                   pop esi
// 0044c1a8  5f                   pop edi
// 0044c1a9  5d                   pop ebp
// 0044c1aa  83c8ff               or eax, 0xffffffff
// 0044c1ad  5b                   pop ebx
// 0044c1ae  83c410               add esp, 0x10
// 0044c1b1  c20800               ret 8
// 0044c1b4  8bc6                 mov eax, esi
// 0044c1b6  5e                   pop esi
// 0044c1b7  5f                   pop edi
// 0044c1b8  5d                   pop ebp
// 0044c1b9  5b                   pop ebx
// 0044c1ba  83c410               add esp, 0x10
// 0044c1bd  c20800               ret 8
// copied from an identical function in another client (function ?hitTest@CRobloxControlColorSelector@@QAEHUPOINT@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct POINT
{
    int x, y;
};

struct RECT
{
    int left, top, right, bottom;
};

extern "C" int (__stdcall *PtInRect)(const RECT*, POINT);

struct Entry
{
    char data[12];
};

extern Entry* entriesBegin;
extern Entry* entriesEnd;

struct CRobloxControlColorSelector
{
    char storage[0xc0];
    RECT bounds;

    int hitTest(POINT point);
};

int CRobloxControlColorSelector::hitTest(POINT point)
{
    int count = entriesEnd - entriesBegin;
    if (!PtInRect(&bounds, point))
        return -1;

    for (int i = 0; i < count; ++i)
    {
        RECT rect;
        rect.left = bounds.left + (i % 8) * 32 + 2;
        rect.top = bounds.top + (i / 8) * 32 + 2;
        rect.right = rect.left + 32;
        rect.bottom = rect.top + 32;
        if (PtInRect(&rect, point))
            return i;
    }

    return -1;
}