// from server: 70% by colin
struct CWrapperView {
    void Func(int, int);
};

extern "C" {
    int __stdcall sub_630532(int, int, int, int, int, int, int);
    void __stdcall sub_67ffa0(void *, int);
    void __stdcall sub_631d50(int, int, int);
    void __stdcall OffsetRect(void *, int, int);
}

void CWrapperView::Func(int a, int b) {
    int local1;
    int local2;
    int local3;
    int local4;

    sub_630532(0xe800, 0xe8ff, 0xe900, 0, 0, 0, 1);

    sub_67ffa0(&local1, a);

    int v = *(int *)(a + 0xfc);
    if (v == 2 || v == 3 || v == 5) {
        int diff = local2 - local1;
        OffsetRect(&local3, 0, diff);
    } else {
        int diff = local2 - local1;
        OffsetRect(&local3, diff, 0);
    }

    int arg = *(int *)(a + 0x180);
    int ecx_val = *(int *)((char *)this + 0xd8);
    sub_631d50(ecx_val, local4, arg);
}
