// roc 2007-03 00670fb0  unit: seg_00670000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00670fb0
//
// 00670fb0  53                   push ebx
// 00670fb1  56                   push esi
// 00670fb2  57                   push edi
// 00670fb3  8bf9                 mov edi, ecx
// 00670fb5  33f6                 xor esi, esi
// 00670fb7  e894e0ffff           call 0x66f050
// 00670fbc  85c0                 test eax, eax
// 00670fbe  7e1e                 jle 0x670fde
// 00670fc0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00670fc4  56                   push esi
// 00670fc5  8bcf                 mov ecx, edi
// 00670fc7  e804410200           call 0x6950d0
// 00670fcc  3bc3                 cmp eax, ebx
// 00670fce  7417                 je 0x670fe7
// 00670fd0  8bcf                 mov ecx, edi
// 00670fd2  83c601               add esi, 1
// 00670fd5  e876e0ffff           call 0x66f050
// 00670fda  3bf0                 cmp esi, eax
// 00670fdc  7ce6                 jl 0x670fc4
// 00670fde  5f                   pop edi
// 00670fdf  5e                   pop esi
// 00670fe0  83c8ff               or eax, 0xffffffff
// 00670fe3  5b                   pop ebx
// 00670fe4  c20400               ret 4
// 00670fe7  5f                   pop edi
// 00670fe8  8bc6                 mov eax, esi
// 00670fea  5e                   pop esi
// 00670feb  5b                   pop ebx
// 00670fec  c20400               ret 4
// copied from an identical function in another client (function ?FindTabIndex@CXTPTabClientWnd@ns_ROCX00000a@@QAEHH@Z)

namespace ns_ROCX00000a {
struct CXTPTabClientWnd
{
    int GetCount();
    int FindTab(int nTab);
    int FindTabIndex(int hWnd);
};

int CXTPTabClientWnd::FindTabIndex(int hWnd)
{
    int i = 0;
    if (this->GetCount() > 0)
    {
        do
        {
            if (this->FindTab(i) == hWnd)
                return i;
            i++;
        } while (i < this->GetCount());
    }
    return -1;
}
}
