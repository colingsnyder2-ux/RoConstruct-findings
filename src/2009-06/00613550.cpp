// from server: 44% by atomic.potato
struct S {
    char pad[8];
    int (__stdcall *fn)(void *);
    int offset;
    int field1c;
    S *copy_from(S *other);
};

extern "C" void __stdcall string_copy_ctor(void *dst, const void *src);

S *S::copy_from(S *other) {
    int *tmp = 0;
    S *src = other;
    if (other != 0) {
        src = (S *)((char *)other - 0x18);
    }
    int (__stdcall *f)(void *) = this->fn;
    int off = this->offset;
    int result = f((char *)src + off);
    S *r = (S *)result;
    string_copy_ctor(this, r);
    this->field1c = r->field1c;
    return this;
}
