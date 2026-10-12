// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Range {
    void* base;
    char padding[8];
    unsigned first;
    unsigned last;
};

struct SharedRange {
    Range* object;
    Control* control;
    ~SharedRange();
};

inline SharedRange::~SharedRange()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void __cdecl callback();
void __cdecl process(void*, unsigned, void*, unsigned, void (__cdecl*)());

void __stdcall sub_005a2420(SharedRange range)
{
    Range* endObject = range.object;
    unsigned last = endObject->last;
    if (endObject->first > last)
        _invalid_parameter_noinfo();

    void* lastBase = endObject->base;
    Range* beginObject = range.object;
    unsigned first = beginObject->first;
    if (first > beginObject->last)
        _invalid_parameter_noinfo();

    process(beginObject->base, first, lastBase, last, callback);
}
