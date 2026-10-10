// from server: 66% by atomic.potato
struct Holder
{
    void __cdecl release(int);
};

void Holder::release(int value)
{
    if (this != 0)
        ((void (__thiscall *)(Holder *, int))(*(void ***)this)[1])(this, value);
}
