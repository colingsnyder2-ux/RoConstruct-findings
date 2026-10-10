// from server: 68% by colin
struct SurfaceDescriptor
{
    void* field0;
    void* field4;
    void* construct(void*);
};

extern "C" void __cdecl sub_557330(void*, void*);
extern "C" void* __cdecl sub_5ED630();
extern "C" void* __cdecl sub_6A0920(int);

void* SurfaceDescriptor::construct(void* arg)
{
    sub_557330((void*)0x97b120, (void*)0x5ed690);
    this->field0 = sub_5ED630();
    void* p = sub_6A0920(8);
    if (p)
    {
        *(void**)p = (void*)0x83fcf4;
        *(void**)((char*)p + 4) = *(void**)arg;
    }
    else
    {
        p = 0;
    }
    void* old = this->field4;
    if (&arg != &this->field4)
    {
        old = this->field4;
        this->field4 = p;
    }
    if (old)
    {
        void** vt = *(void***)old;
        ((void (__stdcall*)(void*, int))vt[0])(old, 1);
    }

    return this;
}
