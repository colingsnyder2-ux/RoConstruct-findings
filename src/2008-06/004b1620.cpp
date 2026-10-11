// from server: 37% by colin
struct S {
    int f();
};

extern "C" void __cdecl sub_4A8580();
extern "C" void* __cdecl sub_6A0920(int);

int S::f()
{
    sub_4A8580();
    int* p = (int*)((char*)this + 0x24);
    void* q = sub_6A0920(4);
    if (q != 0)
        *(void**)q = p;
    else
        q = 0;
    *(void**)p = q;
    *(int*)((char*)p + 0xc) = 0;
    *(int*)((char*)p + 0x10) = 0;
    *(int*)((char*)p + 0x14) = 0;
    return (int)this;
}
