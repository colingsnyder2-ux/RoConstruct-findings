// from server: 43% by colin
struct S {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

void assign(S* dest, S* src) {
    if (dest) {
        dest->field0 = src->field0;
        dest->field4 = src->field4;
        dest->field8 = src->field8;
        if (src->fieldC) {
            void** vtbl = *(void***)src->fieldC;
            void* (*fn)() = (void* (*)())vtbl[2];
            dest->fieldC = fn();
        } else {
            dest->fieldC = 0;
        }
    }
}
