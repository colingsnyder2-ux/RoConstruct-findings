// from server: 78% by why2
struct S {
    bool f(int a, int b, int c, int d);
};

bool S::f(int a, int b, int c, int d) {
    return *reinterpret_cast<int*>(a) == 1;
}
