// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __cdecl rand();
extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

extern const float randomScale;
extern const float delayOffset;
extern const float initialDistance;
extern const char instanceType[];
extern const char pvInstanceType[];

struct Object;
struct Container;

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    Object* object;
    RefCount* count;
    ~Shared();
    void assign(const Shared*);
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Weak
{
    Object* object;
    RefCount* count;
    Shared lock();
};

struct __declspec(align(8)) Transform
{
    float rotation[9];
    float x, y, z;
};

struct TransformInterface
{
    virtual Transform* getTransform(Transform*) = 0;
};

struct Identity
{
    virtual void unused0() = 0;
    virtual void unused1() = 0;
    virtual void* getIdentity() = 0;
};

struct Object
{
    char padding[0x134];
    int* virtualOffsets;
    Container* getContainer();
    bool eligible();
    Identity* identity();
};

struct Children
{
    char padding[12];
    Shared* first;
    Shared* last;
};

struct Container
{
    char padding[0x108];
    Children* children;
    unsigned size();
};

extern "C" void* __cdecl dynamicCastHelper(
    void*, long, const void*, const void*, int);
extern Shared __cdecl makeShared(Object*);

struct Controller
{
    char padding0[0x18];
    Weak source;
    float nextTime;
    char padding1[0x38];
    Shared selected;
    void update(void*, float);
};

#pragma float_control(precise, off, push)

void Controller::update(void* excluded, float time)
{
    if (nextTime > time)
        return;

    nextTime = rand() * randomScale + time + delayOffset;
    Shared current = source.lock();
    Object* object = current.object;
    if (!object)
        return;

    Container* container = object->getContainer();
    if (!container)
        return;

    float closest = initialDistance;
    Transform origin;
    TransformInterface* transform = reinterpret_cast<TransformInterface*>(
        reinterpret_cast<char*>(object) + 0x134 + object->virtualOffsets[2]);
    transform->getTransform(&origin);

    for (unsigned i = 0; i < container->size(); ++i)
    {
        Children* children = container->children;
        if (i >= static_cast<unsigned>(children->last - children->first))
            _invalid_parameter_noinfo();

        Object* candidate = static_cast<Object*>(dynamicCastHelper(
            children->first[i].object, 0, instanceType, pvInstanceType, 0));

        if (!candidate || candidate == current.object ||
            !candidate->eligible() ||
            candidate->identity()->getIdentity() == excluded)
            continue;

        Transform other;
        TransformInterface* candidateTransform =
            reinterpret_cast<TransformInterface*>(
                reinterpret_cast<char*>(candidate) + 0x134 +
                candidate->virtualOffsets[2]);
        Transform* position = candidateTransform->getTransform(&other);
        const float* p = &position->x;
        double dx = p[0] - origin.x;
        double dy = p[1] - origin.y;
        double dz = p[2] - origin.z;
        double distance = sqrt(dx * dx + dy * dy + dz * dz);

        if (closest > distance)
        {
            closest = static_cast<float>(distance);
            Shared replacement = makeShared(candidate);
            selected.assign(&replacement);
        }
    }
}

#pragma float_control(pop)
