// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Children {
    void* owner;
    char padding[8];
    unsigned first;
    unsigned last;
};

struct Instance {
    virtual void unused() = 0;
    char padding[0x104];
    Children* children;
};

struct Face {
    int getSurfaceType() const;
    void set(int);
};

struct Surfaces {
    Face* face(int);
};

struct PartInstance : Instance {
    Surfaces* surfaces();
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

struct Iterator {
    void* owner;
    unsigned position;
};

void __cdecl clearBackpack(Shared);

struct Visitor {
    void (__cdecl *function)(Shared);
};

extern void __cdecl visitChildren(
    Iterator*, void*, unsigned, void*, unsigned, Visitor, Control*);

void __cdecl clearBackpack(Shared value)
{
    PartInstance* part = dynamic_cast<PartInstance*>(value.object);
    if (part) {
        Surfaces* surfaces = part->surfaces();
        for (int i = 0; i < 6; ++i) {
            if (surfaces->face(i)->getSurfaceType() == 2)
                surfaces->face(i)->set(3);
        }
    }

    if (value.object->children) {
        Children* endContainer = value.object->children;
        Iterator end;
        end.position = endContainer->last;
        if (endContainer->first > end.position)
            invalid_parameter_noinfo();
        end.owner = endContainer->owner;

        Children* beginContainer = value.object->children;
        Iterator begin;
        begin.position = beginContainer->first;
        if (begin.position > beginContainer->last)
            invalid_parameter_noinfo();
        begin.owner = beginContainer->owner;

        Iterator result;
        Visitor visitor = { clearBackpack };
        visitChildren(&result, begin.owner, begin.position,
                      end.owner, end.position, visitor, value.control);
    }
}
