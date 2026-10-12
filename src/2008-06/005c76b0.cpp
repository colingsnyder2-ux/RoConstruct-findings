// from server: 98% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Created {
    char storage[0x38];
    Created(int);
};

struct Context {
    char pad[0x204];
    int value;
};

struct Tool {
    char pad[0x0c];
    Context* context;
    Created* create();
};

Created* Tool::create()
{
    return new Created(context->value);
}
