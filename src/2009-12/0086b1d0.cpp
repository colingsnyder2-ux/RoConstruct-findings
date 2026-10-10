// from server: 72% by atomic.potato
struct S
{
    int (**vtable)();
    int value;
    int current;
    int *selected;
    void update();
};

void S::update()
{
    int *p = selected;
    if (p != 0 && *p != current)
        ((void (__thiscall *)(S *, int))vtable[58])(this, *p);
}
