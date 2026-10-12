// from server: 97% by king_originala
extern "C" int (__cdecl *move_bytes)(
    void*, unsigned int, const void*, unsigned int);

extern int __stdcall read_buffer(void*, void*, char*, int);

inline const int& smaller(const int& a, const int& b)
{
    return b < a ? b : a;
}

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
    virtual void initialize();

    char padding0[12];
    char** first;
    char padding1[12];
    char** current;
    char padding2[12];
    int* remaining;
    char padding3[12];
    unsigned int device;
    void* context;
    char* buffer;
    int capacity;
    int putback;

    char* gptr();
    char* eback();
    char* egptr();
    void setg(char*, char*, char*);
    int f();
};

inline char* S::gptr()
{
    return *current;
}

inline char* S::eback()
{
    return *first;
}

inline char* S::egptr()
{
    return *current + *remaining;
}

inline void S::setg(char* begin, char* next, char* end)
{
    *first = begin;
    *current = next;
    *remaining = static_cast<int>(end - next);
}

int S::f()
{
    if (!gptr())
        initialize();

    if (gptr() < egptr())
        return static_cast<unsigned char>(*gptr());

    int available = static_cast<int>(gptr() - eback());
    int retained = smaller(available, putback);

    if (retained)
        move_bytes(buffer + putback - retained,
                   retained, gptr() - retained, retained);

    setg(buffer + putback - retained,
         buffer + putback, buffer + putback);

    return read_buffer(&device, context,
                       buffer + putback, capacity - putback);
}
