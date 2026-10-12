// from server: 92% by king_originala
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

struct Value {
    unsigned long first;
    unsigned long second;
    unsigned long object;

    Value(const Value &source);
    ~Value();
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
        for (; first != last; ++first, ++destination)
            new (destination) Value(*first);
    } catch (...) {
        for (; begin != destination; ++begin)
            begin->~Value();
        throw;
    }
    return destination;
}
