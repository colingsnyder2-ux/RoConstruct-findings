// from server: 1% by colin
extern "C" int __cdecl sub_72D160(int, int, int);
extern "C" int __cdecl sub_72EA00(int, int, int);
extern "C" void __cdecl sub_630B8C(void*, int, int);
extern "C" void __cdecl sub_724900(int, int, int, int);
extern "C" void __cdecl sub_7249A0(int);

extern int dword_7E2530;
extern int dword_7E253C;
extern int dword_7E5618[];

struct S {
    int f(int, int);
    void g(int);
    void h(int);
};

void S::g(int a) {
    int* p = (int*)this;
    int* q = (int*)p[7];
    int n = p[5];
    unsigned char* buf = (unsigned char*)p[2];
    buf[n] = (unsigned char)a;
    p[5] = n + 1;
}
