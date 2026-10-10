// from server: 83% by why2
struct S {
    int f();
};

int S::f() {
    int (*fn)(void);
    fn = *(int (**)(void))(*(int*)this + 8);
    return fn() + 0x98;
}
