// from server: 56% by colin
// roc 2007-08 00693670  unit: CXTPStatusBar::CStatusCmdUI  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693670
//
// 00693670  8bd1                 mov edx, ecx
// 00693672  8b4208               mov eax, dword ptr [edx + 8]
// 00693675  56                   push esi
// 00693676  8b7214               mov esi, dword ptr [edx + 0x14]
// 00693679  50                   push eax
// 0069367a  8bce                 mov ecx, esi
// 0069367c  e89ff7ffff           call 0x692e20
// 00693681  25fffdffff           and eax, 0xfffffdff
// 00693686  837c240800           cmp dword ptr [esp + 8], 0
// 0069368b  7405                 je 0x693692
// 0069368d  0d00020000           or eax, 0x200
// 00693692  8b4a08               mov ecx, dword ptr [edx + 8]
// 00693695  50                   push eax
// 00693696  51                   push ecx
// 00693697  8bce                 mov ecx, esi
// 00693699  e802ffffff           call 0x6935a0
// 0069369e  5e                   pop esi
// 0069369f  c20400               ret 4

struct CStatusCmdUI {
    int m_nIndex;
    int m_nID;
    int m_nStyle;
    void* m_pOther;
    void* m_pStatusBar;
    void SetText(const char*);
    void Enable(int);
    void SetCheck(int);
};

void CStatusCmdUI::SetCheck(int nCheck) {
    unsigned int style = ((unsigned int (__thiscall*)(void*, int))0x692e20)(m_pStatusBar, m_nID);
    style &= 0xfffffdff;
    if (nCheck != 0)
        style |= 0x200;
    ((void (__thiscall*)(void*, int, unsigned int))0x6935a0)(m_pStatusBar, m_nID, style);
}
