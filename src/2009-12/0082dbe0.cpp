// from server: 68% by atomic.potato
struct S_func_0082dbe0
{
    char pad20[0x20];
    void* p20;
    void* p24;
    void* p28;
    void* func(void*);
};

extern "C" void func_0086ac70(void*, void*, void*);

void* S_func_0082dbe0::func(void* arg)
{
    void* value = *(void**)((char*)this + 0x28);
    func_0086ac70((char*)this + 0x20, value, arg);
    *(void**)((char*)arg + 0x50) = this;
    *(void**)((char*)arg + 0x6c) = value;
    return value;
}
