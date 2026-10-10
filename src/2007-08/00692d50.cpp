// from server: 52% by colin
// roc 2007-08 00692d50  unit: CXTPStatusBar  size: 195 bytes
// library xtp-13.2.1/Source\Common\XTPStatusBar.cpp

extern "C" int __stdcall GetSystemMetrics(int);
extern "C" int __stdcall SetRectEmpty(void*);

struct CXTPStatusBar {
    int sub_692c60(int);
    int sub_692c90();
    int sub_738412();
    int sub_680000(int);
    int OnCalcDynamicLayout(int, unsigned int);
};

int CXTPStatusBar::OnCalcDynamicLayout(int nLength, unsigned int nFlags)
{
    int result;
    int* pRect;
    int nIndex;
    int nCount;
    int nExtra;
    int nMetric;

    result = sub_692c60(nLength);
    if (result == 0) {
        SetRectEmpty((void*)nFlags);
        return 0;
    }

    nIndex = *(int*)(result + 0x58);
    if (((int (__thiscall*)(CXTPStatusBar*, int, int, int))*(void**)(*(int*)this + 0x118))(this, 0x40a, nIndex, nLength) == 0) {
        SetRectEmpty((void*)nFlags);
    }

    nCount = sub_692c90();
    if (*(int*)(result + 0x58) == nCount - 1) {
        if ((*(unsigned int*)(result + 0x28) & 0x8000000) == 0) {
            nMetric = GetSystemMetrics(0x2d);
            *(int*)(nFlags + 8) = *(int*)(result + 0x24) + nMetric * 3 + *(int*)nFlags;
            return 0;
        }
        sub_680000(nLength);
        *(int*)(nFlags + 8) = *(int*)(nExtra + 8);
        if (sub_738412() & 0x100) {
            nMetric = GetSystemMetrics(0x31);
            nExtra = *(int*)(nFlags + 8) - nMetric;
            nMetric = GetSystemMetrics(0x2d);
            *(int*)(nFlags + 8) = nExtra - nMetric;
        }
    }
    return 0;
}
