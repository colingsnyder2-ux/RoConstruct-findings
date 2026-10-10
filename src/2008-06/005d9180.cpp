// from server: 89% by atomic.potato
struct S
{
    S* GetValue();
    int f();
};

int S::f()
{
    S* p = this->GetValue();
    if (p)
        p = *(S**)((char*)p + 0x2c8);
    if (p)
        return *(int*)((char*)p + 0x10);
    return 0;
}
