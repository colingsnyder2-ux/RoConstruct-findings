// from server: 64% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Failure {
    unsigned char storage[40];
    Failure();
    ~Failure();
};

__declspec(noreturn) void __cdecl raise_failure(const Failure&);

struct CallableTable {
    void* unused;
    void (__cdecl *invoke)(void*, void*);
};

struct Callable {
    unsigned char prefix[8];
    CallableTable* table;
    unsigned char unused[4];
    unsigned char data[1];
};

struct Node {
    unsigned char prefix[24];
    Callable* callable;
};

struct Container {
    unsigned char prefix[20];
    Node* end;
};

struct Iterator {
    unsigned char prefix[16];
    Container** owner;
    Node* node;
    unsigned char unused[32];
    void** argument;
    unsigned char* invoked;

    bool equal(const Iterator&);
    void advance();
};

struct Result {
    Result() {}
};

Result __stdcall apply(Iterator first, Iterator last)
{
    while (!first.equal(last)) {
        if (!*first.invoked) {
            if (!first.owner)
                _invalid_parameter_noinfo();

            Container* container = first.owner ? *first.owner : 0;
            if (first.node == container->end)
                _invalid_parameter_noinfo();

            Callable* callable = first.node->callable;
            void* argument = *first.argument;

            if (!callable->table) {
                Failure failure;
                raise_failure(failure);
            }

            callable->table->invoke(callable->data, argument);
            if (!*first.invoked)
                *first.invoked = 1;
        }
        first.advance();
    }
    return Result();
}
