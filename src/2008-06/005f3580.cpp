// from server: 68% by king_originala
extern "C" __int64 __stdcall transfer(void *, unsigned long, const char *, int);

struct S {
    virtual void v0() = 0;
    virtual void v1() = 0;
    virtual void v2() = 0;
    virtual void v3() = 0;
    virtual void v4() = 0;
    virtual void v5() = 0;
    virtual void v6() = 0;
    virtual void v7() = 0;
    virtual void v8() = 0;
    virtual void v9() = 0;
    virtual void v10() = 0;
    virtual void v11() = 0;
    virtual void v12() = 0;
    virtual void v13() = 0;
    virtual void v14() = 0;
    virtual void v15() = 0;
    virtual void v16() = 0;
    virtual void v17() = 0;
    virtual void v18() = 0;
    virtual void v19() = 0;
    virtual void v20() = 0;
    virtual void v21() = 0;
    virtual void initialize() = 0;

    char pad04[16];
    char **begin;
    char pad18[12];
    char **current;
    char pad28[12];
    int *remaining;
    char pad38[8];
    char state[8];
    unsigned long handle;
    char pad4c[12];
    volatile unsigned int flags;

    int write(int);
};

int S::write(int ch)
{
    S *p = this;
    if (((p->flags >> 3) & 1) && !*p->current)
        p->initialize();

    int value = ch;
    if (value != -1) {
        if ((p->flags >> 3) & 1) {
            int n = *p->remaining;
            char *out = *p->current;
            if (out == out + n) {
                char *first = *p->begin;
                int length = *p->current - first;
                if (length > 0) {
                    unsigned long h = p->handle;
                    p = reinterpret_cast<S *>(reinterpret_cast<char *>(p) + 64);
                    n = static_cast<int>(transfer(p, h, first, length) >> 32);
                }
                out = *p->current;
                if (out == out + n)
                    return -1;
            }
            **p->current = static_cast<char>(value);
            --*p->remaining;
            ++*p->current;
            return value;
        }
        transfer(p->state, p->handle, reinterpret_cast<const char *>(&ch), 1);
    }
    return 0;
}
