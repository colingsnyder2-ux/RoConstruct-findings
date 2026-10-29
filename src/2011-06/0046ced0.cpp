// roc 2011-06 0046ced0  unit: CRobloxControlColorSelector  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046ced0
//
// 0046ced0  83ec10               sub esp, 0x10
// 0046ced3  53                   push ebx
// 0046ced4  8bd9                 mov ebx, ecx
// 0046ced6  8b0d203dcb00         mov ecx, dword ptr [0xcb3d20]
// 0046cedc  2b0d1c3dcb00         sub ecx, dword ptr [0xcb3d1c]
// 0046cee2  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0046cee7  f7e9                 imul ecx
// 0046cee9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046ceed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046cef1  55                   push ebp
// 0046cef2  57                   push edi
// 0046cef3  d1fa                 sar edx, 1
// 0046cef5  50                   push eax
// 0046cef6  8bfa                 mov edi, edx
// 0046cef8  51                   push ecx
// 0046cef9  8dabc0000000         lea ebp, [ebx + 0xc0]
// 0046ceff  c1ef1f               shr edi, 0x1f
// 0046cf02  55                   push ebp
// 0046cf03  03fa                 add edi, edx
// 0046cf05  ff15101ca400         call dword ptr [0xa41c10]
// 0046cf0b  85c0                 test eax, eax
// 0046cf0d  750c                 jne 0x46cf1b
// 0046cf0f  5f                   pop edi
// 0046cf10  5d                   pop ebp
// 0046cf11  83c8ff               or eax, 0xffffffff
// 0046cf14  5b                   pop ebx
// 0046cf15  83c410               add esp, 0x10
// 0046cf18  c20800               ret 8
// 0046cf1b  56                   push esi
// 0046cf1c  33f6                 xor esi, esi
// 0046cf1e  85ff                 test edi, edi
// 0046cf20  7e65                 jle 0x46cf87
// 0046cf22  8bd6                 mov edx, esi
// 0046cf24  81e207000080         and edx, 0x80000007
// 0046cf2a  7905                 jns 0x46cf31
// 0046cf2c  4a                   dec edx
// 0046cf2d  83caf8               or edx, 0xfffffff8
// 0046cf30  42                   inc edx
// 0046cf31  8b4500               mov eax, dword ptr [ebp]
// 0046cf34  c1e205               shl edx, 5
// 0046cf37  8d4c0202             lea ecx, [edx + eax + 2]
// 0046cf3b  8bc6                 mov eax, esi
// 0046cf3d  99                   cdq 
// 0046cf3e  83e207               and edx, 7
// 0046cf41  03c2                 add eax, edx
// 0046cf43  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0046cf49  c1f803               sar eax, 3
// 0046cf4c  c1e005               shl eax, 5
// 0046cf4f  8d441002             lea eax, [eax + edx + 2]
// 0046cf53  89442414             mov dword ptr [esp + 0x14], eax
// 0046cf57  83c020               add eax, 0x20
// 0046cf5a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0046cf5e  83c120               add ecx, 0x20
// 0046cf61  8944241c             mov dword ptr [esp + 0x1c], eax
// 0046cf65  8b442428             mov eax, dword ptr [esp + 0x28]
// 0046cf69  894c2418             mov dword ptr [esp + 0x18], ecx
// 0046cf6d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046cf71  50                   push eax
// 0046cf72  51                   push ecx
// 0046cf73  8d542418             lea edx, [esp + 0x18]
// 0046cf77  52                   push edx
// 0046cf78  ff15101ca400         call dword ptr [0xa41c10]
// 0046cf7e  85c0                 test eax, eax
// 0046cf80  7512                 jne 0x46cf94
// 0046cf82  46                   inc esi
// 0046cf83  3bf7                 cmp esi, edi
// 0046cf85  7c9b                 jl 0x46cf22
// 0046cf87  5e                   pop esi
// 0046cf88  5f                   pop edi
// 0046cf89  5d                   pop ebp
// 0046cf8a  83c8ff               or eax, 0xffffffff
// 0046cf8d  5b                   pop ebx
// 0046cf8e  83c410               add esp, 0x10
// 0046cf91  c20800               ret 8
// 0046cf94  8bc6                 mov eax, esi
// 0046cf96  5e                   pop esi
// 0046cf97  5f                   pop edi
// 0046cf98  5d                   pop ebp
// 0046cf99  5b                   pop ebx
// 0046cf9a  83c410               add esp, 0x10
// 0046cf9d  c20800               ret 8
// copied from an identical function in another client (function ?hitTest@CRobloxControlColorSelector@ns_ROCX000003@@QAEHUPOINT@2@@Z)

namespace ns_ROCX000003 {
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
}
