// from server: 31% by atomic.potato
extern "C" void __stdcall G1_func_0080b2e4(void*, int, int);
extern "C" void __stdcall G1_func_0080b8f7();
extern "C" char __cdecl G1_func_0089f760(char);

extern "C" int __stdcall G1_func_00a41bac(int);
extern "C" int __stdcall G1_func_00a41bb0(int, int, int);
extern "C" int __stdcall G1_func_00a41a3c(int, void*, int);
extern "C" int __stdcall G1_func_00a41a40(int);
extern "C" int __stdcall G1_func_00a4253c(void*);
extern "C" int __stdcall G1_func_00a426a8(void*);
extern "C" int __stdcall G1_func_00a426b0(void*);
extern "C" int __stdcall G1_func_00a428e4(void*);
extern "C" int __stdcall G1_func_00a42c5c(void*, int, int);
extern "C" int __stdcall G1_func_00a42de4(void*, void*);
extern "C" int __stdcall G1_func_00a42e00(void*, const char*);
extern "C" int __stdcall G1_func_00a42e08(void*);

struct S_func_0089fd90 {
    void* m_p;
    void* f(int, int, int);
};

void* S_func_0089fd90::f(int a, int b, int c)
{
    char buf[0x32];
    int v;
    void* p1;
    void* p2;
    int i;
    int n;
    int k;
    char ch;

    G1_func_0080b2e4(buf, 0, 0x32);
    v = 0;

    if (c == 3) {
        G1_func_00a42e00(m_p, "Authoring");
        return m_p;
    }

    k = G1_func_00a41bb0(a, 0, c);
    k = (k << 16) | 1;
    if ((unsigned)(c - 0x21) <= 0xe)
        k |= 0x1000000;

    G1_func_00a41a3c(k, buf, 0x32);

    p1 = 0;
    p2 = 0;
    G1_func_00a42e00(&p2, buf);
    v = 0;
    if (!G1_func_00a426b0(&p1)) {
        G1_func_00a428e4(&p1);
        n = G1_func_00a426a8(&p1);
        if (n > 0) {
            for (i = 0; i < n; i++) {
                ch = (char)G1_func_00a4253c(&p1);
                if (G1_func_00a41a40(ch)) {
                    G1_func_00a42c5c(&p2, i, (unsigned char)G1_func_0089f760(ch));
                    break;
                }
            }
        }
    }

    G1_func_00a42de4(m_p, &p2);
    G1_func_00a42e08(&p1);
    return m_p;
}
