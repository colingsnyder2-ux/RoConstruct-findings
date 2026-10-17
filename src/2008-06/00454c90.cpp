// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    Result* copy(Result* output);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* control;
};

struct String {
    unsigned char storage[28];
    String();
    ~String();
    const char* c_str() const;
};

struct OStringStream {
    unsigned char storage[0x50];
    OStringStream(int);
    ~OStringStream();
    void flush();
    String str() const;
};

struct StreamBase {
    unsigned char storage[0x50];
    ~StreamBase();
};

struct LogEntry {
    unsigned char storage[0x18];
    LogEntry();
    ~LogEntry();
};

struct Doc {
    unsigned char padding[0x94];
    Source* source;
    void method();
};

extern "C" void __stdcall mfc_2209(void*);
extern "C" void __stdcall mfc_316(void*, int);
extern "C" void __stdcall mfc_3390(void*, int, int, int);
extern "C" void __stdcall mfc_405(void*, int, int, const char*, int);
extern "C" int __stdcall mfc_4431(void*);
extern "C" void __stdcall mfc_601(void*, void*);

void Doc::method()
{
    void* local1;
    void* local2;
    Result res;
    Shared shared;
    LogEntry entry;
    StreamBase base;
    OStringStream oss(6);
    String str;
    Control* ctrl;
    Source* src;
    Result* r;
    long old;

    mfc_2209(&local1);
    mfc_316(&local1, 0x8d);
    mfc_3390(&local1, 0, 0, 1);
    mfc_405(&local1, 0, 6, "LDraw", 1);
    if (mfc_4431(&local1) == 1) {
        mfc_601(&local1, &local2);
        mfc_3390(&local2, 0, 0, 1);
        mfc_4431(&local2);
        mfc_405(&base, 2, 1, 0, 0);
        mfc_316(&base, 0);
        src = this->source;
        r = src->copy(&res);
        shared.control = r->second ? (Control*)r->second : 0;
        if (shared.control) {
            _InterlockedExchangeAdd(&shared.control->strong, 1);
        }
        entry = LogEntry();
        if (shared.control) {
            ctrl = shared.control;
            old = _InterlockedExchangeAdd(&ctrl->strong, -1);
            if (old == 1) {
                ctrl->dispose();
                old = _InterlockedExchangeAdd(&ctrl->weak, -1);
                if (old == 1)
                    ctrl->destroy();
            }
        }
        mfc_2209(&local1);
        mfc_405(&base, 0, 0, 0, 0);
        mfc_3390(&local2, 0, 0, 1);
        mfc_4431(&local2);
        mfc_316(&local1, 0);
    }
    mfc_4431(&local1);
}
