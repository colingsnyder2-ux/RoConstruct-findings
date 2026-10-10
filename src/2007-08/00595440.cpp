// from server: 44% by colin
struct DataModel;

struct TToolVerb {
    char pad[0xc];
    DataModel* dataModel;
    void* createToolVerb();
};

void* __cdecl operator_new(unsigned int size);

void* TToolVerb::createToolVerb()
{
    void* mem = operator_new(0x28);
    if (mem) {
        void* p = *(void**)((char*)dataModel + 0x188);
        return ((void* (__thiscall*)(void*, void*))0x5fd9e0)(mem, p);
    }
    return 0;
}
