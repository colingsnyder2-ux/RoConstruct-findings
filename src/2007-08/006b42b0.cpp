// from server: 87% by colin
struct CXTPControlGallery {
    char pad[0x15c];
    int field_15c;
    int field_160;
    int sub_6b3590();
    void sub_63a640(int*, int);
    void func(int, int*);
};

void CXTPControlGallery::func(int a, int* out) {
    if (sub_6b3590() != 0) {
        int saved15c = field_15c;
        int saved160 = field_160;
        field_160 = 0;
        field_15c = 0;
        int tmp[2];
        sub_63a640(tmp, a);
        field_15c = saved15c;
        field_160 = saved160;
        out[1] = tmp[1];
        out[0] = tmp[0];
    } else {
        out[1] = field_160;
        out[0] = field_15c;
    }
}
