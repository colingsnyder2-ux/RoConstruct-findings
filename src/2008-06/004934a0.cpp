// from server: 75% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct ExceptionObject
{
    unsigned long words[10];
    ExceptionObject *__thiscall initialize();
    ~ExceptionObject();
};

extern __declspec(noreturn) void __cdecl raise_exception(const void *);

struct CallbackTable
{
    void *unused;
    void (__cdecl *invoke)(void *, float);
};

struct Function
{
    CallbackTable *table;
    unsigned long reserved;
    unsigned char data[1];

    void operator()(float value);
};

struct Callback
{
    unsigned long unused[2];
    Function function;
};

struct Node
{
    unsigned long unused[6];
    Callback *callback;
};

struct Owner
{
    unsigned long unused[5];
    Node *end;
};

struct Iterator
{
    unsigned long unused[4];
    Owner **owner;
    Node *node;
    unsigned long tail[8];

    bool __thiscall equal(const void *other);
    void __thiscall advance();
};

struct EndIterator
{
    unsigned long words[16];
};

struct Visitor
{
    const float *value;
    bool *done;
    void operator()(Callback *callback);
};

__forceinline void Function::operator()(float value)
{
    if (!table)
    {
        ExceptionObject exception;
        raise_exception(exception.initialize());
    }
    table->invoke(data, value);
}

__forceinline void Visitor::operator()(Callback *callback)
{
    callback->function(*value);
    if (!*done)
        *done = true;
}

void *__stdcall process(void *result, Iterator current,
                        Visitor visitor, EndIterator last)
{
    while (!current.equal(&last))
    {
        if (!*visitor.done)
        {
            if (!current.owner)
                invalid_parameter_noinfo();

            Owner *owner = current.owner ? *current.owner : 0;
            if (current.node == owner->end)
                invalid_parameter_noinfo();

            visitor(current.node->callback);
        }
        current.advance();
    }
    return result;
}
