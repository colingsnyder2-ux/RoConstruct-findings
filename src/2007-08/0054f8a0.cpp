// from server: 73% by colin
struct S {
    char pad[0x10];
    int* field10;
    int* field14;
    char pad2[8];
    int* field20;
    int* field24;
    char pad3[8];
    int* field30;
    int* field34;
    char pad4[0x54];
    int field8c;
    char pad5[8];
    int field98;
    void f(int, int, int, int, int, int);
};

extern "C" int __stdcall pubsync(void*);

extern "C" void __cdecl helper(int*, int, int, int, int, int, int);

void S::f(int a1, int a2, int a3, int a4, int a5, int a6) {
    if (*field24 != 0) {
        pubsync(*(void**)0x77e604);
    }
    if (a1 == 1) {
        if (*field20 != 0) {
            int v = *field30;
            a3 -= v;
            a4 -= (v >> 31);
        }
    }
    *field10 = 0;
    *field20 = 0;
    *field30 = 0;
    *field14 = 0;
    *field24 = 0;
    *field34 = 0;
    helper(&field98, a1, a2, a3, a4, a5, field8c);
}
