// from server: 48% by colin
struct CXTPTabManagerNavigateButton {
    void construct(int, int, int);
    CXTPTabManagerNavigateButton(int, int, int);
};

extern "C" void* __stdcall sub_6b3010();

CXTPTabManagerNavigateButton::CXTPTabManagerNavigateButton(int a, int b, int c)
{
    construct(a, 1, c);
    *(int*)((char*)this + 0) = 0x7dcdfc;
    void* p = sub_6b3010();
    void** vt = *(void***)p;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vt[1];
    fn(p, (char*)this + 0x28, 0x2649);
}
