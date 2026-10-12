// from server: 91% by king_originala
typedef unsigned int size_t;

inline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

inline void __cdecl operator delete(void*, void*)
{
}

struct Element {
    unsigned char storage[64];
    Element(const Element&);
    ~Element();
};

Element* __cdecl construct_elements(Element* first, unsigned int count,
                                    const Element& value)
{
    Element* start = first;
    try {
        for (; count > 0; --count, ++first)
            new (static_cast<void*>(first)) Element(value);
    }
    catch (...) {
        for (; start != first; ++start)
            start->~Element();
        throw;
    }
    return first;
}
