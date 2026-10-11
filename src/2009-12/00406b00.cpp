// from server: 61% by atomic.potato
extern "C" int __stdcall sub_406990(int, int, int);

struct S {
    char pad[4];
    int f(int, int);
};

int S::f(int a, int b) {
    if (this)
        return sub_406990((int)(this->pad), a, b);
    return sub_406990(0, a, b);
}
