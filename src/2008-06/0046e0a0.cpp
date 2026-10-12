// from server: 100% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct Element {
    unsigned char data[64];
    Element(const Element&);
    ~Element();
};

Element* __cdecl copy_elements(Element* first, Element* last, Element* destination)
{
    Element* start = destination;
    try {
        for (; first != last; ++destination, ++first) {
            void* storage = destination;
            new (storage) Element(*first);
        }
        return destination;
    }
    catch (...) {
        for (; start != destination; ++start)
            start->~Element();
        throw;
    }
}
