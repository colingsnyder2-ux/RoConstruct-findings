// from server: 100% by colin
// roc 2007-08 0068cf10  unit: CXTPTabClientWnd  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068cf10
//
// 0068cf10  53                   push ebx
// 0068cf11  56                   push esi
// 0068cf12  57                   push edi
// 0068cf13  8bf9                 mov edi, ecx
// 0068cf15  33f6                 xor esi, esi
// 0068cf17  e80480deff           call 0x474f20
// 0068cf1c  85c0                 test eax, eax
// 0068cf1e  7e1e                 jle 0x68cf3e
// 0068cf20  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0068cf24  56                   push esi
// 0068cf25  8bcf                 mov ecx, edi
// 0068cf27  e8b4eeffff           call 0x68bde0
// 0068cf2c  3bc3                 cmp eax, ebx
// 0068cf2e  7417                 je 0x68cf47
// 0068cf30  8bcf                 mov ecx, edi
// 0068cf32  83c601               add esi, 1
// 0068cf35  e8e67fdeff           call 0x474f20
// 0068cf3a  3bf0                 cmp esi, eax
// 0068cf3c  7ce6                 jl 0x68cf24
// 0068cf3e  5f                   pop edi
// 0068cf3f  5e                   pop esi
// 0068cf40  83c8ff               or eax, 0xffffffff
// 0068cf43  5b                   pop ebx
// 0068cf44  c20400               ret 4
// 0068cf47  5f                   pop edi
// 0068cf48  8bc6                 mov eax, esi
// 0068cf4a  5e                   pop esi
// 0068cf4b  5b                   pop ebx
// 0068cf4c  c20400               ret 4

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
