// from server: 69% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* const _invalid_parameter_noinfo)();

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };

    class ServiceProvider : public Instance {
    public:
        ServiceProvider* finish();
    };

    class PVInstance : public Instance {};
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Entry {
    RBX::Instance* object;
    Control* control;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Vector {
    Proxy* volatile proxy;
    unsigned int reserved[2];
    Entry* first;
    Entry* last;
};

struct Source {
    char pad[0x154];
    Vector* children;
    void connect(void*);
};

struct Shared {
    Source* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared() {
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct ControlHolder {
    Control* control;
    void assign(Control* const&);
};

struct Listener {
    void append(RBX::PVInstance* const&);
};

struct Argument {
    unsigned int reserved[2];
    RBX::Instance* object;
};

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
Shared __cdecl func_00618a40(RBX::ServiceProvider*);

struct S {
    char pad[0x130];
    unsigned int connection;
    Source* source;
    ControlHolder holder;
    Listener listener;

    void base(Argument*);
    void f(Argument*);
};

void S::f(Argument* arg) {
    base(arg);
    if (!source) {
        {
            const Shared& value =
                func_00618a40(func_00421cb0(arg->object));
            source = value.object;
            holder.assign(value.control);
        }

        if (source) {
            Vector* v = source->children;
            Entry* current = v->first;
            if (current > v->last)
                _invalid_parameter_noinfo();
            Proxy* proxy = v->proxy;

            for (;;) {
                v = source->children;
                Entry* end = v->last;
                if (v->first > end)
                    _invalid_parameter_noinfo();

                Proxy* endProxy = v->proxy;
                if (!proxy || proxy != endProxy)
                    _invalid_parameter_noinfo();

                void (__cdecl* invalid)() = _invalid_parameter_noinfo;

                if (current == end)
                    break;

                if (!proxy)
                    invalid();
                Vector* owner = proxy ? proxy->owner : 0;
                if (current >= owner->last)
                    invalid();

                RBX::PVInstance* object =
                    dynamic_cast<RBX::PVInstance*>(current->object);
                if (object)
                    listener.append(object);

                if (!proxy)
                    invalid();
                owner = proxy ? proxy->owner : 0;
                if (current >= owner->last)
                    invalid();
                ++current;
            }

            source->connect(&connection);
        }
    }
}
