// from server: 61% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node;

struct Owner
{
    char reserved[20];
    Node* sentinel;
};

struct Manager
{
    void* reserved;
    void (__cdecl* invoke)(void*, float);
};

struct Callable
{
    char reserved[8];
    Manager* manager;
    unsigned int unused;
    char storage[1];
};

struct Node
{
    char reserved[24];
    Callable* callable;
};

struct Iterator
{
    char reserved[16];
    Owner** owner;
    Node* node;
    char padding[32];
    float* value;
    bool* changed;

    bool equal(const Iterator*);
    void advance();
};

struct Failure
{
    char data[32];

    Failure();
    ~Failure();
};

__declspec(noreturn) void __cdecl raise_failure(const Failure&);

struct Result
{
};

Result __stdcall func_004934a0(Iterator first, Iterator last)
{
    while (!first.equal(&last))
    {
        if (!*first.changed)
        {
            if (!first.owner)
                _invalid_parameter_noinfo();

            Owner* owner = first.owner ? *first.owner : 0;
            if (first.node == owner->sentinel)
                _invalid_parameter_noinfo();

            Callable* callable = first.node->callable;
            float value = *first.value;

            if (!callable->manager)
                raise_failure(Failure());

            callable->manager->invoke(callable->storage, value);

            if (!*first.changed)
                *first.changed = true;
        }

        first.advance();
    }

    return Result();
}
