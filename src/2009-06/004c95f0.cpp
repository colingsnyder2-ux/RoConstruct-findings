// from server: 43% by atomic.potato
struct S {
    char pad0[0x1c];
    int field1c;
    int f(int, int, int, int, int, int);
};

extern "C" int __cdecl sub_4c5220();
extern "C" int __cdecl sub_4c9440();
extern "C" int __cdecl sub_4c5510();
extern "C" int __cdecl sub_5f8830(int, int, int, int, int);
extern "C" int __cdecl sub_718a32(int);

int S::f(int a1, int a2, int a3, int a4, int a5, int a6) {
    int v1 = sub_4c5220();
    int v2 = sub_4c9440();
    sub_5f8830(v2, v1, a1, a2, a3);
    *(int*)this = 0x8c50d8;
    *(int*)((char*)this + 0x18) = 0x8c50d0;
    int v3 = sub_4c5510();
    int v4 = *(int*)v3;
    *(int*)v3 = 0;
    field1c = v4;
    sub_718a32(a4);
    return (int)this;
}
