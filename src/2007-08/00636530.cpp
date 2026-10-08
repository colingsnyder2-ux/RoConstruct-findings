// from server: 72% by colin
// roc 2007-08 00636530  unit: CXTPControlComboBoxList  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636530

extern "C" int __stdcall sub_69F090(int, int, int);
extern "C" int __stdcall SendMessageA(int, unsigned int, int, int);

struct CXTPControlComboBoxList
{
    void SendMessageToWnd(int, int);
};

void CXTPControlComboBoxList::SendMessageToWnd(int a, int b)
{
    int h = sub_69F090(0x18f, a, b);
    SendMessageA(*(int*)(h + 0x20), 0x14e, 0, 0);
}
