// from server: 68% by king_originala
extern "C" unsigned __int64 __stdcall sub_5f5b70(void *, void *, const char *, int);

struct S
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void initialize();

    char pad04[0x10];
    char **begin;
    char pad18[0x0c];
    char **current;
    char pad28[0x0c];
    int *remaining;
    char pad38[8];
    unsigned long device;
    void *context;
    char pad48[0x0c];
    unsigned long reserved : 3;
    volatile unsigned long buffered : 29;

    int f(int value);
};

int S::f(int value)
{
    S *p = this;
    if ((p->buffered & 1) && !*p->current)
        p->initialize();

    int ch = value;
    if (ch != -1)
    {
        if (p->buffered & 1)
        {
            int available = *p->remaining;
            char *next = *p->current;
            if (next == next + available)
            {
                char *base = *p->begin;
                int length = int(*p->current - base);
                if (length > 0)
                {
                    void *context = p->context;
                    p = reinterpret_cast<S *>(reinterpret_cast<char *>(p) + 0x40);
                    available = int(sub_5f5b70(p, context, base, length) >> 32);
                }

                next = *p->current;
                if (next == next + available)
                    return -1;
            }

            **p->current = static_cast<char>(ch);
            --*p->remaining;
            ++*p->current;
            return ch;
        }

        void *context = p->context;
        p = reinterpret_cast<S *>(reinterpret_cast<char *>(p) + 0x40);
        sub_5f5b70(p, context, reinterpret_cast<const char *>(&value), 1);
    }
    return 0;
}
