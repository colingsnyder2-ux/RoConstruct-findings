// from server: 73% by king_originala
struct Value
{
    unsigned int words[4];
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Resource
{
    unsigned char data[40];
    Resource();
};

struct Base
{
    Resource* first;
    void* second;

    Base() : first(0), second(0) {}
    ~Base();
    void attach(Resource*);
};

struct Member
{
    Value value;
    unsigned int extra;

    Member(Value, unsigned int);
    ~Member();
};

struct S : Base
{
    Member member;

    S(const Value&);
    void finish();
};

S::S(const Value& value) : member(value, 0)
{
    attach(new Resource);
    finish();
}
