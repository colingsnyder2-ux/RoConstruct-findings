// from server: 100% by colin
typedef unsigned int size_t;

inline void *__cdecl operator new(size_t, void *address)
{
    return address;
}

inline void __cdecl operator delete(void *, void *)
{
}

typedef void (__thiscall *CopyObject)(void *, const void *);
extern CopyObject copyObject;

typedef void (__thiscall *DestroyObject)(void *);
extern DestroyObject destroyObject;

struct Value {
    unsigned long first;
    unsigned long second;
    unsigned long object;

    Value(const Value &source);
    ~Value() { destroyObject(&object); }
};

inline Value::Value(const Value &source)
    : first(source.first), second(source.second)
{
    copyObject(&object, &source.object);
}

Value *__cdecl copyValues(const Value *first, const Value *last,
                          Value *destination)
{
    Value *begin = destination;
    try {
        for (; first != last; ++destination, ++first)
        {
            Value *current = destination;
            new (current) Value(*first);
        }
    } catch (...) {
        for (; begin != destination; ++begin)
            begin->~Value();
        throw;
    }
    return destination;
}
