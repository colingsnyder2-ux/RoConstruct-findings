// roc 2009-06 0077d5d0  unit: CXTPTabClientWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077d5d0
//
// 0077d5d0  53                   push ebx
// 0077d5d1  56                   push esi
// 0077d5d2  57                   push edi
// 0077d5d3  8bf9                 mov edi, ecx
// 0077d5d5  33f6                 xor esi, esi
// 0077d5d7  e814e0ffff           call 0x77b5f0
// 0077d5dc  85c0                 test eax, eax
// 0077d5de  7e1c                 jle 0x77d5fc
// 0077d5e0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0077d5e4  56                   push esi
// 0077d5e5  8bcf                 mov ecx, edi
// 0077d5e7  e894eeffff           call 0x77c480
// 0077d5ec  3bc3                 cmp eax, ebx
// 0077d5ee  7415                 je 0x77d605
// 0077d5f0  8bcf                 mov ecx, edi
// 0077d5f2  46                   inc esi
// 0077d5f3  e8f8dfffff           call 0x77b5f0
// 0077d5f8  3bf0                 cmp esi, eax
// 0077d5fa  7ce8                 jl 0x77d5e4
// 0077d5fc  5f                   pop edi
// 0077d5fd  5e                   pop esi
// 0077d5fe  83c8ff               or eax, 0xffffffff
// 0077d601  5b                   pop ebx
// 0077d602  c20400               ret 4
// 0077d605  5f                   pop edi
// 0077d606  8bc6                 mov eax, esi
// 0077d608  5e                   pop esi
// 0077d609  5b                   pop ebx
// 0077d60a  c20400               ret 4
// copied from an identical function in another client (function ?FindTabIndex@CXTPTabClientWnd@ns_ROCX000007@@QAEHH@Z)

namespace ns_ROCX000007 {
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
