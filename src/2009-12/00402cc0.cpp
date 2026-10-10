// from server: 65% by atomic.potato
extern "C" void ImportedCall(void *, unsigned long);

struct S {
    S * __cdecl f(void *);
};

S *S::f(void *arg) {
    S *result = this;
    ImportedCall(this, 0x00b7b3e8);
    return result;
}
