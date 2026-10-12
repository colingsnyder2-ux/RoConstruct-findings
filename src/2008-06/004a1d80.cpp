// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;
    template<class T, class Traits, class Alloc>
    struct basic_string {
        char storage[28];
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct SocketDescriptor {
    unsigned short port;
    char host[32];
    SocketDescriptor(unsigned short, const char*);
};

struct Address {
    unsigned long host;
    unsigned short port;
    const char* toString(bool) const;
};

struct Peer {
    virtual void reserved0() = 0;
    virtual bool start(unsigned short, unsigned int, SocketDescriptor*, unsigned int) = 0;
    virtual void reserved2() = 0;
    virtual void reserved3() = 0;
    virtual void reserved4() = 0;
    virtual void reserved5() = 0;
    virtual void reserved6() = 0;
    virtual void reserved7() = 0;
    virtual void reserved8() = 0;
    virtual void reserved9() = 0;
    virtual void reserved10() = 0;
    virtual void reserved11() = 0;
    virtual void reserved12() = 0;
    virtual void reserved13() = 0;
    virtual void reserved14() = 0;
    virtual void reserved15() = 0;
    virtual void reserved16() = 0;
    virtual void reserved17() = 0;
    virtual void reserved18() = 0;
    virtual void reserved19() = 0;
    virtual void reserved20() = 0;
    virtual void reserved21() = 0;
    virtual void reserved22() = 0;
    virtual void reserved23() = 0;
    virtual void reserved24() = 0;
    virtual void reserved25() = 0;
    virtual void reserved26() = 0;
    virtual void reserved27() = 0;
    virtual void reserved28() = 0;
    virtual void reserved29() = 0;
    virtual void reserved30() = 0;
    virtual void reserved31() = 0;
    virtual void reserved32() = 0;
    virtual void reserved33() = 0;
    virtual void reserved34() = 0;
    virtual void reserved35() = 0;
    virtual void reserved36() = 0;
    virtual void reserved37() = 0;
    virtual void reserved38() = 0;
    virtual void reserved39() = 0;
    virtual Address getAddress(Address) = 0;
};

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Failure {
    char storage[40];
    Failure(const String&);
};

extern Address defaultAddress;
extern unsigned char failureType;
extern "C" __declspec(noreturn) void __stdcall throwFailure(void*, void*);
extern Shared __cdecl getLogger();
extern void __cdecl logMessage(void*, int, const char*, ...);

struct Server {
    char padding[0x140];
    Peer* peer;
    unsigned int port;
    void start(unsigned short, unsigned int);
    void update();
};

void Server::start(unsigned short requestedPort, unsigned int flags)
{
    SocketDescriptor descriptor(requestedPort, "");
    if (!peer->start(64, flags, &descriptor, 1)) {
        String message("Failed to start network server");
        Failure failure(message);
        throwFailure(&failure, &failureType);
    }

    Address address = peer->getAddress(defaultAddress);
    port = address.port;
    {
        Shared logger = getLogger();
        void* object = logger.object;
        logMessage(object, 1, "Started network server %s",
                   address.toString(true));
    }
    update();
}
