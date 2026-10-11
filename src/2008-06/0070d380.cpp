// from server: 31% by colin
struct POINT {
    long x;
    long y;
};

extern "C" __declspec(dllimport) int __stdcall GetCursorPos(POINT* lpPoint);

struct CXTPToolTipContext {
    void sub_70CC90(int, int*);
    void sub_70D380(int, int, int, int);
};

void CXTPToolTipContext::sub_70D380(int a1, int a2, int a3, int a4) {
    POINT pt;
    GetCursorPos(&pt);
    int local = *(int*)(a1 + 0x20);
    sub_70CC90(local, &a2);
}

void CXTPToolTipContext::sub_70CC90(int a1, int* a2) {
    extern void sub_70C410(int, int, int);
    sub_70C410(a1, *a2, 1);
}
