// from server: 72% by atomic.potato
struct S {
};

int __cdecl f(int* p) {
    int (*fn)(int) = (int (*)(int))p[0];
    int r = fn(p[1]);
    return *(int*)r;
}
