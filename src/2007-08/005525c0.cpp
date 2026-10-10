// from server: 31% by colin
struct S_func_005525c0 {
    char pad0[4];
    void f(int a1);
};

struct S_str {
    char pad0[4];
    S_str();
    ~S_str();
    S_str& operator+=(char c);
    void begin(void* out);
    void end(void* out);
};

struct S_buf {
    int sgetn(char* p, int n);
};

extern "C" {
    void __stdcall sub_54e570(void* p);
    void __stdcall sub_54e090(void* p, int a);
    int __stdcall sub_5523f0(void* p, int a, int b);
    void __stdcall sub_630b9e(void* p, void* q);
    void __stdcall sub_77e55c(void* p, int a);
    void __stdcall sub_77e5e0(void* p, void* q);
    void __stdcall sub_77e5e4(void* p, void* q);
    int __stdcall sub_77e60c(void* p, void* q, int a);
    void __stdcall sub_77e6ac(void* p);
}

void S_func_005525c0::f(int a1)
{
    char buf[0x50];
    int i;
    int n;
    char c;
    S_str s;
    S_buf* b;
    int v1, v2, v3, v4;
    int r;

    sub_54e570(buf);
    n = 0;
    i = 0;
    while (1) {
        b = *(S_buf**)a1;
        r = sub_77e60c(b, &c, 1);
        if (r == 0) {
            r = (b->sgetn(&c, 1) != 0) ? 0 : -1;
        }
        if (r == -1) break;
        i += r;
        if (i >= 1) break;
    }
    if (i == 0) goto done;
    if (i == 1) {
        if ((char)c == 0xff) goto done;
        sub_77e55c(&s, (char)c);
        goto loop_end;
    }
    if (i == -1) goto done;
    sub_77e55c(&s, -2);
loop_end:
    goto loop_start;
loop_start:
    goto loop_top;
loop_top:
    goto loop_start;
done:
    {
        void* p1;
        void* p2;
        int a, b2, c2, d;
        sub_77e5e4(&s, &p1);
        v1 = *(int*)p1;
        v2 = *(int*)((char*)p1 + 4);
        sub_77e5e0(&s, &p2);
        v3 = *(int*)p2;
        v4 = *(int*)((char*)p2 + 4);
        r = sub_5523f0(&v1, 5, 0);
        if (r != *(int*)(*(int*)this + 8)) {
            sub_54e090(&v1, 2);
            sub_630b9e(&v1, (void*)0x85a414);
        }
        r = sub_5523f0(&v1, 5, 0);
        if (r != *(int*)(*(int*)this + 0x10)) {
            sub_54e090(&v1, 3);
            sub_630b9e(&v1, (void*)0x85a414);
        }
    }
    sub_77e6ac(buf);
}
