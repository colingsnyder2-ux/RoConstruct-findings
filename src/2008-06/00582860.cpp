// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Entry {
    void* object;
    Control* control;
};

struct Selection {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Root {
    char padding[0x154];
    Selection* selection;
};

struct Handle {
    void* object;
    void* cached;
    Control* control;

    Root* get(int);
    ~Handle();
};

inline Handle::~Handle()
{
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

struct GroupSelectionVerb {
    char padding[0x14];
    Handle context;
    void* source;

    bool enabled();
};

bool GroupSelectionVerb::enabled()
{
    Selection* selection = context.get(1)->selection;
    if ((unsigned)(selection->last - selection->first) == 0)
        return false;

    Handle temporary = { source, 0, 0 };
    selection = temporary.get(1)->selection;
    return (unsigned)(selection->last - selection->first) > 1;
}
