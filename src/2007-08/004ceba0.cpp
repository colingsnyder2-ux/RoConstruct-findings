// from server: 43% by colin
struct VVector3Table {
    void* field0;
    void* field4;
    char field8[12];
    void construct(void*);
};

extern "C" void __stdcall sub_4CE450(void*, void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_4181B0(void*, void*);
extern "C" void __stdcall sub_728830(void*);

void VVector3Table::construct(void* src)
{
    field0 = 0;
    field4 = 0;

    int* p = (int*)src;
    int a = p[0];
    int b = p[1];
    int c = p[2];

    int tmp[3];
    tmp[0] = a;
    tmp[1] = b;
    tmp[2] = c;

    *(int*)(field8) = 0;
    *(int*)(field8 + 4) = 0;
    *(int*)(field8 + 8) = 0;

    sub_4CE450(field8, tmp);

    void* mem = sub_62FEF6(0x20);
    if (mem) {
        *(int*)((char*)mem + 4) = 0;
        *(int*)((char*)mem + 8) = 0;
        *(int*)((char*)mem + 12) = 0;
        *(int*)((char*)mem + 20) = 0;
        *(int*)((char*)mem + 24) = 0;
        *(char*)((char*)mem + 28) = 0;
    } else {
        mem = 0;
    }

    sub_4181B0(this, mem);
    sub_728830(this);
}
