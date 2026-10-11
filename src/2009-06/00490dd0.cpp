// from server: 68% by atomic.potato
struct Elem {
    char pad0[0x2c];
    char pad2c[0x10];
    char c3c;
    char pad3d[3];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    float f60;
};

struct Src {
    char pad0[0x1c];
    char c1c;
    char pad1d[3];
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
};

extern "C" void __stdcall assign_str(void*, const void*);

void copy_elems(Elem* first, Elem* last, Src* src) {
    while (first != last) {
        assign_str(first, src);
        first->c3c = src->c1c;
        first->f40 = src->f20;
        first->f44 = src->f24;
        first->f48 = src->f28;
        first->f4c = src->f2c;
        first->f50 = src->f30;
        first->f54 = src->f34;
        first->f58 = src->f38;
        first->f5c = src->f3c;
        first->f60 = src->f40;
        first++;
    }
}
