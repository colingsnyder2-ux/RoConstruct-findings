// from server: 79% by king_originala
struct State {
    char padding[0x104];
    bool enabled;
};

struct Context {
    char padding[0x20];
    State* state;
};

struct Root {
    char padding[4];
    Context* context;
};

extern Root* __cdecl getRoot();

bool toggleIDEModeEnabled()
{
    return !getRoot()->context->state->enabled;
}
