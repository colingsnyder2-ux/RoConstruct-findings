// from server: 0% by atomic.potato
extern "C" void* __cdecl func_0098211a(unsigned int);

struct CDataModelPropGrid
{
    void* field_0;
    void* construct(unsigned int);
};

void* CDataModelPropGrid::construct(unsigned int arg)
{
    void* p = func_0098211a(0x10);
    if (p)
    {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xb4fcac;
        *(unsigned int*)((char*)p + 0xc) = arg;
    }
    else
    {
        p = 0;
    }
    this->field_0 = p;
    return this;
}
