// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Clone {
    char storage[0x24];
    Clone(void*);
};

struct Context {
    char pad[0x204];
    void* value;
};

struct Tool {
    char pad[0x0c];
    Context* context;
    Clone* f();
};

Clone* Tool::f() {
    return new Clone(context->value);
}
