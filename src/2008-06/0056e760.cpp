// from server: 70% by colin
struct PropertyDescriptor {
    int reserved;
    int type;
    union {
        double number;
        float single;
        const char* text;
    } value;
    void clear();
    bool toNumber(double*);
};

extern "C" bool __cdecl parseNumber(const char*, double*);

struct SignalDesc {
    char pad[0x20];
    void* ptr;
    bool isValid();
};

struct S {
    char pad[0x18];
    void* obj;
    void f(PropertyDescriptor* desc, int a, int b);
};

void S::f(PropertyDescriptor* desc, int a, int b)
{
    if (!desc->toNumber(0)) {
        double d;
        if (parseNumber(desc->value.text, &d)) {
            void* p = obj;
            void** vt = *reinterpret_cast<void***>(p);
            typedef void (__stdcall *Fn)(void*, int, double*);
            Fn fn = reinterpret_cast<Fn>(vt[3]);
            fn(p, a, &d);
        }
    }
}
