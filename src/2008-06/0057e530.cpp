// from server: 84% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

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
    unsigned int first;
    unsigned int last;
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
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
}

struct Iterator {
    void* owner;
    unsigned int position;
};

void __cdecl clearBackpack(Shared);
extern void __cdecl visitChildren(
    Iterator*, void*, unsigned int, void*, unsigned int,
    void (__cdecl *)(Shared), Control*);

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
        unsigned int endPosition = endContainer->last;
        if (endContainer->first > endPosition)
            _invalid_parameter_noinfo();
        void* endOwner = endContainer->owner;

        Children* beginContainer = value.object->children;
        unsigned int beginPosition = beginContainer->first;
        if (beginPosition > beginContainer->last)
            _invalid_parameter_noinfo();
        void* beginOwner = beginContainer->owner;

        Iterator result;
        visitChildren(&result, beginOwner, beginPosition,
                      endOwner, endPosition, clearBackpack, value.control);
    }
}
