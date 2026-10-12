// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct State;

struct Global {
    char padding[0x70];
    State* mainState;
};

struct CallInfo {
    void* base;
};

struct State {
    char padding0[8];
    void* top;
    void* base;
    Global* global;
    CallInfo* current;
    char padding1[8];
    void* stack;
    char padding2[4];
    CallInfo* initial;
    char padding3[8];
    unsigned short calls;
    char padding4[0x3e];
    int status;
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Prefix {
    int* count;
    Control* control;
    void* reserved;
};

extern void __cdecl closeObjects(State*, void*);
extern void __cdecl collectObjects(State*, int);
extern void __cdecl protectedCallback(State*, void*);
extern int __cdecl protectedCall(State*, void (__cdecl *)(State*, void*), void*);
extern void __fastcall closeState(State*);

void __cdecl close(State* input)
{
    State* state = input->global->mainState;
    closeObjects(state, state->stack);
    collectObjects(state, 1);
    state->status = 0;

    do {
        state->current = state->initial;
        state->base = state->top = state->current->base;
        state->calls = 0;
    } while (protectedCall(state, protectedCallback, 0));

    Prefix* prefix = reinterpret_cast<Prefix*>(state) - 1;
    --*prefix->count;

    Control* control = prefix->control;
    if (control) {
        volatile long* strong = &control->strong;
        if (!_InterlockedExchangeAdd(strong, -1)) {
            control->dispose();
            volatile long* weak = &control->weak;
            if (!_InterlockedExchangeAdd(weak, -1))
                control->destroy();
        }
    }

    closeState(state);
}
