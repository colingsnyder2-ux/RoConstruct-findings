// from server: 98% by king_originala
struct Window {
    char padding0[0x20];
    void* handle;
    char padding1[0xE0];
    unsigned char closing;
};

struct Context {
    char padding[0x20];
    Window* window;
};

struct Root {
    char padding[4];
    Context* context;
};

struct Receiver;

struct ReceiverTable {
    void* padding[26];
    int (__thiscall* current)(Receiver*);
    Window* (__thiscall* resolve)(Receiver*, int*);
};

struct Receiver {
    ReceiverTable* table;
};

extern "C" {
    extern int (__stdcall* PostMessageA)(void*, unsigned int, unsigned int, long);
}

struct ExitCommand {
    char padding[0x0C];
    Receiver* receiver;

    Root* acquire();
    void execute(void*);
};

void ExitCommand::execute(void*)
{
    Window* window = acquire()->context->window;
    if (window->closing) {
        PostMessageA(window->handle, 0x10, 0, 0);
        return;
    }

    int current = receiver->table->current(receiver);
    if (current) {
        window = receiver->table->resolve(receiver, &current);
        PostMessageA(window->handle, 0x111, 0xE102, 0);
    }
}
