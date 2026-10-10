// from server: 65% by atomic.potato
extern "C" void __cdecl func_009cc5ca();

struct S
{
    int f();
    char data[0x38];
};

void __cdecl func_0086a930(void*);

int S::f()
{
    func_009cc5ca();
    func_0086a930(data + 0x20);
    *(int*)data = 0x00acba8c;
    *(int*)(data + 0x34) = 0;
    return 0;
}
