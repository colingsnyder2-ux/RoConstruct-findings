// from server: 89% by king_originala
struct WindowData
{
    char padding[0x20];
    void* handle;
};

typedef long (__stdcall *MessageFunction)(void*, unsigned int, unsigned int, long);
extern "C" MessageFunction SendMessageA;

struct S
{
    char padding[0x178];
    WindowData* window;

    int baseEqual(S* other);
    int equal(S* other);
};

int S::equal(S* other)
{
    if (!baseEqual(other))
        return 0;

    void* handle = window->handle;
    MessageFunction send = SendMessageA;
    long count = send(handle, 0x18B, 0, 0);
    return count == send(other->window->handle, 0x18B, 0, 0);
}
