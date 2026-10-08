// from server: 73% by colin
// roc 2007-08 00636560  unit: CXTPControlComboBoxList  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636560

extern "C" void* __stdcall sub_69F090(unsigned int, unsigned int, unsigned int);
extern "C" int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

struct CXTPControlComboBoxList
{
    void SetCurSel(int nIndex, int bNotify);
};

void CXTPControlComboBoxList::SetCurSel(int nIndex, int bNotify)
{
    void* pWnd = sub_69F090(0x1a2, (unsigned int)nIndex, (unsigned int)bNotify);
    SendMessageA(*(void**)((char*)pWnd + 0x20), 0, 0, 0);
}
