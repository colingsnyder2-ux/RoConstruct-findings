// from server: 75% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Value {
    unsigned int words[4];
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct Control {
    void* pointer;

    Control();
    ~Control();
};

inline Control::Control() : pointer(0) {}

struct Member {
    Member(Value, int);
    ~Member();
};

struct S {
    void* pointer;
    Control control;
    Member member;

    S(const Value&);
    void attach(Object*);
    void initialize();
};

S::S(const Value& value) : pointer(0), member(value, 0)
{
    attach(new Object);
    initialize();
}
