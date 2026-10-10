// from server: 40% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int);

struct Inner {
    void init(void*);
};

struct S {
    void* field0;
    void* construct(void*);
};

void* S::construct(void* arg)
{
    void* mem = func_0062fef6(0x20);
    void* result;
    if (mem != 0) {
        ((Inner*)mem)->init(arg);
        result = mem;
    } else {
        result = 0;
    }
    this->field0 = result;
    return this;
}
