// from server: 93% by colin
void* __cdecl operator new(unsigned int);

struct Base {
    unsigned char storage[36];
    Base();
    ~Base();
};

struct S : Base {
    struct State {
        State** head;
        unsigned int unused[2];
        unsigned int count;
        unsigned int flags;
        unsigned int value;

        State();
    };

    State state;
    S();
};

__forceinline S::State::State()
{
    head = new State*(this);
    count = 0;
    flags = 0;
    value = 0;
}

S::S()
{
    volatile int pad[2];
    pad[0] = 0;
    pad[1] = 0;
}
