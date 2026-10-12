// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Range {
    void* data;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
};

struct Iterator {
    void* data;
    unsigned index;
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Range* pointer;
    Control* control;
    ~Handle();
};

void __cdecl callback();
void __cdecl process(Iterator, Iterator, void (__cdecl*)());

Handle::~Handle()
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

void __stdcall sub_005a24d0(Handle value)
{
    Range* range = value.pointer;
    Iterator end;
    end.index = range->last;
    if (range->first > end.index)
        _invalid_parameter_noinfo();
    end.data = range->data;

    Iterator begin;
    begin.index = value.pointer->first;
    Range* beginRange = value.pointer;
    if (begin.index > beginRange->last)
        _invalid_parameter_noinfo();
    begin.data = beginRange->data;

    process(begin, end, callback);
}
