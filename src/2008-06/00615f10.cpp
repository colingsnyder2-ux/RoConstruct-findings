// from server: 68% by king_originala
extern char lookupData[];

struct S;

struct Temporary
{
    char storage[28];
    Temporary(S* owner, void* input);
    ~Temporary();
};

struct Result
{
    void* consume(Temporary value, void* argument);
};

struct S
{
    void* makeTemporary(void* result, void* input);
    Result* lookup(void* input, int mode, const char* data);
    void* f(void* input, Result** result, void* argument);
};

__forceinline Temporary::Temporary(S* owner, void* input)
{
    owner->makeTemporary(this, input);
}

void* S::f(void* input, Result** result, void* argument)
{
    *result = lookup(input, 0, lookupData);
    if (*result)
    {
        void* value = (*result)->consume(Temporary(this, input), argument);
        if (value)
            return value;
    }
    return 0;
}
