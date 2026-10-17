// from server: 89% by colin
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
    Control* c = control;
    if (c) {
        if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
            c->dispose();
            if (_InterlockedExchangeAdd(&c->weak, -1) == 1)
                c->destroy();
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
    int count = (int)(((char*)selection->last - (char*)selection->first) >> 3);
    if (count <= 0)
        return false;

    Handle temporary = { source, 0, 0 };
    selection = temporary.get(1)->selection;
    int count2 = (int)(((char*)selection->last - (char*)selection->first) >> 3);
    return count2 > 1;
}
