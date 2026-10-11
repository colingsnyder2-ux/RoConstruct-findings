// from server: 61% by atomic.potato
struct CXTPControlSelector
{
    void OnSetFocus(int, int);
};

void CXTPControlSelector::OnSetFocus(int a, int b)
{
    if (*(int*)((char*)this + 0x184) == 0 && *(int*)((char*)this + 0x188) == 0)
        return;

    *(int*)((char*)this + 0x194) = *(int*)((char*)this + 0x184);
    *(int*)((char*)this + 0x198) = *(int*)((char*)this + 0x188);

    void* vtbl = *(void**)this;
    typedef void (__thiscall *Fn)(void*, int, int);
    Fn fn = *(Fn*)((char*)vtbl + 0x98);
    fn(this, a, b);
}
