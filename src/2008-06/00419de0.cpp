// from server: 93% by king_originala
typedef unsigned int size_t;

inline void* __cdecl operator new(size_t, void* p) throw()
{
    return p;
}

inline void __cdecl operator delete(void*, void*) throw()
{
}

struct Payload
{
    Payload(const Payload&);
};

struct Object
{
    void* first;
    void* second;
    Payload payload;
};

void __cdecl construct(Object* destination, const Object& source)
{
    *reinterpret_cast<Object* volatile*>(&destination) = destination;
    ::new (static_cast<void*>(destination)) Object(source);
}
