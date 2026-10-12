// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    virtual void anchor();
};

struct PartInstance : Instance {
    unsigned char padding[804];
    volatile float value;
};

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Instance* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
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

struct Color {
    float r;
    float g;
    float b;
    float a;
};

extern const float scale;
extern const float alpha;
extern void* __cdecl build(void*, const Color&);
extern void __cdecl submit(void*);

void __cdecl render(Shared object, void* context, int phase)
{
    PartInstance* part = dynamic_cast<PartInstance*>(object.object);
    if (part && part->value != 0.0f) {
        double t = (phase < 15 ? phase : 30 - phase) * (double)scale;
        Color color = { (float)t, 0.0f, (float)(1.0 - t), alpha };
        submit(build(context, color));
    }
}
