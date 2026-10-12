// from server: 58% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other) : object(other.object), control(other.control) {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    ~Shared() {
        if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                control->destroy();
        }
    }
};

struct Guard {
    unsigned char storage[12];
    Guard(Shared);
    ~Guard();
};

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Receiver {
    virtual void unused();
    virtual void set(const std::string&);
};

struct Owner {
    unsigned char padding[12];
    Receiver* receiver;
};

struct Event {
    unsigned char padding0[28];
    const char* text;
    unsigned char padding1[16];
    Owner* owner;
};

#define SLOT(n) virtual void slot##n();
#define SLOTS(n) \
    SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3) SLOT(n##4) \
    SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct CRobloxTreeCtrl {
    SLOTS(0)
    SLOTS(1)
    SLOTS(2)
    SLOTS(3)
    SLOTS(4)
    SLOTS(5)
    SLOTS(6)
    SLOTS(7)
    SLOT(80) SLOT(81) SLOT(82) SLOT(83) SLOT(84)
    virtual Shared get();
    void f(Event*, int*);
};

#undef SLOTS
#undef SLOT

void CRobloxTreeCtrl::f(Event* event, int* result) {
    if (event->text) {
        Owner* owner = event->owner;
        Guard guard(get());
        {
            std::string text(event->text);
            owner->receiver->set(text);
        }
        *result = 1;
    } else {
        *result = 0;
    }
}
