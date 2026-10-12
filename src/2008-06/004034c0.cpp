// from server: 75% by king_originala
extern "C" {
    extern int (__stdcall *lstrlenA)(const char *);
    extern int (__stdcall *lstrlenW)(const wchar_t *);
    void *__cdecl _alloca(unsigned int);
}
#pragma intrinsic(_alloca)

extern bool __cdecl stackAvailable(int);
extern wchar_t *__stdcall convertText(wchar_t *, const char *, int, unsigned int);

struct Buffer
{
    void *storage;
    ~Buffer() throw();
    void *allocate(int);
};

struct S
{
    int appendWide(const wchar_t *, int);
    int append(const char *);
};

int S::append(const char *text)
{
    if (!text)
        return 0;

    Buffer buffer = { 0 };
    __int64 size = (__int64)(lstrlenA(text) + 1) * (__int64)2;

    if (size < (-2147483647i64 - 1) || size > 2147483647i64)
        return 0;

    int bytes = (int)size;
    wchar_t *destination;

    if (bytes <= 1024 && stackAvailable(bytes))
        destination = (wchar_t *)_alloca(bytes);
    else
        destination = (wchar_t *)buffer.allocate(bytes);

    wchar_t *converted = convertText(destination, text, bytes, 3);
    if (!converted)
        return 0;

    return appendWide(converted, lstrlenW(converted));
}
