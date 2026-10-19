// from server: 56% by TrollStein
struct S {
    int __cdecl f(const char* a);
};

int S::f(const char* a) {
    int (*fn)(void*, int);
    int v = *(unsigned char*)a;
    fn = *(int (**)(void*, int))(*(int*)this + 0xe4);
    return fn(this, v);
}
