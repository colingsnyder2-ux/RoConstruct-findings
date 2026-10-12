// from server: 69% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern "C" void (__cdecl* invalid_parameter)();

struct Object {
    char storage[0x15c];
    Object(void* context);
};

struct Collection {
    char storage[0x38];
    void push_back(Object* const& value);
};

struct S {
    char padding[0x54];
    Object** first;
    Object** last;
    Object** limit;
    Collection active;
    void* context;

    unsigned int size() const;
    Object* acquire();
};

inline unsigned int S::size() const
{
    Object** end = *(Object** const volatile*)&last;
    Object** begin = *(Object** const volatile*)&first;
    return (unsigned int)(end - begin);
}

Object* S::acquire()
{
    Object* value;
    if (size() != 0) {
        unsigned int index = size() - 1;
        if (index >= size())
            invalid_parameter();
        value = first[index];
        if ((unsigned int)(last - first) != 0)
            --last;
    } else {
        value = new Object(context);
    }

    Object* copy = value;
    active.push_back(copy);
    return value;
}
