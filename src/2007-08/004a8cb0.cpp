// from server: 59% by colin
struct S {
    int f(int);
};

extern "C" int __cdecl sub_4a7fe0(int*);
extern "C" int __cdecl sub_4a08e0(int, int);

int S::f(int a) {
    int buf[12];
    int r = sub_4a7fe0(buf);
    return sub_4a08e0(a, r);
}
