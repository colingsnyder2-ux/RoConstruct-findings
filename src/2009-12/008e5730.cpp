// from server: 58% by atomic.potato
struct CXTCaptionButton
{
    int f();
};

int CXTCaptionButton::f()
{
    typedef int (__thiscall *VFunc)(CXTCaptionButton *);
    typedef int (__thiscall *NextFunc)(int *);

    int result;
    VFunc v = *(VFunc *)((char *)*(int *)this + 0x16c);
    result = v(this);
    if (result)
    {
        int value = ((int (__thiscall *)(CXTCaptionButton *))0x8e1870)(this);
        NextFunc n = *(NextFunc *)(*(int *)value + 0x34);
        return n((int *)value);
    }
    return 0;
}
