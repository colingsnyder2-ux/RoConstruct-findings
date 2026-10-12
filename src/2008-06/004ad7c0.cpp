// from server: 96% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

inline void __cdecl operator delete(void*, void*)
{
}

struct Value {
    char storage[44];
    Value(const Value&);
    ~Value();
};

struct Source {
    void* pointer;
    Value value;
};

struct Item {
    unsigned int first;
    unsigned int second;
    unsigned int third;
    void* pointer;
    Value value;
    bool flag;
    bool pending;

    Item(unsigned int, unsigned int, unsigned int, const Source&, bool);
};

inline Item::Item(unsigned int a, unsigned int b, unsigned int c,
                  const Source& source, bool enabled)
    : first(a), second(b), third(c), pointer(source.pointer),
      value(source.value), flag(enabled), pending(false)
{
}

Item* __stdcall createItem(unsigned int a, unsigned int b, unsigned int c,
                           const Source* source, bool enabled)
{
    void* memory = operator new(sizeof(Item));
    try {
        return new (memory) Item(a, b, c, *source, enabled);
    }
    catch (...) {
        operator delete(memory);
        throw;
    }
}
