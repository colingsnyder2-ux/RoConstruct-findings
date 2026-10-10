// from server: 24% by colin
struct DataModel;

struct TToolVerb {
    char pad[0x0c];
    DataModel* dataModel;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    void* field_20;
    void* field_24;
    void* field_28;
    void* field_2c;
    void* field_30;
    void* field_34;
    void* field_38;

    TToolVerb(DataModel* dm, bool toggle, bool blacklisted);
};

struct Helper {
    void init(void* arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

TToolVerb::TToolVerb(DataModel* dm, bool toggle, bool blacklisted)
{
    this->dataModel = dm;
    void* mem = operator_new(0x3c);
    if (mem) {
        void* p = *(void**)((char*)this->dataModel + 0x188);
        ((Helper*)mem)->init(p);
    }
}
