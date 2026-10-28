// from server: 0% by atomic.potato
extern "C" void* __cdecl func_0098211a(unsigned int);

struct MeshKeyBase {
    void* field0;
    MeshKeyBase(unsigned int);
};

MeshKeyBase::MeshKeyBase(unsigned int a)
{
    field0 = 0;
    void* p = func_0098211a(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(void**)p = (void*)0xb81cd0;
        *(unsigned int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
