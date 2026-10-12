// from server: 72% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S;

struct String {
    unsigned char storage[24];
    String(const char*);
    ~String();
};

struct Object {
    virtual void unused() = 0;
    virtual void setName(const String&) = 0;
    void attach(S*);
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Object* object;
    Control* control;

    Shared(const Shared& other)
        : object(other.object), control(other.control) {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    ~Shared() {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
};

struct Function {
    typedef void (__cdecl *Manager)(const void*, void*, int);
    Manager* manager;
    unsigned long reserved;
    unsigned char data[24];

    Function(const Function& other) : manager(0) {
        if (other.manager) {
            manager = other.manager;
            (*other.manager)(other.data, data, 0);
        }
    }

    ~Function() {
        if (manager) {
            Manager operation = *manager;
            if (operation)
                operation(data, data, 1);
        }
    }
};

struct Result {
    Shared value;
};

Result __cdecl createObject(Function);

struct S {
    Object* f(const char*, Function);
};

Object* S::f(const char* name, Function function) {
    Shared result(createObject(function).value);
    {
        String text(name);
        result.object->setName(text);
    }
    result.object->attach(this);
    return result.object;
}
