// from server: 90% by king_originala
extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Counter {
    int references;
};

struct Node {
    char padding[20];
    void* value;
    Counter* counter;
};

struct Owner {
    char padding[24];
    Node* end;
};

struct Result {
    void* value;
    Counter* counter;

    virtual ~Result();
    Result(void* p, Counter* c);
};

inline Result::Result(void* p, Counter* c)
    : value(p), counter(c) {
    if (counter)
        ++counter->references;
}

struct S {
    Owner** owner;
    Node* node;

    void check();
    Result f();
};

Result S::f() {
    Owner** savedOwner = owner;
    Node* savedNode = node;

    check();

    void (__cdecl* reportError)() = invalid_parameter_noinfo;
    Owner* current;
    if (!savedOwner) {
        reportError();
        current = 0;
    } else {
        current = *savedOwner;
    }

    if (savedNode == current->end)
        reportError();

    return Result(savedNode->value, savedNode->counter);
}
