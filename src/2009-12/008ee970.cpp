// from server: 46% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int value)
{
    void* p = *(void**)((char*)this + 0x100);
    int result = ((int (__thiscall *)(void*))0x804590)(p);
    void* q = *(void**)((char*)this + 0x174);
    void (**method)(void*, int) = *(void (***)(void*, int))((char*)*(void**)result + 0x16c);
    (*method)((void*)result, value);
    return 0;
}
