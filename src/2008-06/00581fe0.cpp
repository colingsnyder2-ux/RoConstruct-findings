// from server: 57% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

namespace RBX {
struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};
struct ModelInstance : Instance {};
struct ServiceProvider : Instance {
    ServiceProvider* finish();
};
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct ControlSlot {
    Control* value;
    void assign(Control* const*);
};

struct Element {
    RBX::Instance* value;
    Control* control;
};

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* proxy;
    Element* position;

    bool operator!=(const Iterator& other) const {
        if (!proxy || proxy != other.proxy)
            _invalid_parameter_noinfo();
        return position != other.position;
    }

    Element& operator*() const {
        Vector* owner;
        if (!proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = proxy->owner;
        }
        check(owner);
        return *position;
    }

    Iterator& operator++() {
        Vector* owner;
        if (!proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = proxy->owner;
        }
        check(owner);
        ++position;
        return *this;
    }

    void check(Vector*) const;
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    Element* first;
    Element* last;

    Iterator begin() const {
        Element* position = first;
        if (position > last)
            _invalid_parameter_noinfo();
        Iterator result = { proxy, position };
        return result;
    }

    Iterator end() const {
        Element* position = last;
        if (first > position)
            _invalid_parameter_noinfo();
        Iterator result = { proxy, position };
        return result;
    }

    void append(RBX::ModelInstance* const*);
};

inline void Iterator::check(Vector* owner) const {
    if (position >= owner->last)
        _invalid_parameter_noinfo();
}

struct Selection {
    char pad[0x154];
    Vector* children;
    void connect(void*);
};

struct SelectionPtr {
    Selection* value;
    Control* control;

    ~SelectionPtr() {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

struct Argument {
    unsigned reserved[2];
    RBX::Instance* instance;
};

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
SelectionPtr* __cdecl acquire(SelectionPtr*, RBX::ServiceProvider*);

struct S {
    char pad[0x130];
    unsigned signal;
    Selection* selection;
    ControlSlot control;
    Vector filtered;

    void base(Argument*);
    void f(Argument*);
};

void S::f(Argument* argument) {
    base(argument);
    if (!selection) {
        {
            SelectionPtr temporary;
            SelectionPtr* result =
                acquire(&temporary, func_00421cb0(argument->instance));
            selection = result->value;
            control.assign(&result->control);
        }

        if (selection) {
            Iterator current = selection->children->begin();
            while (current != selection->children->end()) {
                RBX::ModelInstance* model =
                    dynamic_cast<RBX::ModelInstance*>((*current).value);
                if (model)
                    filtered.append(&model);
                ++current;
            }
            selection->connect(&signal);
        }
    }
}
