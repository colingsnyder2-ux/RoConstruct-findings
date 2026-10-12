// from server: 75% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Data {
    unsigned long a, b, c, d;
};

struct Resource {
    unsigned char storage[40];
    Resource();
};

struct Count {
    unsigned long value;
    Count();
    ~Count();
};

inline Count::Count() : value(0) {}

struct Owner {
    unsigned long first;
    Count second;
    Owner();
    ~Owner();
    void attach(Resource*);
};

inline Owner::Owner() : first(0), second() {}

struct State {
    const void* type;
    unsigned long unused;
    Data data;
    unsigned long extra;
    State(Data, unsigned long);
    ~State();
};

struct S : Owner {
    State state;
    S(const Data&);
    void finish();
};

S::S(const Data& data)
    : Owner(), state(data, 0)
{
    attach(new Resource);
    finish();
}
