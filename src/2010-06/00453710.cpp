// roc 2010-06 00453710  unit: CRobloxControlColorSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453710
//
// 00453710  83ec10               sub esp, 0x10
// 00453713  53                   push ebx
// 00453714  8bd9                 mov ebx, ecx
// 00453716  8b0d5c1cc000         mov ecx, dword ptr [0xc01c5c]
// 0045371c  2b0d581cc000         sub ecx, dword ptr [0xc01c58]
// 00453722  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00453727  f7e9                 imul ecx
// 00453729  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045372d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00453731  55                   push ebp
// 00453732  57                   push edi
// 00453733  d1fa                 sar edx, 1
// 00453735  50                   push eax
// 00453736  8bfa                 mov edi, edx
// 00453738  51                   push ecx
// 00453739  8dabc0000000         lea ebp, [ebx + 0xc0]
// 0045373f  c1ef1f               shr edi, 0x1f
// 00453742  55                   push ebp
// 00453743  03fa                 add edi, edx
// 00453745  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0045374b  85c0                 test eax, eax
// 0045374d  750c                 jne 0x45375b
// 0045374f  5f                   pop edi
// 00453750  5d                   pop ebp
// 00453751  83c8ff               or eax, 0xffffffff
// 00453754  5b                   pop ebx
// 00453755  83c410               add esp, 0x10
// 00453758  c20800               ret 8
// 0045375b  56                   push esi
// 0045375c  33f6                 xor esi, esi
// 0045375e  85ff                 test edi, edi
// 00453760  7e65                 jle 0x4537c7
// 00453762  8bd6                 mov edx, esi
// 00453764  81e207000080         and edx, 0x80000007
// 0045376a  7905                 jns 0x453771
// 0045376c  4a                   dec edx
// 0045376d  83caf8               or edx, 0xfffffff8
// 00453770  42                   inc edx
// 00453771  8b4500               mov eax, dword ptr [ebp]
// 00453774  c1e205               shl edx, 5
// 00453777  8d4c0202             lea ecx, [edx + eax + 2]
// 0045377b  8bc6                 mov eax, esi
// 0045377d  99                   cdq 
// 0045377e  83e207               and edx, 7
// 00453781  03c2                 add eax, edx
// 00453783  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00453789  c1f803               sar eax, 3
// 0045378c  c1e005               shl eax, 5
// 0045378f  8d441002             lea eax, [eax + edx + 2]
// 00453793  89442414             mov dword ptr [esp + 0x14], eax
// 00453797  83c020               add eax, 0x20
// 0045379a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0045379e  83c120               add ecx, 0x20
// 004537a1  8944241c             mov dword ptr [esp + 0x1c], eax
// 004537a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 004537a9  894c2418             mov dword ptr [esp + 0x18], ecx
// 004537ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004537b1  50                   push eax
// 004537b2  51                   push ecx
// 004537b3  8d542418             lea edx, [esp + 0x18]
// 004537b7  52                   push edx
// 004537b8  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 004537be  85c0                 test eax, eax
// 004537c0  7512                 jne 0x4537d4
// 004537c2  46                   inc esi
// 004537c3  3bf7                 cmp esi, edi
// 004537c5  7c9b                 jl 0x453762
// 004537c7  5e                   pop esi
// 004537c8  5f                   pop edi
// 004537c9  5d                   pop ebp
// 004537ca  83c8ff               or eax, 0xffffffff
// 004537cd  5b                   pop ebx
// 004537ce  83c410               add esp, 0x10
// 004537d1  c20800               ret 8
// 004537d4  8bc6                 mov eax, esi
// 004537d6  5e                   pop esi
// 004537d7  5f                   pop edi
// 004537d8  5d                   pop ebp
// 004537d9  5b                   pop ebx
// 004537da  83c410               add esp, 0x10
// 004537dd  c20800               ret 8
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