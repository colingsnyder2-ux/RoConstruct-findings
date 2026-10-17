// from server: 22% by colin
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
    Control* ptr;
};

struct RBX_DataModel {
    char pad[0x20c];
    void* field_214;
    double get() const;
};

struct CRobloxDoc {
    unsigned char padding[0x94];
    Source* source;
    void func(Result* out);
};

void CRobloxDoc::func(Result* out)
{
    Result local;
    source->copy(&local);
    bool has = (local.first != 0);

    if (local.second != 0) {
        Control* c = (Control*)local.second;
        if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
            c->dispose();
            if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                c->destroy();
            }
        }
    }

    if (has) {
        Result r;
        source->copy(&r);
        Control* c = (Control*)r.second;
        if (c != 0) {
            _InterlockedExchangeAdd(&c->strong, 1);
        }
        double fps = ((RBX_DataModel*)0)->get();
        char buf[32];
        sprintf(buf, "%.3gfps", 1000.0 / fps);
        if (c != 0) {
            if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                c->dispose();
                if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                    c->destroy();
                }
            }
        }
        if (out != 0) {
            out->first = r.first;
            out->second = r.second;
        }
    }
}
