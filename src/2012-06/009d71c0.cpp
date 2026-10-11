// from server: 49% by atomic.potato
extern "C" int __stdcall IsRectEmpty(const void*);

int __stdcall sub_982eac(int, int);
int __stdcall sub_9d5fe0(int);
int __stdcall sub_9c9590();
int __stdcall sub_9c95e0(int);
int __stdcall sub_9d5cc0(int, int, int, int);
int __stdcall sub_9d5e20(int, int, int, int);
int __stdcall GetXtremeColor(int);

struct CXTPCompatibleDC {
    char pad0[0xc];
    int field_c;
    int method(int, int, int, int, int);
};

int CXTPCompatibleDC::method(int a, int b, int c, int d, int e) {
    if (a == 0)
        return 0;
    if (IsRectEmpty((const void*)a) != 0)
        return 0;
    int* p = (int*)b;
    int v;
    if (p != 0)
        v = p[1];
    else
        v = 0;
    if (GetXtremeColor(v) != 0) {
        return sub_982eac(a, c);
    }
    if (b == d) {
        return sub_982eac(a, b);
    }
    if (this->field_c != 0) {
        if (sub_9d5fe0(b) != 0) {
            if (sub_9c95e0(sub_9c9590()) != 0) {
                return sub_9d5cc0(a, b, d, e);
            }
        }
        return sub_9d5e20(a, b, d, e);
    }
    return sub_9d5cc0(a, b, d, e);
}
