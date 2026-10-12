// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Descriptor {
    unsigned short port;
    char host[32];
    Descriptor(unsigned short, const char*);
};

struct Address {
    unsigned long host;
    unsigned short port;
    const char* text(bool);
};

struct Text {
    unsigned char storage[28];
    Text(const char*);
    ~Text();
};

struct Error {
    unsigned char storage[40];
    Error(const Text&);
    Error(const Error&);
    ~Error();
};

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Logger {
    void* object;
    RefCount* count;
    ~Logger();
};

__forceinline Logger::~Logger()
{
    if (count) {
        RefCount* p = count;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

extern Logger __cdecl getLogger();
extern void __cdecl writeLog(void*, int, const char*, ...);
extern unsigned long addressHost;
extern unsigned long addressIndex;

struct Peer;
struct PeerTable {
    void* unused;
    bool (__thiscall* start)(Peer*, int, unsigned int, Descriptor*, int);
    void* reserved[38];
    Address (__thiscall* address)(Peer*, unsigned long, unsigned long);
};

struct Peer {
    PeerTable* table;
};

struct S {
    unsigned char padding[0x140];
    Peer* peer;
    unsigned int port;
    void start(unsigned short, unsigned int);
    void update();
};

void S::start(unsigned short requestedPort, unsigned int parameter)
{
    Descriptor descriptor(requestedPort, "");
    if (!peer->table->start(peer, 64, parameter, &descriptor, 1)) {
        Text message("Failed to start network server");
        throw Error(message);
    }

    Address local = peer->table->address(peer, addressHost, addressIndex);
    port = local.port;

    {
        Logger logger = getLogger();
        void* output = logger.object;
        writeLog(output, 1, "Started network server %s", local.text(true));
    }

    update();
}
