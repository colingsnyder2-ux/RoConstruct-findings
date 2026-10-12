// from server: 66% by king_originala
extern "C" void (__cdecl * const _invalid_parameter_noinfo)();

struct String;
extern void (__thiscall * const destroyString)(String*);

struct String {
    unsigned char storage[28];
    ~String();
};

inline String::~String() {
    destroyString(this);
}

struct Entry {
    unsigned int unused;
    unsigned int key;
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Entry** position;

    Entry*& operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator& other) const;
};

struct Vector {
    Proxy* proxy;
    unsigned int unused[2];
    Entry** first;
    Entry** last;
    Entry** limit;

    Iterator begin();
    Iterator end();
};

extern unsigned int __cdecl lookup(String*);
extern Vector& __cdecl registry();

inline Iterator Vector::begin() {
    Entry** position = first;
    if (position > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = proxy;
    result.position = position;
    return result;
}

inline Iterator Vector::end() {
    Entry** position = last;
    if (first > position)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = proxy;
    result.position = position;
    return result;
}

inline bool Iterator::operator!=(const Iterator& other) const {
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

inline Entry*& Iterator::operator*() const {
    if (!owner)
        _invalid_parameter_noinfo();
    Vector* container = owner ? owner->container : 0;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    return *position;
}

inline Iterator& Iterator::operator++() {
    if (!owner)
        _invalid_parameter_noinfo();
    Vector* container = owner ? owner->container : 0;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    ++position;
    return *this;
}

struct S {
    unsigned int unused[3];
    Entry** first;
    Entry** last;

    void assign(String name, unsigned int index);
};

void S::assign(String name, unsigned int index) {
    unsigned int key = lookup(&name);
    for (Iterator i = registry().begin(); i != registry().end(); ++i) {
        if ((*i)->key == key) {
            Entry*& entry = *i;
            if (index >= static_cast<unsigned int>(last - first))
                _invalid_parameter_noinfo();
            first[index] = entry;
            return;
        }
    }
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();
    first[index] = 0;
}
