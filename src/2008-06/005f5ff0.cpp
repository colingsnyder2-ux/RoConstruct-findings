// from server: 84% by king_originala
struct String {
    void convert(const char*, const char*, String*);
};

extern void (__thiscall *string_tidy)(String*, bool, unsigned int);

struct Buffer {
    char reserved[28];
    const char* first;
    const char* last;
};

struct S {
    Buffer* buffer;
    String* f(String*);
};

String* S::f(String* result)
{
    const char* first = buffer->first;
    const char* last = buffer->last;
    volatile unsigned int state = 0;
    string_tidy(result, false, 0);
    result->convert(first, last, result);
    return result;
}
