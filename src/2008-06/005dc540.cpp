// from server: 69% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Counted {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Counted* count;
    Reference& operator=(const Reference&);
    ~Reference();
};

inline Reference::~Reference()
{
    if (count) {
        if (_InterlockedExchangeAdd(&count->strong, -1) == 0) {
            count->dispose();
            if (_InterlockedExchangeAdd(&count->weak, -1) == 0)
                count->destroy();
        }
    }
}

struct Value {
    void* object;
    Reference reference;
};

extern Value __cdecl acquire(void*);
extern char descriptor;

struct S {
    char padding[0x204];
    void* object;
    Reference reference;

    void changed(const void*);
    void set(void*);
};

void S::set(void* value)
{
    if (object != value) {
        {
            Value temporary = acquire(value);
            object = temporary.object;
            reference = temporary.reference;
        }
        changed(&descriptor);
    }
}
