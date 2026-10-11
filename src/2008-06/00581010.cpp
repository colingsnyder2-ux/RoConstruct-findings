// from server: 25% by tester
struct DataModel;

struct IDataState;

struct Verb {
    Verb();
    virtual ~Verb();
    virtual void doIt(IDataState*);
};

struct EditSelectionVerb : Verb {
    EditSelectionVerb();
    virtual void doIt(IDataState*);
};

struct QObject {
    QObject();
    virtual ~QObject();
};

struct DuplicateSelectionVerb : QObject, EditSelectionVerb {
    DuplicateSelectionVerb(DataModel* dataModel);
    virtual void doIt(IDataState* dataState);
};

extern "C" {
    void __stdcall basic_string_copy_ctor(void* dest, const void* src);
    void __stdcall basic_string_dtor(void* self);
}

void DuplicateSelectionVerb::doIt(IDataState* dataState)
{
    char buf[28];
    basic_string_copy_ctor(buf, dataState);
    EditSelectionVerb::doIt(dataState);
    *(void**)this = (void*)0x830818;
    *((char*)this + 0x24) = 0;
    basic_string_dtor(buf);
}
