// from server: 49% by atomic.potato
extern "C" void __stdcall ImportedCall(void*, void*);

struct S
{
    int f(void*);
};

int S::f(void* value)
{
    ImportedCall((char*)this + 0xac, 0);
    return (int)value;
}
