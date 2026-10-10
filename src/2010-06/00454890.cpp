// from server: 71% by atomic.potato
struct CRobloxControlMaterialSelector {
    char padding[0x188];
    int value;
    void f(int);
};

extern "C" void __declspec(noreturn) continuation();

void CRobloxControlMaterialSelector::f(int x)
{
    value = x;
    x = 1;
    continuation();
}
