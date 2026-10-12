// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    virtual void anchor();
};

struct PartInstance : Instance {
    unsigned char padding[804];
    float value;
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
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
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
    if (part && part->value == 0.0f) {
        float t = (phase < 15 ? phase : 30 - phase) * scale;
        Color color = { t, 0.0f, 1.0f - t, alpha };
        submit(build(context, color));
    }
}
