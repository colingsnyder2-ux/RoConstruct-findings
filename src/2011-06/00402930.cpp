// from server: 50% by colin
struct ICreator {
    virtual void v0();
    virtual void v1();
};

struct Creator : ICreator {
    int field0;
    Creator(int arg0, int arg1);
};

extern "C" void* __cdecl func_0080a05e(unsigned int size);

Creator::Creator(int arg0, int arg1)
{
    field0 = 0;
    void* p = func_0080a05e(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xa5b6b4;
        *(int*)((char*)p + 0xc) = arg0;
    } else {
        p = 0;
    }
    field0 = (int)p;
}
