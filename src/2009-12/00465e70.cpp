// from server: 52% by atomic.potato
struct S {
    void* field0;
    S* f(void* arg);
};

extern "C" void* __cdecl sub_7f3860(unsigned int size);

S* S::f(void* arg)
{
    void* p;
    this->field0 = 0;
    p = sub_7f3860(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0x9ae714;
        *(void**)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
