// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl sprintf(char*, const char*, ...);

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* ctrl;
};

struct RBX_DataModel {
    char pad[0x20c];
    void* field_214;
    double get() const;
};

struct QString {
    void* data;
    QString();
    ~QString();
    void sprintf(const char* fmt, ...);
};

struct CRobloxDoc {
    char pad[0x94];
    Source* source;
    void func(Shared* arg);
};

void CRobloxDoc::func(Shared* arg) {
    Result r;
    bool hasData;
    source->copy(&r);
    hasData = (r.first != 0);

    if (arg) {
        Control* c = arg->ctrl;
        if (c) {
            if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                c->dispose();
                if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                    c->destroy();
                }
            }
        }
    }

    if (hasData) {
        Result r2;
        source->copy(&r2);
        double t = ((RBX_DataModel*)r2.first)->get();
        QString label;
        label.sprintf("t %.4g", t);
    }
}
