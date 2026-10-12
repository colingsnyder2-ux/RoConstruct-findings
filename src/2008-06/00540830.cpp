// from server: 55% by king_originala
#pragma optimize("", off)

struct Value {
    unsigned int data;
    Value();
    ~Value();
};

struct Pair {
    unsigned int data[4];
    Pair(const unsigned int& key, const Value& value);
    ~Pair();
};

struct Iterator {
    void* container;
    void* current;

    bool equal(const Iterator& other) const;
    void* key_source() const;
    char* dereference() const;
};

extern "C" const unsigned int& __cdecl extract_key(void* source);

struct Comparator {
    bool compare(const unsigned int& left, const unsigned int& right);
};

struct S {
    unsigned char padding[8];
    Comparator comparator;

    Iterator find(const unsigned int& key);
    Iterator* end(Iterator* result);
    Iterator insert(Iterator position, const Pair& value);
    char* f(const unsigned int& key);
};

char* S::f(const unsigned int& key)
{
    Iterator position = find(key);
    Iterator last;

    if (position.equal(*end(&last)) &&
        comparator.compare(key, extract_key(position.key_source()))) {
        position = insert(position, Pair(key, Value()));
    }

    return position.dereference() + 12;
}
