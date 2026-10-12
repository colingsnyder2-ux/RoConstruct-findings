// from server: 56% by colin
struct S {
    int field_0x10;
    int assign(int* p);
};

int S::assign(int* p) {
    S* self = this;
    if (self->field_0x10 != (int)p) {
        if (p) {
            int* vt = (int*)p[0];
            void (*fn)(int*) = (void (*)(int*))vt[1];
            fn(p);
        }
        int old = self->field_0x10;
        if (old) {
            int* vt = (int*)old;
            void (*fn)(int*) = (void (*)(int*))vt[2];
            fn((int*)old);
        }
        self->field_0x10 = (int)p;
    }
    return 0;
}
