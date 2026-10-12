// from server: 76% by king_originala
extern "C" int (__cdecl *memmove_s)(void*, unsigned int, const void*, unsigned int);

struct Reader {
    char storage[12];
    int read(char*, int);
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
    char** beginning;
    char padding14[12];
    char** current;
    char padding24[12];
    int* available;
    char padding34[8];
    bool ended;
    char padding3d[3];
    Reader reader;
    char* buffer;
    int capacity;
    int retained;

    void set(char*, char*, char*);
    int func_005f9920();
};

inline void S::set(char* first, char* next, char* last)
{
    *beginning = first;
    *current = next;
    *available = last - next;
}

int S::func_005f9920()
{
    if (!*current)
        initialize();

    if (*current < *current + *available)
        return (unsigned char)**current;

    int used = *current - *beginning;
    const int& smaller = retained < used ? retained : used;
    int saved = smaller;

    if (saved)
        memmove_s(buffer + (retained - saved), saved, *current - saved, saved);

    set(buffer + retained - saved, buffer + retained, buffer + retained);

    int result = reader.read(buffer + retained, capacity - retained);
    if (result == -1) {
        ended = true;
        result = 0;
    }

    char* start = *current;
    char* last = buffer + retained + result;
    *available = last - start;

    if (result)
        return (unsigned char)**current;
    return -1;
}
