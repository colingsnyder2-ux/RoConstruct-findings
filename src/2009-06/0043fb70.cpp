// from server: 75% by why2
struct S {
    void f(int *out);
    char pad[0x2e];
    int value;
};

void S::f(int *out) {
    *out = *(int*)((char*)this + 0x2e);
}
