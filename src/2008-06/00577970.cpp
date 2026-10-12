// from server: 35% by colin
struct Inner {
    void* p0;
    void* p8;
    char pad[0x18];
    int v20;
    char v28;
};

struct Src {
    void* p0;
    char pad[4];
    Inner* p8;
};

struct Dst {
    void* p0;
    char pad[4];
    void* p8;
    char pad2[4];
    char buf[0x18];
    int v28;
    char v30;
};

extern "C" void __stdcall sub_5777A0(void* dst, void* src);

void __stdcall sub_577970(void* a, char b, void* c, Dst* d, Src* e)
{
    Dst* dst = d;
    Src* src = e;
    Inner* inner = 0;
    void* tmp = 0;
    char flag = 0;

    if (src->p8 != 0) {
        inner = src->p8;
        void* vtable = *(void**)inner;
        void (*fn)(void*, void*, int) = *(void (**)(void*, void*, int))vtable;
        fn((char*)inner + 8, &tmp, 0);
    }

    sub_5777A0(&flag, &tmp);

    dst->p0 = *(void**)&flag;
    dst->p8 = 0;
    if (*(void**)&flag != 0) {
        dst->p8 = *(void**)&flag;
        void* vt = *(void**)dst->p8;
        void (*fn2)(void*, void*, int) = *(void (**)(void*, void*, int))vt;
        fn2((char*)dst->p8 + 8, dst->buf, 0);
    }
    dst->v28 = inner->v20;
    dst->v30 = inner->v28;

    if (tmp != 0) {
        void* vt2 = *(void**)tmp;
        if (vt2 != 0) {
            void (*fn3)(void*, void*, int) = *(void (**)(void*, void*, int))vt2;
            fn3(&flag, &flag, 1);
        }
        tmp = 0;
    }

    if (src->p0 != 0) {
        void* vt3 = *(void**)src->p0;
        if (vt3 != 0) {
            void (*fn4)(void*, void*, int) = *(void (**)(void*, void*, int))vt3;
            fn4((char*)src + 0x64, (char*)src + 0x64, 1);
        }
    }
}
