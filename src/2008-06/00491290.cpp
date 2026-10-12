// from server: 92% by king_originala
typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
void operator delete(void*, void*);

struct Base
{
    unsigned char data[32];
    Base(const Base&);
};

struct S : Base
{
    int value;
};

void construct(S* destination, const S& source)
{
    new (destination) S(source);
}
