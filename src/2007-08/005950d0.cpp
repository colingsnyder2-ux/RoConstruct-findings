// from server: 38% by colin
struct VerbContainer;
struct DataModel;

struct Verb {
    Verb(VerbContainer* container, const char* name, bool blacklisted);
    virtual ~Verb();
    virtual bool isEnabled() const;
    virtual bool isChecked() const;
    virtual bool isSelected() const;
    virtual void doIt(void* dataState);
};

struct RunStateVerb : Verb {
    RunStateVerb(VerbContainer* container, const char* name, bool blacklisted);
};

struct MouseCommand {
    static const char* name();
};

struct TToolVerb : RunStateVerb {
    bool toggle;
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

TToolVerb::TToolVerb(DataModel* dataModel, bool toggle_, bool blacklisted)
    : RunStateVerb(0, 0, blacklisted)
{
    this->toggle = toggle_;
}

void* TToolVerb_ctor_helper(DataModel* dataModel, bool toggle, bool blacklisted)
{
    TToolVerb* p = (TToolVerb*)operator_new(0x28);
    if (p) {
        p->TToolVerb::TToolVerb(dataModel, toggle, blacklisted);
    }
    return p;
}
