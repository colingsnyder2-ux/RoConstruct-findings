// from server: 73% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Failure
{
    unsigned long words[10];
    Failure();
    ~Failure();
};

__declspec(noreturn) void __cdecl raise_exception(const void *);

struct Arguments
{
    float first;
    float second;
};

struct FunctionTable
{
    void *unused;
    void (__cdecl *invoke)(void *, float, float);
};

struct Callable
{
    unsigned long padding[2];
    FunctionTable *table;
    unsigned long reserved;
    unsigned char storage[1];
};

struct Node
{
    unsigned long padding[6];
    Callable *callable;
};

struct List
{
    unsigned long padding[5];
    Node *end;
};

struct Iterator
{
    unsigned long padding[4];
    List **owner;
    Node *node;
    unsigned long state[8];
    Arguments *arguments;
    bool *cached;

    bool equal(const Iterator &) const;
    void advance();
};

struct Result
{
};

Result __stdcall combine(Iterator first, Iterator last)
{
    while (!first.equal(last))
    {
        if (!*first.cached)
        {
            if (!first.owner)
                _invalid_parameter_noinfo();

            List *list = first.owner ? *first.owner : 0;
            if (first.node == list->end)
                _invalid_parameter_noinfo();

            Callable *callable = first.node->callable;
            float a = first.arguments->first;
            float b = first.arguments->second;

            if (!callable->table)
                raise_exception(&Failure());

            callable->table->invoke(callable->storage, a, b);

            if (!*first.cached)
                *first.cached = true;
        }

        first.advance();
    }

    return Result();
}
