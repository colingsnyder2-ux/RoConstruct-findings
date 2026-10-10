// from server: 42% by colin
struct WeakRefCountedPointer
{
    void* vtable;
    void* ptr;
};

struct RefCountedBase
{
    void* vtable;
    int refCount;
    void* weakList;
};

extern "C" void __cdecl sub_4CD890();
extern "C" void* __cdecl sub_62FEF6(unsigned int);

struct VChunkWeakRef
{
    void* vtable;
    void* ptr;

    void __thiscall construct(void* src);
};

void VChunkWeakRef::construct(void* src)
{
    RefCountedBase* obj;
    void* node;

    this->vtable = (void*)0x79f53c;
    this->ptr = 0;

    obj = *(RefCountedBase**)((char*)src + 4);

    sub_4CD890();

    if (obj)
    {
        this->ptr = obj;

        node = sub_62FEF6(8);
        if (node)
        {
            void* link = *(void**)((char*)obj + 8);
            *(void**)node = this;
            *(void**)((char*)node + 4) = link;
        }
        else
        {
            node = 0;
        }

        *(void**)((char*)obj + 8) = node;
    }
}
