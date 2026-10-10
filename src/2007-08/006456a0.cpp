// from server: 47% by colin
// roc 2007-08 006456a0  size: 196 bytes
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBoxPopupBar.cpp

extern "C" int __stdcall PtInRect(const void* r, int x, int y);
extern "C" int __stdcall ScreenToClient(void* hwnd, void* pt);

struct CXTPControlComboBoxPopupBar {
    int sub_6456a0(int* p1, int* p2, int* p3);
};

int CXTPControlComboBoxPopupBar::sub_6456a0(int* p1, int* p2, int* p3)
{
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;

    if (p1 == 0)
        return 0x80070057;

    *(unsigned short*)p1 = 0;

    if ((this - 0x17) == 0 || *(int*)((char*)this - 0x3c) == 0)
        return 1;

    local1 = 0;
    local2 = 0;
    local3 = 0;
    local4 = 0;
    local5 = 0;
    local6 = 0;

    if (ScreenToClient((void*)*(int*)((char*)this - 0x3c), &local1) == 0)
        return 1;

    *(unsigned short*)p1 = 3;
    *(int*)((char*)p1 + 8) = 0;

    local3 = *p2;
    local4 = *p3;

    if (PtInRect(&local1, local3, local4) == 0)
        return 0;

    *(unsigned short*)p1 = 9;
    *(int*)((char*)p1 + 8) = 0;

    return 0;
}
