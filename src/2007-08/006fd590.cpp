// from server: 63% by colin
// roc 2007-08 006fd590  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fd590
//
// 006fd590  53                   push ebx
// 006fd591  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006fd595  56                   push esi
// 006fd596  8bf1                 mov esi, ecx
// 006fd598  57                   push edi
// 006fd599  8d7e54               lea edi, [esi + 0x54]
// 006fd59c  53                   push ebx
// 006fd59d  8bcf                 mov ecx, edi
// 006fd59f  ff15b8dc7700         call dword ptr [0x77dcb8]
// 006fd5a5  85c0                 test eax, eax
// 006fd5a7  7410                 je 0x6fd5b9
// 006fd5a9  53                   push ebx
// 006fd5aa  8bcf                 mov ecx, edi
// 006fd5ac  ff156cdd7700         call dword ptr [0x77dd6c]
// 006fd5b2  8bce                 mov ecx, esi
// 006fd5b4  e847fbffff           call 0x6fd100
// 006fd5b9  5f                   pop edi
// 006fd5ba  5e                   pop esi
// 006fd5bb  5b                   pop ebx
// 006fd5bc  c20400               ret 4

struct CAutoHidePanelTabManager {
    char pad[0x54];
    int m_list;
    void Remove(int);
    void f(int);
};

extern "C" int __stdcall sub_77dcb8(int);
extern "C" int __stdcall sub_77dd6c(int);

void CAutoHidePanelTabManager::f(int a)
{
    if (sub_77dcb8(m_list) != 0) {
        sub_77dd6c(m_list);
        Remove(a);
    }
}
