// from server: 92% by atomic.potato
typedef void (*FunctionType)();

extern FunctionType g_function;

struct Creator {
    void f();
};

void Creator::f()
{
    *(FunctionType*)((char*)this + 0) = (FunctionType)0x00a1a75c;
    *(FunctionType*)((char*)this + 4) = (FunctionType)0x00a1a750;
    *(FunctionType*)((char*)this + 24) = (FunctionType)0x00a1a744;
    *(FunctionType*)((char*)this + 28) = (FunctionType)0x00a1a738;
    g_function();
}
