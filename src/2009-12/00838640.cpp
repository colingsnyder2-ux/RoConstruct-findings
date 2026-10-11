// from server: 82% by atomic.potato
extern "C" void __cdecl sub_007f3ddc(int);

struct CXTPControls
{
    void f();
};

void CXTPControls::f()
{
    if (*(int *)((char *)this + 0xd0) != 0)
    {
        sub_007f3ddc(*(int *)((char *)this + 0xd0));
        *(int *)((char *)this + 0xd0) =
            ((int (__thiscall *)(CXTPControls *))(*(int *)this + 0x144))(this);
        *(int *)(*(int *)((char *)this + 0xd0) + 0x80) = 0;
    }
}
