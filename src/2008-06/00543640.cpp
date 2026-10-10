// from server: 50% by Cezant64gamejr
struct S {
    int f(int a);
};

int S::f(int a) {
    int* ptr = (int*)((char*)this + 8);
    return *ptr + 12;
}
