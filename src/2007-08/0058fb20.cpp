// from server: 50% by colin
struct ICreator {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

struct Creator : ICreator {
    void* field0;
    Creator(int arg0, int arg1);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int arg0, int arg1)
{
    this->field0 = 0;
    void* p = operator_new(0x14);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)((char*)p + 0) = 0x7af7b4;
        *(int*)((char*)p + 0xc) = arg0;
    } else {
        p = 0;
    }
    this->field0 = p;
}
