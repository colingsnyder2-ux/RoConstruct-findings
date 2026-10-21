// from server: 98% by EspClaude
#include <list>
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;
struct Buffer;

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void add_ref() { _InterlockedExchangeAdd(&strong, 1); }
    void release()
    {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
};

struct Item {
    virtual void unused();
    virtual void write(Buffer*);
};

struct Shared {
    Item* object;
    Control* control;
    Shared(const Shared& r) : object(r.object), control(r.control) { if (control) control->add_ref(); }
    ~Shared() { if (control) control->release(); }
};

struct Guard {
    unsigned char storage[24];
    Guard(void*, int);
    ~Guard();
};

struct Buffer {
    int bits;
    unsigned char storage[272];
    unsigned int limit;
};

struct Addr { unsigned int v; };

struct Stream {
    unsigned char prefix[8];
    Buffer buffer;
    bool result;
    unsigned char tail[3];

    Stream(S*, Addr);
    ~Stream();
};

void __cdecl putByte(Buffer*, unsigned char);

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual bool ready();

    unsigned char prefix[0x2c70];
    std::list<Shared> pending;
    unsigned char pad2[0x2d28-0x2c74-0x1c];
    void* context;
    unsigned char suffix[0x24];
    Addr parameter;

    bool f();
};

bool S::f() {
    if (!ready())
        return false;

    Guard guard(context, 0);
    Stream stream(this, parameter);

    while (pending.size() > 0) {
        Shared item = pending.front();
        if (item.object) {
            if (static_cast<unsigned int>((stream.buffer.bits + 7) >> 3)
                >= stream.buffer.limit)
                break;

            if (!stream.buffer.bits)
                putByte(&stream.buffer, 78);

            item.object->write(&stream.buffer);
            stream.result = true;
        }
        pending.pop_front();
    }

    return stream.result;
}
