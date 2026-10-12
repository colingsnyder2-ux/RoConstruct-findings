// from server: 92% by king_originala
inline void* operator new(unsigned int, void* p)
{
    return p;
}

inline void operator delete(void*, void*)
{
}

struct Member
{
    Member(const Member&);
};

struct S
{
    unsigned int first;
    Member second;
};

void __cdecl construct(S* destination, const S& source)
{
    new (destination) S(source);
}
