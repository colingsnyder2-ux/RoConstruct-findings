// from server: 94% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
#pragma float_control(precise, off)

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern float adjustment;

struct Matrix
{
    float elements[9];
    bool equals(const Matrix&) const;
};

struct Transform
{
    Matrix rotation;
    float x, y, z;
};

struct Part
{
    bool enabled() const;
    const Transform* getTransform() const;
    void setTransform(const Transform&);
};

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    Part* object;
    Control* control;
    __forceinline ~Shared();
};

struct Weak
{
    Part* object;
    Control* control;
    Shared lock() const;
};

struct Container
{
    unsigned int reserved[3];
    Weak* begin;
    Weak* end;
    Weak* capacity;
    __forceinline const Weak& operator[](unsigned int) const;
};

extern void __cdecl adjustTransform(Transform*, const Transform*, float);

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

__forceinline const Weak& Container::operator[](unsigned int i) const
{
    return begin[i];
}

void __cdecl updateParts(const Container* parts)
{
    unsigned int i = 0;
    if (static_cast<unsigned int>(parts->end - parts->begin) > 0)
    {
        do
        {
            if (i >= static_cast<unsigned int>(parts->end - parts->begin))
                invalid_parameter_noinfo();

            {
                Shared part = (*parts)[i].lock();
                Part* object = part.object;
                if (object && object->enabled())
                {
                    const Transform* current = object->getTransform();
                    Transform next;
                    adjustTransform(&next, current, adjustment);
                    if (!(next.x == current->x &&
                          next.y == current->y &&
                          next.z == current->z &&
                          next.rotation.equals(current->rotation)))
                        object->setTransform(next);
                }
            }
            ++i;
        }
        while (i < static_cast<unsigned int>(parts->end - parts->begin));
    }
}
