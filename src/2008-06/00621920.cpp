// from server: 98% by king_originala
struct Jump {
    Jump* previous;
    int dummy;
    volatile int status;
    int padding[3];
};

struct State {
    char padding[0x70];
    Jump* errorJmp;
};

typedef void (__cdecl *ProtectedFunction)(State*, void*);

int __cdecl runProtected(State* state, ProtectedFunction function, void* data)
{
    Jump jump;
    jump.status = 0;
    jump.previous = state->errorJmp;
    state->errorJmp = &jump;

    try {
        function(state, data);
    }
    catch (...) {
        if (jump.status == 0)
            jump.status = -1;
    }

    state->errorJmp = jump.previous;
    return jump.status;
}
