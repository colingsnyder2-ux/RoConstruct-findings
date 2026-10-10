// from server: 66% by atomic.potato
struct CXTColorSelectorCtrl
{
    void f(int);
};

extern "C" void __cdecl sub_0086ac70(CXTColorSelectorCtrl *, int);

void CXTColorSelectorCtrl::f(int value)
{
    sub_0086ac70((CXTColorSelectorCtrl *)((char *)this + 0x128),
                 *((int *)((char *)this + 0x130)));
}
