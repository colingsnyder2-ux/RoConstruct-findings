// from server: 100% by tester
// roc 2008-06 0070e840  unit: CXTPStatusBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070e840
//
// 0070e840  8b442404             mov eax, dword ptr [esp + 4]
// 0070e844  56                   push esi
// 0070e845  50                   push eax
// 0070e846  8bf1                 mov esi, ecx
// 0070e848  e8dfdf0a00           call 0x7bc82c
// 0070e84d  83f8ff               cmp eax, -1
// 0070e850  7506                 jne 0x70e858
// 0070e852  0bc0                 or eax, eax
// 0070e854  5e                   pop esi
// 0070e855  c20400               ret 4
// 0070e858  6a00                 push 0
// 0070e85a  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0070e860  51                   push ecx
// 0070e861  8bce                 mov ecx, esi
// 0070e863  e888fdffff           call 0x70e5f0
// 0070e868  8b5620               mov edx, dword ptr [esi + 0x20]
// 0070e86b  6a00                 push 0
// 0070e86d  6a14                 push 0x14
// 0070e86f  6808040000           push 0x408
// 0070e874  52                   push edx
// 0070e875  ff15142e8000         call dword ptr [0x802e14]
// 0070e87b  33c0                 xor eax, eax
// 0070e87d  5e                   pop esi
// 0070e87e  c20400               ret 4

struct CXTPStatusBar {
    char pad[0x20];
    unsigned int m_hWnd;
    char pad2[0xb0 - 0x24];
    int m_nText;
    int GetIndex(int);
    int SetPaneText(int, int);
    int OnSetText(int);
};

extern "C" int (__stdcall *SendMessageA)(unsigned int, unsigned int, unsigned int, int);

int CXTPStatusBar::OnSetText(int nID)
{
    int nIndex = GetIndex(nID);
    if (nIndex == -1)
        return nIndex;
    SetPaneText((int)(this->pad + 0xb0), 0);
    SendMessageA(m_hWnd, 0x408, 0x14, 0);
    return 0;
}
