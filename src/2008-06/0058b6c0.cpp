// from server: 82% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_historyholder_7877356aa9d43791.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
typedef boost::shared_ptr<void> Shared;
struct Value {
    unsigned char storage[56];
    Value(void*, Shared);
    Value(const Value&);
    ~Value();
};

struct InputEntry {
    void* key;
    Value value;
    InputEntry(void*, const Value&);
};

struct Entry {
    void* const key;
    Value value;
    Entry(const InputEntry&);
};

__forceinline InputEntry::InputEntry(void* p, const Value& v)
    : key(p), value(v)
{
}

__forceinline Entry::Entry(const InputEntry& other)
    : key(other.key), value(other.value)
{
}

struct Container;

struct Iterator {
    Container** owner;
    unsigned char* node;
};

struct Container {
    Container** owner;
    unsigned char padding[20];
    unsigned char* end;
    unsigned char padding2[4];
    void* descriptor;

    Iterator* find(Iterator*, void* const&);
    Iterator* insert(Iterator*, const Entry&);
    void* f(Shared);
};

void* Container::f(Shared argument)
{
    void* key = argument.get();
    Iterator position;
    find(&position, key);

    Container** identity = position.owner;
    unsigned char* last = end;
    Container** expected = owner;

    if (!identity || identity != expected)
        _invalid_parameter_noinfo();

    unsigned char* node = position.node;

    if (node == last) {
        Iterator* result = insert(
            &position,
            Entry(InputEntry(argument.get(), Value(descriptor, argument))));
        identity = result->owner;
        node = result->node;
    }

    if (!identity)
        _invalid_parameter_noinfo();
    else
        identity = reinterpret_cast<Container**>(*identity);

    if (node == reinterpret_cast<Container*>(identity)->end)
        _invalid_parameter_noinfo();

    node += 16;
    return node;
}
