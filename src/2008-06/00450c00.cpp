// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl sprintf(char*, const char*, ...);

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
    Result* p = source->copy(&local);
    bool has = (p->first != 0);

    Control* c = (Control*)p->second;
    if (c != 0) {
        if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
            c->dispose();
            if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                c->destroy();
            }
        }
    }

    if (has) {
        Result r;
        Result* q = source->copy(&r);
        Control* c2 = (Control*)q->second;
        if (c2 != 0) {
            _InterlockedExchangeAdd(&c2->strong, 1);
        }
        double fps = ((RBX_DataModel*)0)->get();
        char buf[32];
        sprintf(buf, "%.3gfps", 1000.0 / fps);
        if (c2 != 0) {
            if (_InterlockedExchangeAdd(&c2->strong, -1) == 1) {
                c2->dispose();
                if (_InterlockedExchangeAdd(&c2->weak, -1) == 1) {
                    c2->destroy();
                }
            }
        }
        if (out != 0) {
            out->first = q->first;
            out->second = q->second;
        }
    }
}
