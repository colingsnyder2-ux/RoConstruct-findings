// from server: 96% by king_originala
void __cdecl operator delete(void*) throw();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Proxy {
    void* owner;
    ~Proxy();
};

inline Proxy::~Proxy()
{
    operator delete(owner);
}

struct Value : Proxy {
    char padding[8];
    void* first;
    void* last;
    void* limit;

    void tidy();
    ~Value();
};

inline Value::~Value()
{
    tidy();
}

struct Iterator {
    void* owner;
    Value* position;

    void advance(unsigned int);
};

struct S {
    void* owner;
    char padding[8];
    Value* first;
    Value* last;
    Value* limit;

    void insert(void*, Value*, unsigned int, const Value*);
    Iterator erase(Iterator, Iterator);
    void resize(unsigned int, Value);
};

void S::resize(unsigned int count, Value value)
{
    Value* end = last;
    Value* begin = first;
    unsigned int size = static_cast<unsigned int>(end - begin);

    if (count > size) {
        if (begin > end)
            _invalid_parameter_noinfo();

        void* insertionOwner = owner;
        insert(insertionOwner, end,
               count - static_cast<unsigned int>(last - first), &value);
    }
    else if (count < size) {
        if (begin > end)
            _invalid_parameter_noinfo();

        begin = first;

        Iterator finish;
        finish.owner = owner;
        finish.position = end;

        if (begin > last)
            _invalid_parameter_noinfo();

        Iterator start;
        start.owner = owner;
        start.position = begin;
        start.advance(count);

        erase(start, finish);
    }
}
