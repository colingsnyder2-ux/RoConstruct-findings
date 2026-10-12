// from server: 54% by king_originala
extern "C" __declspec(noreturn) void __stdcall write_buffer(
    void*, unsigned int, const char*, int);

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

    char padding04[16];
    char** base;
    char padding18[12];
    char* volatile* current;
    char padding28[12];
    int* remaining;
    char padding38[8];
    char context[8];
    unsigned int handle;
    char padding4c[12];
    unsigned int reserved : 3;
    volatile unsigned int buffered : 1;
    unsigned int other : 28;

    int overflow(int c);
};

int S::overflow(int c)
{
    if (buffered && !*current)
        initialize();

    if (c != -1) {
        if (buffered) {
            if (*current == *current + *remaining) {
                char* first = *base;
                int length = int(*current - first);
                if (length > 0)
                    write_buffer(context, handle, first, length);

                if (*current == *current + *remaining)
                    return -1;
            }

            **current = char(c);
            --*remaining;
            ++*current;
            return c;
        }

        write_buffer(context, handle, reinterpret_cast<const char*>(&c), 1);
    }

    return 0;
}
