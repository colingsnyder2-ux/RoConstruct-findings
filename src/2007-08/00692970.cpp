// from server: 74% by colin
// roc 2007-08 00692970  unit: CXTPStatusBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692970
//
// 00692970  8b442404             mov eax, dword ptr [esp + 4]
// 00692974  56                   push esi
// 00692975  50                   push eax
// 00692976  8bf1                 mov esi, ecx
// 00692978  e8e5610a00           call 0x738b62
// 0069297d  83f8ff               cmp eax, -1
// 00692980  7506                 jne 0x692988
// 00692982  0bc0                 or eax, eax
// 00692984  5e                   pop esi
// 00692985  c20400               ret 4
// 00692988  6a00                 push 0
// 0069298a  8d8eac000000         lea ecx, [esi + 0xac]
// 00692990  51                   push ecx
// 00692991  8bce                 mov ecx, esi
// 00692993  e8b8fdffff           call 0x692750
// 00692998  8b5620               mov edx, dword ptr [esi + 0x20]
// 0069299b  6a00                 push 0
// 0069299d  6a14                 push 0x14
// 0069299f  6808040000           push 0x408
// 006929a4  52                   push edx
// 006929a5  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006929ab  33c0                 xor eax, eax
// 006929ad  5e                   pop esi
// 006929ae  c20400               ret 4

struct CXTPStatusBar {
    char pad[0x20];
    unsigned int m_hWnd;
    char pad2[0xac - 0x24];
    int m_nText;
    int GetIndex(int);
    int SetPaneText(int, int);
    int OnSetText(int);
};

extern "C" int __stdcall SendMessageA(unsigned int, unsigned int, unsigned int, int);

int CXTPStatusBar::OnSetText(int nID)
{
    int nIndex = GetIndex(nID);
    if (nIndex != -1)
        return 0;
    SetPaneText((int)(this->pad + 0xac), 0);
    SendMessageA(m_hWnd, 0x408, 0x14, 0);
    return 0;
}
