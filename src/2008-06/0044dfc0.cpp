// from server: 100% by king_originala
// roc 2008-06 0044dfc0  unit: CRobloxControlColorSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044dfc0
//
// 0044dfc0  83ec10               sub esp, 0x10
// 0044dfc3  53                   push ebx
// 0044dfc4  8bd9                 mov ebx, ecx
// 0044dfc6  8b0d34dd9600         mov ecx, dword ptr [0x96dd34]
// 0044dfcc  2b0d30dd9600         sub ecx, dword ptr [0x96dd30]
// 0044dfd2  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0044dfd7  f7e9                 imul ecx
// 0044dfd9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044dfdd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044dfe1  55                   push ebp
// 0044dfe2  57                   push edi
// 0044dfe3  d1fa                 sar edx, 1
// 0044dfe5  50                   push eax
// 0044dfe6  8bfa                 mov edi, edx
// 0044dfe8  51                   push ecx
// 0044dfe9  8dabc0000000         lea ebp, [ebx + 0xc0]
// 0044dfef  c1ef1f               shr edi, 0x1f
// 0044dff2  55                   push ebp
// 0044dff3  03fa                 add edi, edx
// 0044dff5  ff152c2d8000         call dword ptr [0x802d2c]
// 0044dffb  85c0                 test eax, eax
// 0044dffd  750c                 jne 0x44e00b
// 0044dfff  5f                   pop edi
// 0044e000  5d                   pop ebp
// 0044e001  83c8ff               or eax, 0xffffffff
// 0044e004  5b                   pop ebx
// 0044e005  83c410               add esp, 0x10
// 0044e008  c20800               ret 8
// 0044e00b  56                   push esi
// 0044e00c  33f6                 xor esi, esi
// 0044e00e  85ff                 test edi, edi
// 0044e010  7e65                 jle 0x44e077
// 0044e012  8bd6                 mov edx, esi
// 0044e014  81e207000080         and edx, 0x80000007
// 0044e01a  7905                 jns 0x44e021
// 0044e01c  4a                   dec edx
// 0044e01d  83caf8               or edx, 0xfffffff8
// 0044e020  42                   inc edx
// 0044e021  8b4500               mov eax, dword ptr [ebp]
// 0044e024  c1e205               shl edx, 5
// 0044e027  8d4c0202             lea ecx, [edx + eax + 2]
// 0044e02b  8bc6                 mov eax, esi
// 0044e02d  99                   cdq 
// 0044e02e  83e207               and edx, 7
// 0044e031  03c2                 add eax, edx
// 0044e033  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0044e039  c1f803               sar eax, 3
// 0044e03c  c1e005               shl eax, 5
// 0044e03f  8d441002             lea eax, [eax + edx + 2]
// 0044e043  89442414             mov dword ptr [esp + 0x14], eax
// 0044e047  83c020               add eax, 0x20
// 0044e04a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0044e04e  83c120               add ecx, 0x20
// 0044e051  8944241c             mov dword ptr [esp + 0x1c], eax
// 0044e055  8b442428             mov eax, dword ptr [esp + 0x28]
// 0044e059  894c2418             mov dword ptr [esp + 0x18], ecx
// 0044e05d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044e061  50                   push eax
// 0044e062  51                   push ecx
// 0044e063  8d542418             lea edx, [esp + 0x18]
// 0044e067  52                   push edx
// 0044e068  ff152c2d8000         call dword ptr [0x802d2c]
// 0044e06e  85c0                 test eax, eax
// 0044e070  7512                 jne 0x44e084
// 0044e072  46                   inc esi
// 0044e073  3bf7                 cmp esi, edi
// 0044e075  7c9b                 jl 0x44e012
// 0044e077  5e                   pop esi
// 0044e078  5f                   pop edi
// 0044e079  5d                   pop ebp
// 0044e07a  83c8ff               or eax, 0xffffffff
// 0044e07d  5b                   pop ebx
// 0044e07e  83c410               add esp, 0x10
// 0044e081  c20800               ret 8
// 0044e084  8bc6                 mov eax, esi
// 0044e086  5e                   pop esi
// 0044e087  5f                   pop edi
// 0044e088  5d                   pop ebp
// 0044e089  5b                   pop ebx
// 0044e08a  83c410               add esp, 0x10
// 0044e08d  c20800               ret 8

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
