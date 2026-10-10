// from server: 70% by atomic.potato
struct CWebToolbox
{
    char pad[0xca0];
    char *f(char *s);
};

extern "C" void __stdcall basic_string_copy(char *, const char *);

char *CWebToolbox::f(char *s)
{
    basic_string_copy(this->pad + 0xca0, s);
    return s;
}
