// from server: 78% by colin
struct DataModel;

struct Selection
{
    char pad[0x0c];
    unsigned int begin;
    int end;
};

struct DataModelHolder
{
    char pad[0x20];
    DataModel* dataModel;
};

struct DataModel
{
    char pad[0x154];
    Selection* selection;
};

struct DuplicateSelectionVerb
{
    bool isEnabled();
};

extern "C" DataModelHolder* __fastcall sub_4153B0(DataModelHolder* p);

bool DuplicateSelectionVerb::isEnabled()
{
    DataModelHolder* holder = *(DataModelHolder**)((char*)this + 0x20);
    DataModel* dm;
    if (holder)
        dm = sub_4153B0(holder)->dataModel;
    else
        dm = 0;
    Selection* sel = dm->selection;
    int count = (sel->end - sel->begin) >> 3;
    return count > 0;
}
