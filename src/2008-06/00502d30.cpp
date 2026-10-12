// from server: 88% by king_originala
#pragma float_control(precise, off)

extern "C" long (__stdcall *InterlockedDecrement)(volatile long*);
extern float lowerLimit;

struct Control {
    virtual ~Control();
    volatile long count;
    void dispose();
};

struct Result {
    void* value;
    Control* control;

    ~Result() {
        if (control && InterlockedDecrement(&control->count) == 0) {
            control->dispose();
            if (control)
                delete control;
        }
    }
};

struct Producer {
    char storage[20];
    Result build(float, float, bool, float, void*, void*, void*);
};

struct Holder {
    void* value;
    void assign(void*);
};

struct S {
    char pad0[0x24];
    float first;
    float second;
    char pad1[0x2A8];
    Producer producer;
    char context[4];
    Holder holder;
    bool enabled;
    char pad2[3];
    float fourth;
    char pad3[0x18];
    char input[0xF8];
    char output[4];

    void f(float, float, bool, float);
};

void S::f(float a, float b, bool c, float d) {
    a = a > 0.0f ? 0.0f : (a < lowerLimit ? lowerLimit : a);

    if (first != a || second != b || c != enabled || fourth != d) {
        first = a;
        second = b;
        fourth = d;
        enabled = c;
        holder.assign(producer.build(a, b, c, d, context, input, output).value);
    }
}
