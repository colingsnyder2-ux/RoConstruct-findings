// from server: 69% by colin
// roc 2007-08 00554b20  unit: RBX::ServiceProvider  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554b20

extern "C" void __stdcall sub_725750();
extern "C" void __stdcall sub_725770();

extern int dword_8C1D68;

struct ServiceProvider {
    int incrementCounter();
};

int ServiceProvider::incrementCounter()
{
    sub_725750();
    int old = dword_8C1D68;
    dword_8C1D68 = old + 1;
    sub_725770();
    return old;
}
