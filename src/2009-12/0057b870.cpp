// from server: 66% by atomic.potato
struct S {
    int f();
};

int S::f() {
    *(int*)((char*)this + 0x68) -= 1;
    return 4;
}
