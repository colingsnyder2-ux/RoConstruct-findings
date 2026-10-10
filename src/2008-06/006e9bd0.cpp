// from server: 34% by tester
struct S_func_006ab360 {
    char pad0[212];
    int m_x;
    void f(int a1);
};

struct S_func_006e93c0 {
    unsigned int func_006e93c0();
};

struct S_0071fa40 {
    void* get();
};

struct S_007bbfb6 {
    void f();
};

struct S_006adad0 {
    void f();
};

struct S_006e9bd0 {
    char pad0[0x20];
    int m_x20;
    char pad1[0x174 - 0x24];
    int m_x174;
    int m_x178;
    int m_x17c;
    void f();
};

void S_006adad0::f() {}

void S_007bbfb6::f() {}

void S_func_006ab360::f(int a1) {
    m_x = (int)a1;
}

unsigned int S_func_006e93c0::func_006e93c0() {
    return 0x28u;
}

void* S_0071fa40::get() {
    return 0;
}

void S_006e9bd0::f() {
    S_006adad0* p1 = (S_006adad0*)this;
    p1->f();

    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this) = 0x85742c;
    *(int*)((char*)this + 0x20) = 0x8573cc;

    S_007bbfb6* p2 = (S_007bbfb6*)this;
    p2->f();

    m_x174 = -1;
    m_x17c = -1;

    S_func_006ab360* p3 = (S_func_006ab360*)this;
    p3->f(0x10);

    S_func_006e93c0* p4 = (S_func_006e93c0*)this;
    int count = (int)p4->func_006e93c0();

    if (count > 0) {
        int* edi = (int*)0x97e708;
        int ebx = count;
        do {
            S_0071fa40* p5 = (S_0071fa40*)0x97e708;
            void* eax = p5->get();
            int ecx = *(int*)((char*)edi - 4);
            int* edx = *(int**)eax;
            int (*fn)(void*, int, int) = (int (*)(void*, int, int))edx[2];
            fn(eax, (int)edi, ecx);
            edi = (int*)((char*)edi + 0xc);
            ebx--;
        } while (ebx != 0);
    }

    m_x178 = -1;
}
