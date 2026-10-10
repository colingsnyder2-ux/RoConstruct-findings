// from server: 38% by why2
struct S {
    int f(int);
};

int S::f(int) {
    return (int)this;
}
