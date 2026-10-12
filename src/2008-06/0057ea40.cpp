// from server: 93% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" void _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Container {
    char padding[0x10];
    int **end;
};

struct Owner {
    Container *container;
};

struct S {
    char padding[0x13c];
    Owner *owner;
    char reserved[8];
    int **begin;
    int **end;
    int *f();
};

int *S::f()
{
    unsigned count = static_cast<unsigned>(end - begin);
    _ReadWriteBarrier();

    if (count > 0) {
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        int **p = begin;
        if (p > end)
            invalid();

        Container *c = reinterpret_cast<Container *>(owner);
        if (!c) {
            invalid();

        check:
            if (p >= c->end)
                invalid();
            return *p;
        }

        c = reinterpret_cast<Owner *>(c)->container;
        goto check;
    }
    return 0;
}
