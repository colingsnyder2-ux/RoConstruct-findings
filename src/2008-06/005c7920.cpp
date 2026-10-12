// from server: 97% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base {
    char data[0x1c];
    int f(int);
};

struct Tool : Base {
    int value1;
    int value2;
    Tool(int);
};

__forceinline Tool::Tool(int arg)
{
    f(arg);
    *(int*)((char*)this + 0) = 0x8399ec;
    *(int*)((char*)this + 4) = 0x8399d4;
    value1 = 0;
    value2 = 0;
}

struct Context {
    char padding[0x204];
    int value;
};

struct Verb {
    char padding[0xc];
    Context* context;
    Tool* f();
};

Tool* Verb::f()
{
    return new Tool(context->value);
}
