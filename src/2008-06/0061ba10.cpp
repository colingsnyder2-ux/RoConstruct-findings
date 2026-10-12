// from server: 95% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct String {
    unsigned char data[28];
};

extern int (__thiscall *string_compare)(const String *, const String &);

struct Key {
    unsigned int tag;
    String text;
};

struct Entry {
    unsigned int tag;
    Key *key;
};

struct S;

struct Proxy {
    S *container;
};

struct Iterator {
    Proxy *owner;
    Entry **position;

    Iterator(Entry **p, S *s);
    Iterator &operator+=(unsigned int n);
    Iterator operator+(unsigned int n) const;
};

struct S {
    Proxy *owner;
    unsigned int reserved[2];
    Entry **first;
    Entry **last;

    Iterator find(const Key *key);
};

inline Iterator::Iterator(Entry **p, S *s) : owner(0)
{
    if (s->first > p || p > s->last)
        invalid_parameter_noinfo();
    owner = s->owner;
    position = p;
}

inline Iterator &Iterator::operator+=(unsigned int n)
{
    S *cursor = reinterpret_cast<S *>(owner);

    if (!cursor)
        invalid_parameter_noinfo();

    S *container = cursor
        ? reinterpret_cast<Proxy *>(cursor)->container
        : 0;

    Entry **p = position + n;
    if (p > container->last)
        invalid_parameter_noinfo();
    else {
        if (cursor)
            cursor = reinterpret_cast<Proxy *>(cursor)->container;
        else
            cursor = 0;

        if (p < cursor->first)
            invalid_parameter_noinfo();
    }

    position = p;
    return *this;
}

inline Iterator Iterator::operator+(unsigned int n) const
{
    Iterator result(*this);
    return result += n;
}

Iterator S::find(const Key *key)
{
    unsigned int low = 0;
    unsigned int high = last - first;
    unsigned int middle;

    while (low < high) {
        middle = (high + low) >> 1;

        if (middle >= static_cast<unsigned int>(last - first))
            invalid_parameter_noinfo();

        Key *candidate = first[middle]->key;
        if (key == candidate)
            goto found;

        int comparison = string_compare(&key->text, candidate->text);
        if (comparison < 0)
            high = middle;
        else if (comparison > 0)
            low = middle + 1;
        else
            goto found;
    }

    return Iterator(last, this);

found:
    return Iterator(first, this) + middle;
}
