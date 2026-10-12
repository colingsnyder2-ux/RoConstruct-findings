// from server: 64% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Error {
    char storage[40];
    Error();
    ~Error();
};

__declspec(noreturn) void __cdecl raiseError(const Error&);

struct Invocation {
    void* reserved;
    void (__cdecl *invoke)(void*, float, float);
};

struct Callback {
    char reserved[8];
    Invocation* implementation;
    unsigned long padding;
    char object[1];

    void operator()(float x, float y);
};

inline void Callback::operator()(float x, float y)
{
    if (!implementation)
        raiseError(Error());
    implementation->invoke(object, x, y);
}

struct Node {
    char reserved[24];
    Callback* callback;
};

struct Container {
    char reserved[20];
    Node* sentinel;
};

struct Iterator {
    char reserved[16];
    Container** owner;
    Node* node;
    char remaining[32];

    bool equal(const Iterator* other);
    void advance();
};

struct EndIterator {
    Iterator value;
    char remaining[8];
};

struct Arguments {
    float first;
    float second;
};

void* __stdcall dispatch(void* result, Iterator current,
                         const Arguments* arguments, bool* invoked,
                         EndIterator end)
{
    while (!current.equal(&end.value)) {
        if (!*invoked) {
            if (!current.owner)
                _invalid_parameter_noinfo();

            Container* container = current.owner ? *current.owner : 0;
            if (current.node == container->sentinel)
                _invalid_parameter_noinfo();

            (*current.node->callback)(arguments->first, arguments->second);

            if (!*invoked)
                *invoked = true;
        }
        current.advance();
    }
    return result;
}
