// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall CryptHashData(
    unsigned long, const unsigned char*, unsigned long, unsigned long);
extern "C" unsigned long __stdcall GetLastError();

struct String {
    unsigned long allocator;
    union {
        unsigned char buffer[16];
        unsigned char* pointer;
    } data;
    unsigned long size;
    unsigned long capacity;
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Logger;

struct LoggerPtr {
    Logger* pointer;
    Control* control;
    ~LoggerPtr();
};

inline LoggerPtr::~LoggerPtr()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

LoggerPtr __cdecl getLogger();
void __cdecl print(Logger*, int, const char*, ...);

struct MD5HasherImpl {
    unsigned long reserved[2];
    unsigned long hash;
    void update(const String&);
};

void MD5HasherImpl::update(const String& text)
{
    unsigned long length = text.size;
    const unsigned char* bytes =
        text.capacity >= 16 ? text.data.pointer : text.data.buffer;

    if (!CryptHashData(hash, bytes, length, 0)) {
        const LoggerPtr& handle = getLogger();
        Logger* logger = handle.pointer;
        unsigned long error = GetLastError();
        print(logger, 3,
              "Error during CryptHashData. GetLastError = %d", error);
    }
}
