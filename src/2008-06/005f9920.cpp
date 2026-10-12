// from server: 72% by king_originala
extern "C" int __cdecl memmove_s(void*, unsigned int, const void*, unsigned int);

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
    unsigned char** beginning;
    char padding14[12];
    unsigned char** current;
    char padding24[12];
    int* available;
    char padding34[8];
    bool ended;
    char padding3d[3];
    Reader reader;
    unsigned char* buffer;
    int capacity;
    int retained;

    int func_005f9920();
};

int S::func_005f9920()
{
    if (!*current)
        initialize();

    unsigned char* p = *current;
    if (p < p + *available)
        return *p;

    int used = p - *beginning;
    const int& smaller = retained < used ? retained : used;
    int saved = smaller;

    if (saved)
        memmove_s(buffer + retained - saved, saved, p - saved, saved);

    unsigned char* next = buffer + retained;
    *beginning = next - saved;
    *current = next;
    *available = next - *current;

    int result = reader.read((char*)(buffer + retained), capacity - retained);
    if (result == -1) {
        ended = true;
        result = 0;
    }

    *available = buffer + retained + result - *current;

    if (result)
        return **current;
    return -1;
}
