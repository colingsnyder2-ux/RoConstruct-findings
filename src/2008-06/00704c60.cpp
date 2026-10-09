// roc 2008-06 00704c60  unit: CXTPTabClientWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00704c60
//
// 00704c60  53                   push ebx
// 00704c61  56                   push esi
// 00704c62  57                   push edi
// 00704c63  8bf9                 mov edi, ecx
// 00704c65  33f6                 xor esi, esi
// 00704c67  e85435d7ff           call 0x4781c0
// 00704c6c  85c0                 test eax, eax
// 00704c6e  7e1c                 jle 0x704c8c
// 00704c70  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00704c74  56                   push esi
// 00704c75  8bcf                 mov ecx, edi
// 00704c77  e894eeffff           call 0x703b10
// 00704c7c  3bc3                 cmp eax, ebx
// 00704c7e  7415                 je 0x704c95
// 00704c80  8bcf                 mov ecx, edi
// 00704c82  46                   inc esi
// 00704c83  e83835d7ff           call 0x4781c0
// 00704c88  3bf0                 cmp esi, eax
// 00704c8a  7ce8                 jl 0x704c74
// 00704c8c  5f                   pop edi
// 00704c8d  5e                   pop esi
// 00704c8e  83c8ff               or eax, 0xffffffff
// 00704c91  5b                   pop ebx
// 00704c92  c20400               ret 4
// 00704c95  5f                   pop edi
// 00704c96  8bc6                 mov eax, esi
// 00704c98  5e                   pop esi
// 00704c99  5b                   pop ebx
// 00704c9a  c20400               ret 4
// copied from an identical function in another client (function ?FindTabIndex@CXTPTabClientWnd@ns_ROCX000033@@QAEHH@Z)

namespace ns_ROCX000033 {
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
