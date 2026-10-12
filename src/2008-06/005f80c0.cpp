// from server: 88% by king_originala
struct Sink
{
    int write(void* context, const char* data, int size);
    char storage[0x4c];
};

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

    char padding04[0x20];
    char** current;
    char padding28[0x0c];
    int* available;
    char padding38[8];
    Sink sink;
    void* context;
    char padding90[0x0c];
    unsigned reserved : 3;
    volatile unsigned buffered : 1;
    unsigned remaining : 28;

    void refill();
    int overflow(int c);
};

int S::overflow(int c)
{
    if (buffered && *current == 0)
        initialize();

    if (c != -1)
    {
        if (buffered)
        {
            char* p = *current;
            if (p == p + *available)
            {
                refill();
                p = *current;
                if (p == p + *available)
                    return -1;
            }

            **current = static_cast<char>(c);
            --*available;
            ++*current;
            return c;
        }

        char ch = static_cast<char>(c);
        if (sink.write(context, &ch, 1) == 1)
            return c;
        return -1;
    }

    return 0;
}
