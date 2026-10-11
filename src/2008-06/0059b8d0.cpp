// from server: 50% by atomic.potato
typedef unsigned int DWord;

struct S
{
    DWord pad[6];
    void* value;
    void f(void*, void*);
};

extern "C" DWord sub_0059b650(void*, void*);

void S::f(void* a, void* b)
{
    void* p = *(void**)((char*)value);
    DWord x = sub_0059b650((char*)this + 8, 0);
    ((void (__thiscall *)(void*, void*, DWord))(*(DWord*)p))(value, b, x);
}
