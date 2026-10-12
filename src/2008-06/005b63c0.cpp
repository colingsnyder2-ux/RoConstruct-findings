// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* pointer;
    Reference& operator=(const Reference&);
};

struct Shared {
    void* object;
    Reference reference;

    Shared& operator=(const Shared& other) {
        object = other.object;
        reference = other.reference;
        return *this;
    }

    ~Shared() {
        Control* p = reference.pointer;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }
};

extern const char typeTag;
extern void* __stdcall resolve(void*, int, const void*);
extern Shared __cdecl makeShared(void*);

struct PartTool {
    char padding[28];
    Shared value;
    void set(void*);
};

void PartTool::set(void* argument) {
    value = makeShared(resolve(argument, 0, &typeTag));
}
