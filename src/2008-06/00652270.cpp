// from server: 96% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

inline void __cdecl operator delete(void*, void*)
{
}

struct Value {
    char data[60];
    Value(const void*);
};

struct Entry {
    int first;
    int second;
    int third;
    Value value;
    bool enabled;
    bool marked;

    Entry(int, int, int, const void*, bool);
};

inline Entry::Entry(int a, int b, int c, const void* p, bool flag)
    : first(a), second(b), third(c), value(p), enabled(flag), marked(false)
{
}

Entry* __stdcall createEntry(int a, int b, int c, const void* p, bool flag)
{
    void* storage = operator new(sizeof(Entry));
    try {
        return new (storage) Entry(a, b, c, p, flag);
    }
    catch (...) {
        operator delete(storage);
        throw;
    }
}
