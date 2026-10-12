// from server: 87% by king_originala
struct Result
{
    unsigned int reserved;
    void* object;
    void* owner;
    unsigned char flag;
};

struct State
{
    void finish();
};

struct Prefix
{
    unsigned char reserved[16];
};

struct Product : Prefix, State
{
};

extern "C" Product& __stdcall createProduct(
    void*, Result*, void**, unsigned int, unsigned int);

struct S
{
    Result* reconstruct(Result*, void*, unsigned int, void*);
};

Result* S::reconstruct(
    Result* result, void* source, unsigned int value, void* context)
{
    volatile unsigned int zero = 0;
    if (source)
    {
        createProduct(source, result, &context, value, 0).finish();
        return result;
    }

    result->object = 0;
    result->owner = 0;
    result->flag = 0;
    return result;
}
