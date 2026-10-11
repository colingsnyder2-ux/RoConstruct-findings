// from server: 76% by tester
struct Selection;

struct DataModel
{
    char pad[0x154];
    void* selection;
};

struct EditSelectionVerb
{
    char pad[0x14];
    DataModel* getDataModel(int);
};

struct UngroupSelectionVerb
{
    char pad[0x14];
    DataModel* getDataModel(int);
    char pad2[0x8];
    void* something;
    bool isEnabled() const;
};

extern "C" void* __stdcall sub_5806C0(void*);
extern "C" int __stdcall sub_57EDB0(void*, const char*);

bool UngroupSelectionVerb::isEnabled() const
{
    DataModel* dm = ((UngroupSelectionVerb*)this)->getDataModel(1);
    void* sel = dm->selection;
    int count = (*(int*)((char*)sel + 0x10) - *(int*)((char*)sel + 0xc)) >> 3;
    if (count <= 0)
        return false;

    void* p = *(void**)((char*)this + 0x20);
    if (p)
    {
        void* r = sub_5806C0(p);
        int v = sub_57EDB0(r, (const char*)0x57e110);
        return v != 0;
    }
    else
    {
        int v = sub_57EDB0(0, (const char*)0x57e110);
        return v != 0;
    }
}
