// from server: 36% by king_originala
struct Buffer;

struct Node {
    unsigned char reserved[8];
    Buffer* buffer;
};

struct Container {
    unsigned char reserved[20];
    Node* end;
};

struct Proxy {
    Container* owner;
};

struct State {
    Proxy* proxy;
    unsigned char reserved[16];
    Node** first;
    unsigned int size;
};

extern void (__cdecl* invalid_parameter_noinfo)();
extern Buffer* (__thiscall* set_rdbuf)(void*, Buffer*);

struct S {
    unsigned char reserved[8];
    int* virtual_base_table;
    unsigned int reserved2;
    State* state;

    Buffer* f();
};

Buffer* S::f()
{
    Buffer* buffer = 0;
    if (state->size != 0) {
        Node** first = state->first;
        Proxy* proxy = state->proxy;
        void (__cdecl* invalid)() = invalid_parameter_noinfo;
        Node* node = *first;
        Container* owner;

        if (proxy != 0) {
            owner = proxy->owner;
        } else {
            invalid();
            owner = 0;
        }

        if (node == owner->end)
            invalid();

        buffer = node->buffer;
    }

    return set_rdbuf((char*)this + 8 + virtual_base_table[1], buffer);
}
