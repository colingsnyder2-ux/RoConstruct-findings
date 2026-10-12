// from server: 85% by king_originala
extern "C" int (__stdcall *PostMessageA)(void *, unsigned int, unsigned int, long);

struct Event {
    int type;
    int unused;
    int key;
};

struct Window {
    char padding[0x20];
    void *handle;
};

class Result {
    int handled;
    int value;
public:
    __forceinline Result(int handledValue, int otherValue);
};

__forceinline Result::Result(int handledValue, int otherValue)
    : handled(handledValue), value(otherValue)
{
}

struct ChatEnter {
    char padding[0x14];
    Window *window;
    Result process(const Event &event);
};

Result ChatEnter::process(const Event &event)
{
    if (event.type == 10 && event.key == 47) {
        PostMessageA(window->handle, 0x468, 0, 0);
        return Result(1, 0);
    }
    return Result(0, 0);
}
