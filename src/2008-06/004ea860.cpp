// from server: 97% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Pair
{
    int a;
    int b;
};

struct Object
{
    char storage[40];
    Object();
};

struct Owner
{
    int first;
    int second;

    Owner();
    ~Owner();
    void set(Object*);
};

inline Owner::Owner()
{
    first = 0;
    second = 0;
}

struct State
{
    int storage[3];

    State(int a, int b, int c);
    ~State();
};

struct S : Owner
{
    State state;

    S(const Pair& value);
    void finish();
};

S::S(const Pair& value)
    : Owner(), state(value.a, value.b, 0)
{
    set(new Object);
    finish();
}
