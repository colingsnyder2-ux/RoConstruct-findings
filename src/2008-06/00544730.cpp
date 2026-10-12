// from server: 84% by king_originala
#pragma optimize("", off)

struct S;

struct Result
{
    void* first;
    void* second;
    Result(void*, S*);
};

struct S
{
    Result f(void*, void*);
};

Result S::f(void*, void* value)
{
    Result result(value, this);
    return result;
}
