// from server: 81% by atomic.potato
extern "C" void sub_0086ac70(void*, void*, void*);

struct S
{
    void* field20;
    void* field24;
    void* field28;
    void* field2c;
    void* field30;
    void* field34;
    void* field38;
    void* field3c;
    void* field40;
    void* field44;
    void* field48;
    void* field4c;
    S* f(void*);
};

S* S::f(void* item)
{
    sub_0086ac70((char*)this + 0x20, field28, item);
    *(S**)((char*)item + 0x4c) = this;
    return (S*)item;
}
