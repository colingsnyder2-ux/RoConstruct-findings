// roc 2012-06 00477e00  unit: CRobloxControlColorSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00477e00
//
// 00477e00  83ec10               sub esp, 0x10
// 00477e03  53                   push ebx
// 00477e04  8bd9                 mov ebx, ecx
// 00477e06  8b0d54a4e100         mov ecx, dword ptr [0xe1a454]
// 00477e0c  2b0d50a4e100         sub ecx, dword ptr [0xe1a450]
// 00477e12  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00477e17  f7e9                 imul ecx
// 00477e19  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00477e1d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00477e21  55                   push ebp
// 00477e22  57                   push edi
// 00477e23  d1fa                 sar edx, 1
// 00477e25  50                   push eax
// 00477e26  8bfa                 mov edi, edx
// 00477e28  51                   push ecx
// 00477e29  8dabc0000000         lea ebp, [ebx + 0xc0]
// 00477e2f  c1ef1f               shr edi, 0x1f
// 00477e32  55                   push ebp
// 00477e33  03fa                 add edi, edx
// 00477e35  ff15483bb200         call dword ptr [0xb23b48]
// 00477e3b  85c0                 test eax, eax
// 00477e3d  750c                 jne 0x477e4b
// 00477e3f  5f                   pop edi
// 00477e40  5d                   pop ebp
// 00477e41  83c8ff               or eax, 0xffffffff
// 00477e44  5b                   pop ebx
// 00477e45  83c410               add esp, 0x10
// 00477e48  c20800               ret 8
// 00477e4b  56                   push esi
// 00477e4c  33f6                 xor esi, esi
// 00477e4e  85ff                 test edi, edi
// 00477e50  7e65                 jle 0x477eb7
// 00477e52  8bd6                 mov edx, esi
// 00477e54  81e207000080         and edx, 0x80000007
// 00477e5a  7905                 jns 0x477e61
// 00477e5c  4a                   dec edx
// 00477e5d  83caf8               or edx, 0xfffffff8
// 00477e60  42                   inc edx
// 00477e61  8b4500               mov eax, dword ptr [ebp]
// 00477e64  c1e205               shl edx, 5
// 00477e67  8d4c0202             lea ecx, [edx + eax + 2]
// 00477e6b  8bc6                 mov eax, esi
// 00477e6d  99                   cdq 
// 00477e6e  83e207               and edx, 7
// 00477e71  03c2                 add eax, edx
// 00477e73  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00477e79  c1f803               sar eax, 3
// 00477e7c  c1e005               shl eax, 5
// 00477e7f  8d441002             lea eax, [eax + edx + 2]
// 00477e83  89442414             mov dword ptr [esp + 0x14], eax
// 00477e87  83c020               add eax, 0x20
// 00477e8a  894c2410             mov dword ptr [esp + 0x10], ecx
// 00477e8e  83c120               add ecx, 0x20
// 00477e91  8944241c             mov dword ptr [esp + 0x1c], eax
// 00477e95  8b442428             mov eax, dword ptr [esp + 0x28]
// 00477e99  894c2418             mov dword ptr [esp + 0x18], ecx
// 00477e9d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00477ea1  50                   push eax
// 00477ea2  51                   push ecx
// 00477ea3  8d542418             lea edx, [esp + 0x18]
// 00477ea7  52                   push edx
// 00477ea8  ff15483bb200         call dword ptr [0xb23b48]
// 00477eae  85c0                 test eax, eax
// 00477eb0  7512                 jne 0x477ec4
// 00477eb2  46                   inc esi
// 00477eb3  3bf7                 cmp esi, edi
// 00477eb5  7c9b                 jl 0x477e52
// 00477eb7  5e                   pop esi
// 00477eb8  5f                   pop edi
// 00477eb9  5d                   pop ebp
// 00477eba  83c8ff               or eax, 0xffffffff
// 00477ebd  5b                   pop ebx
// 00477ebe  83c410               add esp, 0x10
// 00477ec1  c20800               ret 8
// 00477ec4  8bc6                 mov eax, esi
// 00477ec6  5e                   pop esi
// 00477ec7  5f                   pop edi
// 00477ec8  5d                   pop ebp
// 00477ec9  5b                   pop ebx
// 00477eca  83c410               add esp, 0x10
// 00477ecd  c20800               ret 8
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