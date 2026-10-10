// from server: 38% by colin
struct IUnknownLike {
    virtual int QueryInterface(void*, void**) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
};

struct Inner {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
};

struct Outer {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
};

extern "C" int __stdcall sub_406120(void**);
extern "C" int __stdcall sub_404400(void*, int, int, int, int);
extern "C" int __stdcall sub_4022a0(void*, void*, void*, void*);

int __stdcall func_00407290(void* p1, void* p2, void* p3, void* p4)
{
    int result = -2147467259;
    void* local = 0;
    int flag = 0;
    void* inner = 0;
    int hr;

    if (p1 == 0)
        return result;

    *(int*)p1 = 0;

    hr = sub_406120(&local);
    if (hr < 0)
        return hr;

    Outer* outer = (Outer*)p2;

    if (outer->f14 & 2) {
        IUnknownLike* unk = *(IUnknownLike**)outer;
        int (__stdcall *fn)(void*) = *(int (__stdcall **)(void*))(*(int*)unk + 4);
        inner = outer;
        fn(outer);
        flag = 1;
    } else {
        inner = (char*)outer + 4;
    }

    int a = *(int*)inner;
    int b = outer->f8;
    void* c = local;
    int d = outer->fc;

    hr = sub_404400(c, b, a, d, 0);

    if (flag & 1) {
        if (inner) {
            IUnknownLike* unk2 = *(IUnknownLike**)inner;
            int (__stdcall *fn2)(void*) = *(int (__stdcall **)(void*))(*(int*)unk2 + 8);
            fn2(inner);
        }
    }

    if (hr >= 0) {
        void* e = p3;
        int f = outer->f10;
        ((Outer*)c)->f10 = f;
        hr = sub_4022a0(c, (void*)0x784e28, (void*)0x784e40, e);
        if (hr < 0) {
            if (c) {
                IUnknownLike* unk3 = *(IUnknownLike**)c;
                int (__stdcall *fn3)(void*, int) = *(int (__stdcall **)(void*, int))(*(int*)unk3 + 0x1c);
                fn3(c, 1);
            }
        }
    } else {
        if (c) {
            IUnknownLike* unk4 = *(IUnknownLike**)c;
            int (__stdcall *fn4)(void*, int) = *(int (__stdcall **)(void*, int))(*(int*)unk4 + 0x1c);
            fn4(c, 1);
        }
    }

    return hr;
}
