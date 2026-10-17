// from server: 14% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct SharedPtr {
    RefCounted* ptr;
};

struct String {
    char buf[16];
    unsigned int size;
    unsigned int capacity;
};

struct StandardOut {
    void printf(int type, const char* fmt, ...);
};

extern StandardOut* g_standardOut;

extern "C" void* __cdecl getGlobalInstance();
extern "C" void __cdecl stringCtor(String*, const char*);
extern "C" void __cdecl stringDtor(String*);
extern "C" void __cdecl formatString(String*, const char*, ...);

struct Replicator {
    char pad0[0x2c90];
    char pad1[0xc8];
    void* mapEnd;
    void* mapBegin;
    char pad2[0x2d54 - 0x2cd8 - 8];
    void* stringPool;

    bool readItem(int, void*, void*);
    bool processItem();
    void sendItem(int, int, int);

    void readInstanceDeleteItem(int id);
};

extern "C" void* __cdecl getStringPoolEntry(void* pool, int);

bool Replicator::readItem(int a, void* b, void* c)
{
    return false;
}

void Replicator::sendItem(int, int, int) {}

bool Replicator::processItem()
{
    return false;
}

void Replicator::readInstanceDeleteItem(int id)
{
    SharedPtr sp;
    String name;
    void* global;
    void* item;
    void* poolEntry;
    long old;
    RefCounted* rc;
    void* oldEnd;

    if (!readItem(id, &sp, &name)) {
        global = getGlobalInstance();
        if (*(unsigned char*)((char*)global + 0x131) != 0) {
            formatString(&name, "Replication ~??? << %s", "NULL");
            g_standardOut->printf(1, "%s", name.buf);
            stringDtor(&name);
        }
        return;
    }

    stringCtor(&name, "NULL");
    global = getGlobalInstance();
    if (*(unsigned char*)((char*)global + 0x131) != 0) {
        if (sp.ptr != 0) {
            rc = sp.ptr;
            void* v = *(void**)((char*)rc + 0x10);
            void* (*fn)(void*) = (void* (*)(void*))*(void**)((char*)v + 4);
            void* r = fn((char*)rc + 0x10);
            if (*(unsigned int*)((char*)r + 0x1c) >= 0x10) {
                item = *(void**)((char*)r + 8);
            } else {
                item = (char*)r + 8;
            }
        } else {
            item = (void*)0x824858;
        }
        formatString(&name, "%s", item);
        poolEntry = getStringPoolEntry(stringPool, 1);
        g_standardOut->printf(1, "Replication: ~%s:%d << %s", "NULL", 0, poolEntry);
        stringDtor(&name);
    }

    if (processItem()) {
        oldEnd = *(void**)((char*)this + 0x2cd8);
        *(void**)((char*)this + 0x2cd8) = sp.ptr;
        sendItem(0, 0, 0);
        *(void**)((char*)this + 0x2cd8) = oldEnd;
    }

    if (sp.ptr != 0) {
        rc = sp.ptr;
        old = _InterlockedExchangeAdd(&rc->refcount, -1);
        if (old == 1) {
            void* v = *(void**)rc;
            void (*fn)(void*) = (void (*)(void*))*(void**)((char*)v + 4);
            fn(rc);
            old = _InterlockedExchangeAdd(&rc->weakrefcount, -1);
            if (old == 1) {
                void* v2 = *(void**)rc;
                void (*fn2)(void*) = (void (*)(void*))*(void**)((char*)v2 + 8);
                fn2(rc);
            }
        }
    }
}
