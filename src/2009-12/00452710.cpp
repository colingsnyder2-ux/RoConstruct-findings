// roc 2009-12 00452710  unit: CRobloxControlColorSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452710
//
// 00452710  83ec10               sub esp, 0x10
// 00452713  53                   push ebx
// 00452714  8bd9                 mov ebx, ecx
// 00452716  8b0d94b6b700         mov ecx, dword ptr [0xb7b694]
// 0045271c  2b0d90b6b700         sub ecx, dword ptr [0xb7b690]
// 00452722  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00452727  f7e9                 imul ecx
// 00452729  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045272d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00452731  55                   push ebp
// 00452732  57                   push edi
// 00452733  d1fa                 sar edx, 1
// 00452735  50                   push eax
// 00452736  8bfa                 mov edi, edx
// 00452738  51                   push ecx
// 00452739  8dabc0000000         lea ebp, [ebx + 0xc0]
// 0045273f  c1ef1f               shr edi, 0x1f
// 00452742  55                   push ebp
// 00452743  03fa                 add edi, edx
// 00452745  ff155cca9800         call dword ptr [0x98ca5c]
// 0045274b  85c0                 test eax, eax
// 0045274d  750c                 jne 0x45275b
// 0045274f  5f                   pop edi
// 00452750  5d                   pop ebp
// 00452751  83c8ff               or eax, 0xffffffff
// 00452754  5b                   pop ebx
// 00452755  83c410               add esp, 0x10
// 00452758  c20800               ret 8
// 0045275b  56                   push esi
// 0045275c  33f6                 xor esi, esi
// 0045275e  85ff                 test edi, edi
// 00452760  7e65                 jle 0x4527c7
// 00452762  8bd6                 mov edx, esi
// 00452764  81e207000080         and edx, 0x80000007
// 0045276a  7905                 jns 0x452771
// 0045276c  4a                   dec edx
// 0045276d  83caf8               or edx, 0xfffffff8
// 00452770  42                   inc edx
// 00452771  8b4500               mov eax, dword ptr [ebp]
// 00452774  c1e205               shl edx, 5
// 00452777  8d4c0202             lea ecx, [edx + eax + 2]
// 0045277b  8bc6                 mov eax, esi
// 0045277d  99                   cdq 
// 0045277e  83e207               and edx, 7
// 00452781  03c2                 add eax, edx
// 00452783  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00452789  c1f803               sar eax, 3
// 0045278c  c1e005               shl eax, 5
// 0045278f  8d441002             lea eax, [eax + edx + 2]
// 00452793  89442414             mov dword ptr [esp + 0x14], eax
// 00452797  83c020               add eax, 0x20
// 0045279a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0045279e  83c120               add ecx, 0x20
// 004527a1  8944241c             mov dword ptr [esp + 0x1c], eax
// 004527a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 004527a9  894c2418             mov dword ptr [esp + 0x18], ecx
// 004527ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004527b1  50                   push eax
// 004527b2  51                   push ecx
// 004527b3  8d542418             lea edx, [esp + 0x18]
// 004527b7  52                   push edx
// 004527b8  ff155cca9800         call dword ptr [0x98ca5c]
// 004527be  85c0                 test eax, eax
// 004527c0  7512                 jne 0x4527d4
// 004527c2  46                   inc esi
// 004527c3  3bf7                 cmp esi, edi
// 004527c5  7c9b                 jl 0x452762
// 004527c7  5e                   pop esi
// 004527c8  5f                   pop edi
// 004527c9  5d                   pop ebp
// 004527ca  83c8ff               or eax, 0xffffffff
// 004527cd  5b                   pop ebx
// 004527ce  83c410               add esp, 0x10
// 004527d1  c20800               ret 8
// 004527d4  8bc6                 mov eax, esi
// 004527d6  5e                   pop esi
// 004527d7  5f                   pop edi
// 004527d8  5d                   pop ebp
// 004527d9  5b                   pop ebx
// 004527da  83c410               add esp, 0x10
// 004527dd  c20800               ret 8
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