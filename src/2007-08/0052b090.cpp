// from server: 80% by tester
struct S {
    int f(int, int);
};

extern "C" int __stdcall sub_0052B040(int, int, int);

int S::f(int a, int b) {
    return sub_0052B040(a, b, 0);
}
