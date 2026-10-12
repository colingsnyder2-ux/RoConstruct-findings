// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct StringValue {
    unsigned char data[28];
};

extern const char NetworkClient[];
extern const char Players[];
extern int (__thiscall *compareString)(const StringValue*, const char*);
extern int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);

struct NameValue {
    unsigned long reserved;
    StringValue text;
};

struct NameProvider {
    virtual void unused();
    virtual NameValue* getName();
};

struct Instance {
    unsigned char reserved[16];
    NameProvider names;
};

struct ReferenceCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedInstance {
    Instance* object;
    ReferenceCount* count;
    ~SharedInstance();
};

inline SharedInstance::~SharedInstance()
{
    ReferenceCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
                p->destroy();
        }
    }
}

struct MarshaledListener {
    void notify(void*);
};

struct CRobloxView {
    void changed(int, SharedInstance);
};

void CRobloxView::changed(int, SharedInstance instance)
{
    if (compareString(&instance.object->names.getName()->text, NetworkClient) == 0 ||
        compareString(&instance.object->names.getName()->text, Players) == 0) {
        PostMessageA(*reinterpret_cast<void**>(
                         reinterpret_cast<char*>(this) - 128),
                     0x46b, 0, 0);
    }

    if (compareString(&instance.object->names.getName()->text, Players) == 0) {
        void* listener = (reinterpret_cast<char*>(this) - 160)
                             ? reinterpret_cast<char*>(this) + 8
                             : 0;
        if (instance.object)
            reinterpret_cast<MarshaledListener*>(
                reinterpret_cast<char*>(instance.object) + 0x150)->notify(listener);
    }
}
