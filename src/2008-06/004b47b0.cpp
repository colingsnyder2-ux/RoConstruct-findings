// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Logger;

struct LoggerReference {
    Logger* pointer;
    Control* control;

    __forceinline ~LoggerReference()
    {
        Control* p = control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                    p->destroy();
            }
        }
    }
};

extern LoggerReference __cdecl getLogger();
extern void __cdecl logMessage(Logger*, int, const char*, const char*);

struct Table {
    int contains(const unsigned int*);
};

struct Name {
    const char* text(int);
};

struct Owner {
    unsigned char padding[0x2cb0];
    Table table;
    unsigned char gap[0xa3];
    Name name;
};

struct Item {
    void* vtable;
    Owner* owner;
    unsigned int identifier;
    void process();
};

#pragma optimize("y", off)

void Item::process()
{
    try {
        unsigned int key = identifier;
        if (owner->table.contains(&key)) {
            if (identifier == 0) {
                LoggerReference logger = getLogger();
                Logger* pointer = logger.pointer;
                logMessage(pointer, 3, "Replication: ~NULL >> %s",
                           owner->name.text(1));
            }
        }
    }
    catch (...) {
    }
}
