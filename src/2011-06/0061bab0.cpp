// from server: 26% by atomic.potato
struct WeakThreadRef
{
    typedef void (__thiscall *Function)(WeakThreadRef *, int);

    Function *vtable;
    void Call(int value);
};

void WeakThreadRef::Call(int value)
{
    vtable[0](this, value);
}
