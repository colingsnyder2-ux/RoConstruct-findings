// from server: 0% by colin
struct ICreator {
    void* vtable;
};

struct Creator : ICreator {
    Creator();
};

extern "C" void __stdcall sub_77DD74(void*, void*);

Creator::Creator()
{
    void* tmp = 0;
    sub_77DD74((void*)0x8bbe90, &tmp);
}
