// from server: 60% by atomic.potato
struct S
{
    int Release();
};

int S::Release()
{
    int value = --*(int *)((char *)this + 0x18);
    if (value == 0 && this != 0)
    {
        void (**table)(S *, int) = *(void (***)(S *, int))this;
        table[7](this, 1);
    }
    return value;
}
