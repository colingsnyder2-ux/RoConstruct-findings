// from server: 49% by colin
struct ChatEnter {
    char pad0[0xfc];
    int field_fc;
    void sub_556900();
    int method_4c(void*);
    int method_60(void*);
    int method_68();
    int sub_5553d0(int);
    int process(int* a, int* b);
};

int ChatEnter::process(int* a, int* b)
{
    float v0, v1, v2, v3;
    int* p;
    int r;
    sub_556900();
    method_4c(&v0);
    p = (int*)method_60(&v2);
    v1 = *(float*)p;
    v3 = *(float*)(p + 1);
    v0 = v0 + v1;
    v2 = v2 + v3;
    r = sub_5553d0(b[2]);
    if (r) {
        int t = *b;
        if (t >= 3) {
            if (t <= 4) {
                if (field_fc != 2) {
                    field_fc = 2;
                    method_68();
                }
                *a = 1;
                a[1] = 0;
                return 0;
            }
            if (t == 5) {
                if (field_fc != 1) {
                    field_fc = 1;
                    method_68();
                }
                *a = 1;
                a[1] = 0;
                return 0;
            }
        }
        a[1] = 0;
        *a = 0;
        return 0;
    }
    if (field_fc != 0) {
        field_fc = 0;
        method_68();
    }
    a[1] = 0;
    *a = 0;
    return 0;
}
