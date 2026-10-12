// from server: 63% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Result {
    void* first;
    Control* second;
    Result(const Result& other);
    ~Result();
};

inline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
    if (second)
        _InterlockedExchangeAdd(&second->strong, 1);
}

struct Guard {
    unsigned int value;
    Guard(Result value);
    ~Guard();
};

struct Verb {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void execute(void* context);
};

struct Registry {
    Verb* lookup(void* value);
};

struct Node {
    unsigned char padding[16];
    void* value;
};

struct Tree {
    unsigned char padding[24];
    Node* end;
};

struct Owner {
    Tree* tree;
};

struct Iterator {
    Owner* owner;
    Node* node;
};

struct Map {
    Owner* owner;
    unsigned char padding[20];
    Node* end;
    Iterator* find(Iterator* result, const int* key);
};

struct S {
    unsigned char padding[84];
    Map map;
    Result copy();
    Registry* registry();
    void f(int key, int mode);
};

void S::f(int key, int mode)
{
    if (mode != 0 && mode != -1)
        return;

    Iterator position;
    map.find(&position, &key);

    Owner* owner = position.owner;
    Node* end = map.end;
    Owner* expected = map.owner;

    if (!owner || owner != expected)
        _invalid_parameter_noinfo();

    Node* node = position.node;
    if (node == end)
        return;

    Tree* tree;
    if (!owner) {
        _invalid_parameter_noinfo();
        tree = 0;
    } else {
        tree = owner->tree;
    }

    if (node == tree->end)
        _invalid_parameter_noinfo();

    if (!node->value)
        return;

    Result result = copy();
    Guard guard(result);

    if (!owner)
        _invalid_parameter_noinfo();

    if (node == owner->tree->end)
        _invalid_parameter_noinfo();

    void* value = node->value;
    Registry* collection = registry();
    if (!collection)
        return;

    Verb* verb = collection->lookup(value);
    if (!verb)
        return;

    if (mode == 0) {
        try {
            verb->execute(result.first
                ? static_cast<unsigned char*>(result.first) + 0x1f0
                : 0);
        } catch (...) {
        }
    }
}
