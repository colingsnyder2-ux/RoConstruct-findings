// from server: 39% by colin
struct VVector3Table {
    int f(int);
};

struct Inner {
    int a, b, c;
};

extern "C" void __stdcall sub_4ce3e0(void*, int, int, int);
extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __stdcall sub_4181b0(void*, void*);
extern "C" void __stdcall sub_728830(void*);

int VVector3Table::f(int arg)
{
    int* p = (int*)arg;
    int v0 = p[0];
    int v1 = p[1];
    int v2 = p[2];

    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;

    Inner tmp;
    tmp.a = v0;
    tmp.b = v1;
    tmp.c = v2;

    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 12) = 0;
    *(int*)((char*)this + 16) = 0;

    sub_4ce3e0((char*)this + 8, tmp.a, tmp.b, tmp.c);

    void* mem = sub_62fef6(0x20);
    if (mem != 0) {
        *(int*)((char*)mem + 4) = 0;
        *(int*)((char*)mem + 8) = 0;
        *(int*)((char*)mem + 12) = 0;
        *(int*)((char*)mem + 20) = 0;
        *(int*)((char*)mem + 24) = 0;
        *(char*)((char*)mem + 28) = 0;
    } else {
        mem = 0;
    }

    sub_4181b0(this, mem);
    sub_728830(this);
    return (int)this;
}
