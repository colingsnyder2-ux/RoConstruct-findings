// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_98211a(unsigned int size);

struct VCylinderMesh_FactoryProduct {
    void* field0;
    void* method(int arg);
};

void* VCylinderMesh_FactoryProduct::method(int arg)
{
    void* p = sub_98211a(0x14);
    if (p != 0)
    {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xb81e6c;
        *(int*)((char*)p + 0xc) = arg;
    }
    else
    {
        p = 0;
    }
    field0 = p;
    return this;
}
