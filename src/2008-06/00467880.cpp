// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

struct String
{
    unsigned char storage[28];
    String(const char*);
    ~String();
    const char* c_str() const;
};

String __cdecl operator+(const String&, const char*);

struct RefCount
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    RefCount* count;

    void* get() const;
    ~Shared();
};

inline void* Shared::get() const
{
    return object;
}

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

Shared __cdecl getService();
void __cdecl report(void*, int, const char*);

struct Lock
{
    void* section;
    bool locked;

    Lock(void*);
    ~Lock();
};

inline Lock::Lock(void* p) : section(p)
{
    EnterCriticalSection(section);
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        LeaveCriticalSection(section);
}

struct Device;
struct DeviceTable
{
    void* reserved[10];
    long (__stdcall* getData)(Device*, unsigned long, void*,
                             unsigned long*, unsigned long);
};

struct Device
{
    DeviceTable* table;
};

struct DxUserInput
{
    unsigned char prefix[0x34];
    unsigned char section[24];
    unsigned char padding[0x130];
    Device* keyboard;

    bool read(void*, unsigned long*, Device*);
};

bool DxUserInput::read(void* data, unsigned long* count, Device* device)
{
    Lock lock(section);
    switch (device->table->getData(device, 20, data, count, 0))
    {
    case 0:
        break;
    case 1:
        {
            String name(device == keyboard ? "Keyboard " : "Mouse ");
            String message = name + "DI_BUFFEROVERFLOW!";
            report(getService().get(), 3, message.c_str());
        }
        break;
    default:
        {
            String name(device == keyboard ? "Keyboard " : "Mouse ");
        }
        return false;
    }
    return true;
}
