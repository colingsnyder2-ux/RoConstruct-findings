// from server: 51% by colin
struct Inner {
    char pad0[0x18];
    int (__stdcall *vt18)();
};

struct Outer {
    char pad0[0x20];
    Inner inner;
    char pad2[0x18];
    char sub[0x18];
    char pad3[0x8];
    void* field60;

    void func(void* a, void* b, void* c);
};

extern "C" {
    int __stdcall sub_6a2dd0(void*, void*, int);
    int __stdcall sub_6e4720(void*, void*, void*);
    int __stdcall sub_6e46d0(void*, void*, void*);
    int __stdcall sub_65e560(void*);
    int __stdcall sub_6e0540(void*, void*, int);
    int __stdcall sub_66ed20(void*);
    int __stdcall sub_6e47d0(void*);
}

void Outer::func(void* a, void* b, void* c)
{
    void* v = 0;
    if (a) {
        v = (void*)sub_6a2dd0(sub, a, 0);
    }
    if (c) {
        if (!v) v = field60;
        sub_6e4720(sub, v, b);
    } else {
        if (!v) {
            v = (void*)sub_65e560(&inner);
        }
        sub_6e46d0(sub, v, b);
    }
    *(void**)((char*)b + 0x10) = &inner;
    int r = inner.vt18();
    ((int (__stdcall*)(void*, int))((*(void***)b)[0x2c/4]))(b, r);
    void* x = (void*)sub_6e0540(&inner, &inner, 1);
    sub_66ed20(x);
    sub_6e47d0(this);
    if (*(void**)((char*)this + 0x30)) {
        void* p = *(void**)((char*)this + 0x30);
        ((int (__stdcall*)(void*, void*))((*(void***)p)[0x34/4]))(p, &inner);
    }
    ((int (__stdcall*)(void*, void*))((*(void***)b)[0x3c/4]))(b, &inner);
}
