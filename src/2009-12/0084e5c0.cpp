// from server: 96% by atomic.potato
struct CXTPPropertyGrid {
    void Refresh(int, int, int);
    void OnPropertyChanged(int, int);
};

extern "C" void __stdcall sub_7f3e30();
extern "C" void* __stdcall sub_84da80();

void CXTPPropertyGrid::Refresh(int a, int b, int c)
{
    sub_7f3e30();
    void* p = sub_84da80();
    if (p != 0 && *(int*)((char*)p + 0x20) != 0)
    {
        void (CXTPPropertyGrid::*fn)(int, int) = *(void (CXTPPropertyGrid::**)(int, int))((char*)*(void**)this + 0x158);
        (this->*fn)(b, c);
    }
}
