// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    ~Shared() {
        if (control) {
            Control* p = control;
            if (_InterlockedDecrement(&p->strong) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weak) == 0)
                    p->destroy();
            }
        }
    }
};

struct Settings {
    char padding[0x131];
    unsigned char logging;
};

struct Endpoint {
    const char* text(int);
};

struct Owner {
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
    virtual void sent(int);

    char padding[0x2d50];
    Endpoint endpoint;
};

void __cdecl writeKind(void*, int);
void __cdecl writeMarker(void*, int);
Settings* __cdecl settings();
Shared __cdecl acquireLogger();
void __cdecl logMessage(void*, int, const char*, ...);

struct MarkerItem {
    unsigned int padding;
    Owner* owner;
    int marker;
    void send(void*);
};

void MarkerItem::send(void* stream)
{
    writeKind(stream, 4);
    writeMarker(stream, marker);

    if (settings()->logging) {
        const Shared& logger = acquireLogger();
        void* output = logger.object;
        logMessage(output, 1, "Replication: Sending marker %d to %s",
                   marker, owner->endpoint.text(1));
    }

    owner->sent(marker);
}
