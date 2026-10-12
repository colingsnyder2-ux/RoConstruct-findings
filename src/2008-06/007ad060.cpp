// from server: 73% by king_originala
struct Exception
{
    const char* message;
    Exception(const char* text) : message(text) {}
    ~Exception();
};

struct S_func_007ad060
{
    void f();
};

void S_func_007ad060::f()
{
    throw Exception("shouldn't be here");
}
