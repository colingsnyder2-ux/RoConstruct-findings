// from server: 82% by king_originala
extern "C" unsigned long (__stdcall *GetCurrentThreadId)();
extern unsigned long __cdecl getValue();

struct ListState
{
    unsigned long first;
    unsigned long last;
    unsigned long size;
    ~ListState();
};

struct State
{
    void* owner;
    unsigned long reserved[2];
    ListState list;

    State();
    ~State();
};

inline State::State()
    : owner(new void*(this))
{
    list.first = 0;
    list.last = 0;
    list.size = 0;
}

struct S
{
    State state;
    unsigned long threadId;
    unsigned long value;

    S();
    virtual ~S();
};

S::S()
{
    threadId = GetCurrentThreadId();
    value = getValue();
}
