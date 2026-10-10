// from server: 75% by colin
struct SeparateStage
{
    char pad0[8];
    void* field8;
    char padC[0x18];
    int field24;
    void* getChild(int index);
};

void* SeparateStage::getChild(int index)
{
    if (index == 2)
        return (void*)field24;
    void* p = field8;
    void** vtbl = *(void***)p;
    void* fn = vtbl[6];
    return ((void* (__thiscall*)(void*, int))fn)(p, index);
}
