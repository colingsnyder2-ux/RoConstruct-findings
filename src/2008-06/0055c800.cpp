// from server: 88% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall CryptHashData(unsigned long, const unsigned char*, unsigned long, unsigned long);
extern "C" unsigned long __stdcall GetLastError();

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Logger {
    void print(int, const char*, ...);
};

struct SharedLogger {
    Logger* object;
    RefCount* count;
    ~SharedLogger();
};

SharedLogger::~SharedLogger()
{
    RefCount* p = count;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

SharedLogger __cdecl getLogger();

struct S {
    unsigned long reserved[2];
    unsigned long hash;
    void update(const unsigned char*, unsigned long);
};

void S::update(const unsigned char* data, unsigned long size)
{
    if (!CryptHashData(hash, data, size, 0)) {
        SharedLogger lg = getLogger();
        lg.object->print(
            3, "Error during CryptHashData. GetLastError = %d",
            GetLastError());
    }
}
