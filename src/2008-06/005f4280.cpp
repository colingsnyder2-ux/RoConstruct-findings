// from server: 87% by king_originala
extern "C" {
    extern int (__cdecl *memmove_s)(void*, unsigned int, const void*, unsigned int);
}

struct Reader {
    unsigned char storage[12];
    int read(char*, int);
};

struct S;

struct VTable {
    unsigned char unused[0x54];
    void (__thiscall *initialize)(S*);
};

inline const int& minimum(const int& a, const int& b)
{
    return a < b ? a : b;
}

struct S {
    VTable* vtable;
    unsigned char padding04[12];
    char** begin;
    unsigned char padding14[12];
    char** current;
    unsigned char padding24[12];
    int* available;
    unsigned char padding34[8];
    unsigned char eof;
    unsigned char padding3d[3];
    Reader reader;
    char* buffer;
    int capacity;
    int retained;

    char* gptr();
    char* egptr();
    void setg(char*, char*, char*);
    int underflow();
};

inline char* S::gptr()
{
    return *current;
}

inline char* S::egptr()
{
    return *current + *available;
}

inline void S::setg(char* first, char* next, char* last)
{
    *begin = first;
    *current = next;
    *available = last - *current;
}

int S::underflow()
{
    if (!gptr())
        vtable->initialize(this);

    if (gptr() < egptr())
        return static_cast<unsigned char>(*gptr());

    int distance = gptr() - *begin;
    int saved = minimum(retained, distance);

    if (saved)
        memmove_s(buffer + (retained - saved), saved, gptr() - saved, saved);

    setg(buffer + retained - saved, buffer + retained, buffer + retained);

    int result = reader.read(buffer + retained, capacity - retained);
    if (result == -1) {
        eof = 1;
        result = 0;
    }

    *available = (buffer + retained + result) - gptr();

    if (result)
        return static_cast<unsigned char>(*gptr());

    return -1;
}
