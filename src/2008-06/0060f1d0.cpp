// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Transform {
    float data[12];
    Transform combine(const Transform*) const;
    Transform apply(const Transform*) const;
};

struct Object {
    const Transform* getTransform();
    void setTransform(const Transform*);
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Object* object;
    Control* control;
    ~Handle();
};

struct Entry {
    Object* object;
    Control* control;
    Handle acquire() const;
};

struct List {
    unsigned char padding[12];
    Entry* first;
    Entry* last;
};

extern void __cdecl normalize(Transform*);

__forceinline Handle::~Handle()
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

void __cdecl update(List* list, Transform first, Transform second)
{
    for (unsigned int i = 0;
         i < static_cast<unsigned int>(list->last - list->first);
         ++i) {
        if (i >= static_cast<unsigned int>(list->last - list->first))
            _invalid_parameter_noinfo();

        Handle h = list->first[i].acquire();
        Object* object = h.object;
        if (object) {
            Transform intermediate = first.combine(object->getTransform());
            normalize(&intermediate);
            object->setTransform(&second.apply(&intermediate));
        }
    }
}
