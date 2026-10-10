// from server: 25% by tester
struct S {
    void __cdecl f(char* out, const char* begin, const char* end);
};

void S::f(char* out, const char* begin, const char* end)
{
    const char* p = begin;
    while (p != end) {
        char c = *p;
        if (c != 0x20 && c != 9)
            break;
        ++p;
    }
    *(const char**)out = begin;
    *(const char**)(out + 4) = p;
}
