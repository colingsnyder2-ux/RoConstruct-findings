// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl sprintf(char*, const char*, ...);

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
    Result* f(Result* output);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct State {
    char padding[0x1c0];
    float divisor;
    char gap[4];
    double first;
    double second;
    double third;
};

struct CRobloxDoc {
    unsigned char padding[0x94];
    Source* source;
    Result* f(Result* output);
    void func(int arg);
};

void CRobloxDoc::func(int arg)
{
    Result r;
    Result* res = this->f(&r);
    bool has = (res->first != 0);

    if (res->second != 0) {
        Control* c = (Control*)res->second;
        if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
            c->dispose();
            if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                c->destroy();
            }
        }
    }

    if (has) {
        Result r2;
        Result* res2 = this->source->f(&r2);
        Result local;
        local.first = res2->first;
        local.second = res2->second;
        if (local.second != 0) {
            _InterlockedExchangeAdd((volatile long*)(local.second + 4), 1);
        }

        double val = 0.0;
        {
            Result r3;
            Result* res3 = this->f(&r3);
            double d = ((double (*)())0x5757f0)();
            val = d * *(double*)0x817a88;
            if (res3->second != 0) {
                Control* c2 = (Control*)res3->second;
                if (_InterlockedExchangeAdd(&c2->strong, -1) == 1) {
                    c2->dispose();
                    if (_InterlockedExchangeAdd(&c2->weak, -1) == 1) {
                        c2->destroy();
                    }
                }
            }
        }

        char buffer[256];
        sprintf(buffer, "%.3g%%", val);
        (*(void (__thiscall**)(void*, char*))(*(int*)arg + 12))((void*)arg, buffer);
    }
}
