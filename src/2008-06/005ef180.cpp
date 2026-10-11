// from server: 72% by colin
struct SurfaceDescriptor
{
    int* field0;
    int* field4;
    SurfaceDescriptor(int*);
};

extern "C" void __cdecl sub_557330(int, int);
extern "C" int* __cdecl sub_5ED630();
extern "C" int* __cdecl sub_6A0920(int);

SurfaceDescriptor::SurfaceDescriptor(int* p)
{
    sub_557330(0x97b120, 0x5ed690);
    field0 = sub_5ED630();
    int* mem = sub_6A0920(8);
    if (mem)
    {
        mem[0] = 0x83fcf4;
        mem[1] = *p;
    }
    else
    {
        mem = 0;
    }
    int* old = field4;
    field4 = mem;
    if (old)
    {
        int* vtbl = (int*)*old;
        ((void (__stdcall*)(int))vtbl[0])(1);
    }
}
