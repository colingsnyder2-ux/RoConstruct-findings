// from server: 39% by colin
struct VerbContainer;
struct DataModel;

struct Verb {
    void* vtable;
    Verb(VerbContainer* container, const char* name, bool blacklisted);
};

struct TToolVerb : Verb {
    TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct MouseCommandClass {
    static const char* name();
};

struct HingeTool {
    static const char* name();
};

VerbContainer* getContainer(DataModel* dm);

TToolVerb::TToolVerb(DataModel* dataModel, bool toggle, bool blacklisted)
    : Verb(getContainer(dataModel), HingeTool::name(), blacklisted)
{
}
