// from server: 66% by colin
struct S {
    int field0;
    int field4;
    S* construct(int* arg);
};

extern "C" int __fastcall sub_593d20();
extern "C" int __fastcall sub_5945d0(int* arg);

S* S::construct(int* arg) {
    field0 = sub_593d20();
    int* p = arg;
    int* q = &field4;
    int* r = (int*)sub_5945d0(p);
    if (r != q) {
        int tmp = *q;
        *q = *r;
        *r = tmp;
    }
    int* c = (int*)arg;
    if (c != 0) {
        int* vt = (int*)*c;
        void (__stdcall *fn)(int) = (void (__stdcall *)(int))vt[0];
        fn(1);
    }
    return this;
}
