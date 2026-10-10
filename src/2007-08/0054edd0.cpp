// from server: 20% by colin
extern "C" void __stdcall sub_40CC20(void*);
extern "C" int __stdcall sub_54D620(void*, void*, void*, void*, void*);

struct S {
    int f(void* a, void* b);
};

int S::f(void* a, void* b) {
    char buf1;
    char buf2;
    void* p1;
    void* p2;
    int result;
    int state1;
    int state2;
    char flag1;
    char flag2;
    void* ptr1;
    void* ptr2;
    int zero;

    buf1 = 0;
    flag1 = 1;
    state1 = 1;
    ptr1 = &buf1;
    zero = 0;
    ptr2 = &buf2;
    state2 = 2;
    flag2 = 1;
    result = sub_54D620(&ptr2, &ptr1, b, a, &state2);
    sub_40CC20(&ptr1);
    sub_40CC20(&ptr2);
    return result;
}
