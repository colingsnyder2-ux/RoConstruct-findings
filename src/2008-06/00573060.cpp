// from server: 20% by tester
struct FuncDesc;

extern "C" void* __stdcall func_006a17c6(void*, int, void*, void*, int);
extern "C" void __stdcall func_006a158c(void*, void*);
extern "C" void __stdcall func_00802864(void*);
extern "C" void __stdcall func_00572fa0();

struct FuncDesc
{
    void method(int, int);
};

void FuncDesc::method(int a, int b)
{
    void* p1 = *(void**)((char*)this + 0x40);
    void* p2 = *(void**)((char*)this + 0x44);
    void* v;
    if (p2)
    {
        v = (*(void*(**)(void*))((*(void***)p2)[2]))(p2);
    }
    else
    {
        v = 0;
    }
    void* arg = v;
    void* self = (void*)((char*)this + 0x0);
    (*(void(**)(void*, int, void**))((*(void***)self)[1]))(self, 1, &arg);
    void* r = func_006a17c6(arg, 0, (void*)0x9291fc, (void*)0x92e15c, 0);
    if (!r)
    {
        func_00802864((void*)0x80ba34);
        func_006a158c((void*)0x8d362c, &arg);
    }
    func_00572fa0();
}
