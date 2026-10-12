// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    virtual ~Instance();
};

struct TextDisplay : Instance {
};

struct Control {
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long strong;
    long weak;
};

struct SharedCount {
    Control* control;

    SharedCount() : control(0) {}
    SharedCount(const SharedCount& other) : control(other.control) {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }
    ~SharedCount() {
        if (control &&
            _InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
    SharedCount& operator=(const SharedCount&);
};

struct Source {
    Instance* pointer;
    SharedCount count;
};

struct S {
    TextDisplay* pointer;
    SharedCount count;

    S(const Source&, int);
};

S::S(const Source& source, int)
    : pointer(dynamic_cast<TextDisplay*>(source.pointer)),
      count(source.count) {
    if (!pointer)
        count = SharedCount();
}
