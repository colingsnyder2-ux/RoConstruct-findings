// from server: 88% by colin
struct RBX_Instance;

struct RBX_ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct RBX_Creator : RBX_ICreator {
    void* findCreator(RBX_Instance* instance);
};

extern "C" void* __cdecl sub_630D36(void* a, void* b, void* c, void* d, void* e);

void* RBX_Creator::findCreator(RBX_Instance* instance)
{
    while (instance)
    {
        void* result = sub_630D36(instance, 0, (void*)0x881f4c, (void*)0x884e04, 0);
        if (result)
        {
            return result;
        }
        instance = *(RBX_Instance**)((char*)instance + 0xbc);
    }
    return 0;
}
