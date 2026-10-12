// from server: 94% by king_originala
struct State {
    void* owner;
    unsigned int reserved[2];
    unsigned int begin;
    unsigned int end;
};

struct Result {
    void* owner;
    unsigned int position;
};

extern State* __cdecl getState();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

Result* __cdecl getResult(Result* output)
{
    State* state = getState();
    unsigned int end = state->end;
    if (state->begin > end)
        _invalid_parameter_noinfo();

    void* owner = state->owner;
    output->position = end;
    output->owner = owner;
    return output;
}
