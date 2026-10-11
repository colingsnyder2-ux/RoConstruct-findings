// from server: 73% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad[8];
};

struct Vec {
    Inner* begin;
    Inner* end;
};

struct Outer {
    char pad0[0xc];
    Vec v;
};

extern "C" int __stdcall sub_5f9b30(Inner* a, void* b);
extern "C" char __stdcall sub_65c200();

char __cdecl f(Outer* o) {
    Inner* begin = o->v.begin;
    Inner* end = o->v.end;
    int count = (int)(end - begin);
    int i = 0;
    if (count > 0) {
        void* g = *(void**)0x89e9ac;
        do {
            if (i >= count) {
                ((void (__stdcall*)())g)();
            }
            begin = o->v.begin;
            Inner* tmp;
            sub_5f9b30(begin + i, &tmp);
            if (sub_65c200()) {
                return 1;
            }
            end = o->v.end;
            begin = o->v.begin;
            count = (int)(end - begin);
            i++;
        } while (i < count);
    }
    return 0;
}
