// from server: 82% by king_originala
void* __cdecl operator new(unsigned int);
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
extern unsigned long __cdecl func_00432ce0();

struct Storage;

struct Link
{
    Storage* owner;
    Link(Storage* p) : owner(p) {}
};

struct LinkOwner
{
    Link* value;
    LinkOwner(Storage* p) : value(new Link(p)) {}
    ~LinkOwner();
};

struct Storage
{
    LinkOwner link;
    unsigned int reserved[2];
    void* first;
    void* last;
    void* limit;

    Storage();
    ~Storage();
};

struct CScriptEditor
{
    virtual ~CScriptEditor();
    Storage storage;
    unsigned long threadId;
    unsigned long value;

    CScriptEditor();
};

inline Storage::Storage()
    : link(this), first(0), last(0), limit(0)
{
}

CScriptEditor::CScriptEditor()
{
    threadId = GetCurrentThreadId();
    value = func_00432ce0();
}
