// from server: 97% by king_originala
struct S
{
    char data[0x8c];
    void* value;

    void prepare(const S&);
    void func_005f82f0(const S&);
};

extern __declspec(noreturn) void __cdecl initialize(void*, void*, const S*);

void S::func_005f82f0(const S& source)
{
    prepare(source);
    try
    {
        initialize(data + 0x40, value, &source);
    }
    catch (...)
    {
        throw;
    }
}
