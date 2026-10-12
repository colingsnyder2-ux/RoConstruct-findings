// from server: 31% by king_originala
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

    char pad04[16];
    char** begin;
    char pad18[12];
    char** current;
    char pad28[12];
    int* remaining;
    char pad38[16];
    char* buffer;
    int length;
    int pad50;
    unsigned flags;

    int overflow(int c);
};

int S::overflow(int c)
{
    if (((flags >> 3) & 1) && *current == 0)
        initialize();

    if (c != -1) {
        if ((flags >> 3) & 1) {
            char* next = *current;
            char* end = next + *remaining;
            if (next == end) {
                if (*current - *begin > 0) {
                    char* first = buffer;
                    char* last = first + length;
                    *begin = first;
                    *current = first;
                    *remaining = last - first;
                }

                next = *current;
                end = next + *remaining;
                if (next == end)
                    return -1;
            }

            **current = (char)c;
            --*remaining;
            ++*current;
        }
        return c;
    }
    return 0;
}
