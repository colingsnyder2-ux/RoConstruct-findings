// from server: 23% by atomic.potato
struct CCaptionPopupBar {
    char pad0[0x1a8];
    int f1a8;
    int f1ac;
    int f1b0;
    int f1b4;
};

struct Inner1 {
    char pad0[0x28];
};

struct Inner2 {
    char pad0[0x14];
};

extern "C" void __stdcall sub_7f46d6(void*, void*);
extern "C" void __stdcall sub_7f46d0(void*);
extern "C" void* __stdcall sub_804590(void*);
extern "C" void __stdcall sub_84b660(void*, void*, void*);
extern "C" void __stdcall sub_84b6e0(void*);

void __stdcall CCaptionPopupBar_method(CCaptionPopupBar* self, int* out) {
    out[0] = self->f1a8;
    out[1] = self->f1ac;
    out[2] = self->f1b0;
    out[3] = self->f1b4;

    Inner1 a;
    sub_7f46d6(&a, self);

    void* p = sub_804590(self);
    void* v = (*(void*(**)(void*, int, void*))p)(p, 0, self);

    Inner2 b;
    sub_84b660(&b, &a, v);

    void* p2 = sub_804590(self);
    void* v2 = (*(void*(**)(void*, int, void*, void*))p2)(p2, 0, self, &b);

    out[1] += *(int*)&b;

    sub_84b6e0(&b);
    sub_7f46d0(&a);
}
