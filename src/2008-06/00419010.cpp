// from server: 93% by king_originala
typedef unsigned int size_t;

inline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

inline void __cdecl operator delete(void*, void*)
{
}

struct Member
{
    Member(const Member&);
};

struct Object
{
    unsigned int first;
    unsigned int second;
    Member member;
};

void __cdecl construct(Object* volatile destination, const Object& source)
{
    Object* p = destination;
    destination = p;
    new (p) Object(source);
}
