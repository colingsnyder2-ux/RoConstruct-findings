// from server: 45% by tester
struct Part {
    int type;
    int gridSize;
    char pad[8];
    void construct(int a, int b, int c);
    void setSomething(void* p);
    void finalize();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __stdcall sub_41AD40(void* p);
extern "C" void __stdcall sub_41B0F0(void* p);
extern "C" void __stdcall sub_4EA320(void* p, int a, int b, int c);
extern "C" void __stdcall sub_595840(void* p);

void Part::construct(int a, int b, int c)
{
    sub_4EA320((char*)this + 8, a, b, c);
}

void Part::setSomething(void* p)
{
    sub_41B0F0(p);
}

void Part::finalize()
{
    sub_595840(this);
}

Part* __stdcall Part_ctor(Part* self, int* src)
{
    self->type = 0;
    self->gridSize = 0;
    sub_4EA320((char*)self + 8, src[0], src[1], 0);
    void* p = operator_new(0x28);
    if (p) {
        sub_41AD40(p);
    } else {
        p = 0;
    }
    sub_41B0F0(p);
    sub_595840(self);
    return self;
}
