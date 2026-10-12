// from server: 81% by king_originala
extern "C" {
    extern int (__cdecl *memmove_s)(void *, unsigned int, const void *, unsigned int);
}

inline const int &minimum(const int &a, const int &b)
{
    return b < a ? b : a;
}

struct Reader {
    char storage[0x60];
    int read(void *, char *, int);
};

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

    char padding04[12];
    char **begin;
    char padding14[12];
    char **current;
    char padding24[12];
    int *available;
    char padding34[8];
    bool exhausted;
    char padding3D[3];
    Reader reader;
    void *source;
    char *buffer;
    int capacity;
    int putback;

    char *gptr();
    char *egptr();
    void set(char *, char *, char *);
    void set_end(char *);
    int underflow();
};

inline char *S::gptr()
{
    return *current;
}

inline char *S::egptr()
{
    return *current + *available;
}

inline void S::set(char *first, char *next, char *last)
{
    *begin = first;
    *current = next;
    *available = last - next;
}

inline void S::set_end(char *last)
{
    *available = last - *current;
}

int S::underflow()
{
    if (!gptr())
        initialize();

    if (gptr() < egptr())
        return static_cast<unsigned char>(*gptr());

    int used = gptr() - *begin;
    int saved = minimum(used, putback);

    if (saved)
        memmove_s(buffer + (putback - saved), saved, gptr() - saved, saved);

    set(buffer + putback - saved, buffer + putback, buffer + putback);

    int count = reader.read(source, buffer + putback, capacity - putback);
    if (count == -1) {
        exhausted = true;
        count = 0;
    }

    set_end(buffer + putback + count);

    if (count)
        return static_cast<unsigned char>(*gptr());
    return -1;
}
