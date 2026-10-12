// from server: 78% by king_originala
#pragma optimize("", off)

struct Base {
    char storage[12];
    Base(void*);
    ~Base();
};

struct S {
    void* pointer;
    void assign(void*);
    S(const S&);
};

struct Object : Base {
    S member;
    Object(void*, const S&);
};

Object::Object(void* arg, const S& other)
    : Base(arg), member(other)
{
}
