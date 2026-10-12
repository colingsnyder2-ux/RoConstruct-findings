// from server: 95% by king_originala
struct Window {
    char padding0[32];
    void* handle;
    char padding1[212];
    unsigned char enabled;
};

struct State {
    char padding[32];
    Window* window;
};

struct Context {
    char padding[4];
    State* state;
};

extern Context* __cdecl getContext();
extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);

void func_0045b0d0()
{
    Window* window = getContext()->state->window;
    if (window->enabled)
        PostMessageA(window->handle, 0x111, 0x80f4, 0);
}
