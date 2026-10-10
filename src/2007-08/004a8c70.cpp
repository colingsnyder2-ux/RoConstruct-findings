// from server: 64% by tester
struct S {
};

extern "C" int __cdecl sub_4A7F20(int*);
extern "C" int __cdecl sub_4A07D0(int, int);

int __cdecl f(int a) {
    int buf[3];
    int r = sub_4A7F20(buf);
    return sub_4A07D0(a, r);
}
