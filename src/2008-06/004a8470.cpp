// from server: 86% by king_originala
extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Empty {
    Empty();
};

struct Empty2 {
    Empty2();
};

inline Empty::Empty() {}
inline Empty2::Empty2() {}

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* owner;
    unsigned* current;

    Iterator(Proxy*, unsigned*);
    bool operator==(const Iterator&) const;
    Vector* container() const;
    unsigned& operator*() const;
    Iterator& operator++();
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    unsigned* first;
    unsigned* last;

    Iterator begin();
    Iterator end();
};

inline Iterator::Iterator(Proxy* p, unsigned* q)
    : owner(p), current(q)
{
}

inline bool Iterator::operator==(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return current == other.current;
}

inline Iterator Vector::begin()
{
    unsigned* p = first;
    if (p > last)
        invalid_parameter_noinfo();
    return Iterator(proxy, p);
}

inline Iterator Vector::end()
{
    unsigned* p = last;
    if (first > p)
        invalid_parameter_noinfo();
    return Iterator(proxy, p);
}

inline Vector* Iterator::container() const
{
    if (owner)
        return owner->owner;
    invalid_parameter_noinfo();
    return 0;
}

inline unsigned& Iterator::operator*() const
{
    if (current >= container()->last)
        invalid_parameter_noinfo();
    return *current;
}

inline Iterator& Iterator::operator++()
{
    if (current >= container()->last)
        invalid_parameter_noinfo();
    ++current;
    return *this;
}

extern Vector* __cdecl getValues();

struct Base {
    unsigned storage[7];
    unsigned count;
    unsigned bits;

    Base(const Empty&, const Empty2&);
    ~Base();
    unsigned* lookup(const unsigned*);
};

struct S : Base {
    S();
};

S::S() : Base(Empty(), Empty2())
{
    Iterator current = getValues()->begin();
    Iterator end = getValues()->end();
    for (; !(current == end); ++current) {
        unsigned key = *current;
        unsigned value = count;
        *lookup(&key) = value;

        unsigned n = count;
        unsigned result = ~0u;
        while (n > 0) {
            n >>= 1;
            ++result;
        }
        bits = result + 1;
    }
}
