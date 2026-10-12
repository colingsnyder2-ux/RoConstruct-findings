// from server: 98% by king_originala
void __cdecl alignedFree(void*);

struct Transform {
    float data[12];
};

struct Context {
    Transform get(int);
};

extern const float tolerance;
bool __cdecl equivalent(const Transform&, const Transform&, float);

struct Array {
    int* data;
    int size;
    int capacity;

    Array();
    ~Array();
    void append(const int&);
    void resize(int, bool);
};

inline Array::Array()
{
    size = 0;
    capacity = 0;
    data = 0;
}

inline Array::~Array()
{
    alignedFree(data);
}

struct State {
    Context* context;
    int handle;
    float values[6];

    State& operator=(const State&);
};

inline State& State::operator=(const State& other)
{
    context = other.context;
    handle = other.handle;
    values[0] = other.values[0];
    values[1] = other.values[1];
    values[2] = other.values[2];
    values[3] = other.values[3];
    values[4] = other.values[4];
    values[5] = other.values[5];
    return *this;
}

struct S {
    char reserved0[0x14];
    Context* context;
    char reserved1[0x0c];
    State state;
    char reserved2[0x1c];
    int handle;

    State next(Context*, const Array&);
    bool update();
    bool f(bool*);
};

bool S::f(bool* changed)
{
    Array excluded;
    Context* current = state.context;

    while (current) {
        Transform first = current->get(state.handle);
        Transform second = context->get(handle);

        if (equivalent(first, second, tolerance))
            break;

        if (excluded.size < excluded.capacity) {
            int* destination = excluded.data + excluded.size;
            if (destination)
                *destination = state.handle;
            ++excluded.size;
        } else if (&state.handle >= excluded.data &&
                   &state.handle < excluded.data + excluded.size) {
            int temporary = state.handle;
            excluded.append(temporary);
        } else {
            excluded.resize(excluded.size + 1, false);
            excluded.data[excluded.size - 1] = state.handle;
        }

        state = next(state.context, excluded);

        if (!state.context)
            break;

        *changed = update();
        current = state.context;
    }

    return state.context == 0;
}
