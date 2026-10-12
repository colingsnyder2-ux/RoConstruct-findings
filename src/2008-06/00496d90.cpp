// from server: 95% by king_originala
extern void (__cdecl *invalid_parameter_handler)();

struct Payload
{
    char data[72];
    Payload(const Payload&) throw();
    ~Payload() throw();
};

struct Iteration
{
    unsigned index;
    unsigned count;
    Iteration* previous;
};

struct S
{
    char reserved[16];
    void** first;
    void** last;
    void** limit;
    Iteration* iteration;

    void dispatch(Payload value, void* element) throw();
    void f(Payload value) throw();
};

void S::f(Payload value) throw()
{
    Iteration state;
    unsigned count = static_cast<unsigned>(last - first);
    state.index = 0;
    state.count = count;
    state.previous = iteration;
    iteration = &state;

    if (state.index < state.count)
    {
        void (__cdecl *handler)() = invalid_parameter_handler;
        do
        {
            unsigned index = state.index;
            if (index >= static_cast<unsigned>(last - first))
                handler();

            dispatch(value, first[index]);
            ++state.index;
        }
        while (state.index < state.count);
    }

    iteration = state.previous;
}
