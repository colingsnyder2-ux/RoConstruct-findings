// from server: 87% by king_originala
typedef void *(__thiscall *AppendFunction)(void *, const char *, unsigned int);
extern AppendFunction append;

struct S {
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

    char padding0[0x10];
    char **first;
    char padding1[0x0C];
    char **last;
    char padding2[0x0C];
    int *available;
    char padding3[0x08];
    void *output;
    char padding4[0x14];
    unsigned int reserved : 3;
    volatile unsigned int buffered : 1;
    unsigned int remaining : 28;

    void flush();
    int overflow(int value);
};

int S::overflow(int value)
{
    if (buffered && !*last)
        initialize();

    if (value != -1) {
        if (buffered) {
            char *start = *last;
            char *end = start + *available;
            if (start == end) {
                flush();
                start = *last;
                end = start + *available;
                if (start == end)
                    return -1;
            }
            **last = static_cast<char>(value);
            --*available;
            ++*last;
            return value;
        }

        char ch = static_cast<char>(value);
        append(output, &ch, 1);
        return value;
    }
    return 0;
}
