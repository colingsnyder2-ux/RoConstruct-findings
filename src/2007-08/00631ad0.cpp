// from server: 70% by colin
// roc 2007-08 00631ad0  unit: _com_error  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631ad0

extern "C" void __stdcall sub_77DD74(void* dst, void* src);

struct S {
    char pad[0xf0];
    void* f(void* out);
};

void* S::f(void* out) {
    sub_77DD74(out, (char*)this + 0xf0);
    return out;
}
