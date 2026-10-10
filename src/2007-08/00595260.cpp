// from server: 47% by colin
struct VerbContainer;

struct MouseCommand {
    static const char* name();
};

struct DataModel;

struct RunStateVerb {
    RunStateVerb(const char* name, bool blacklisted);
    virtual ~RunStateVerb();
};

struct TToolVerb : public RunStateVerb {
    bool toggle;
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

struct Alloc {
    void* alloc(unsigned int size);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct Helper {
    void init(int arg);
};

TToolVerb::TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted)
    : RunStateVerb(0, blacklisted)
{
    void* mem = operator_new(0x20);
    if (mem) {
        ((Helper*)mem)->init(*(int*)(*(int*)((char*)this + 0xc) + 0x188));
    }
}
