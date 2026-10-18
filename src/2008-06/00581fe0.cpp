// from server: 71% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

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
    bool operator!=(const Iterator&) const;
    Element& operator*() const;
    Iterator& operator++();
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    Element* first;
    Element* last;
    Iterator begin() const;
    Iterator end() const;
    void append(RBX::ModelInstance* const*);
};

inline bool Iterator::operator!=(const Iterator& other) const {
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return position != other.position;
}

inline Element& Iterator::operator*() const {
    if (!proxy)
        _invalid_parameter_noinfo();
    if (position >= (proxy ? proxy->owner : 0)->last)
        _invalid_parameter_noinfo();
    return *position;
}

inline Iterator& Iterator::operator++() {
    if (!proxy)
        _invalid_parameter_noinfo();
    if (position >= (proxy ? proxy->owner : 0)->last)
        _invalid_parameter_noinfo();
    ++position;
    return *this;
}

inline Iterator Vector::begin() const {
    Element* position = first;
    if (position > last)
        _invalid_parameter_noinfo();
    Iterator result = { proxy, position };
    return result;
}

inline Iterator Vector::end() const {
    Element* position = last;
    if (first > position)
        _invalid_parameter_noinfo();
    Iterator result = { proxy, position };
    return result;
}

struct Selection {
    char pad[0x154];
    Vector* children;
    void connect(void*);
};

struct SelectionPtr {
    Selection* value;
    Control* control;
    ~SelectionPtr();
};

inline SelectionPtr::~SelectionPtr() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Argument {
    unsigned reserved[2];
    RBX::Instance* instance;
};

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
SelectionPtr __cdecl acquire(RBX::ServiceProvider*);

struct S {
    char pad[0x130];
    unsigned signal;
    Selection* selection;
    ControlSlot control;
    Vector filtered;

    void base(Argument*);
    void assign(const SelectionPtr&);
    void f(Argument*);
};

inline void S::assign(const SelectionPtr& result) {
    selection = result.value;
    control.assign(&result.control);
}

void S::f(Argument* argument) {
    base(argument);
    if (!selection) {
        assign(acquire(func_00421cb0(argument->instance)));
        if (selection) {
            Iterator current = selection->children->begin();
            Iterator last = selection->children->end();
            while (current != last) {
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
