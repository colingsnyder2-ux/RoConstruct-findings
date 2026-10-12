// from server: 79% by king_originala
extern int (__cdecl *memmove_s)(void *, unsigned int, const void *, unsigned int);

struct Decoder {
    char storage[0x4c];
    int read(void *, char *, int);
};

struct S;

struct VTable {
    void *slots[21];
    void (__thiscall *initialize)(S *);
};

struct S {
    VTable *vtable;
    char reserved04[0x0c];
    char **begin;
    char reserved14[0x0c];
    char **current;
    char reserved24[0x0c];
    int *available;
    char reserved34[8];
    unsigned char finished;
    char reserved3d[3];
    Decoder decoder;
    void *source;
    char *buffer;
    int capacity;
    int putback;

    char *gptr();
    char *egptr();
    void setg(char *, char *, char *);
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

inline void S::setg(char *first, char *next, char *last)
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
        vtable->initialize(this);

    if (gptr() < egptr())
        return (unsigned char)*gptr();

    int consumed = gptr() - *begin;
    const int &retained = putback < consumed ? putback : consumed;
    int count = retained;

    if (count)
        memmove_s(buffer + (putback - count), count, gptr() - count, count);

    setg(buffer + putback - count, buffer + putback, buffer + putback);

    int result = decoder.read(source, buffer + putback, capacity - putback);
    if (result == -1) {
        finished = 1;
        result = 0;
    }

    set_end(buffer + putback + result);
    if (result)
        return (unsigned char)*gptr();
    return -1;
}
