// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Object;

struct Shared {
    Object* object;
    Reference reference;
    __forceinline Shared& operator=(const Shared&);
    __forceinline ~Shared();
};

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    reference = other.reference;
    return *this;
}

__forceinline Shared::~Shared()
{
    Control* p = reference.control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Transform {
    float data[18];
};

struct TransformProperty {
    void assign(const Transform&);
};

struct Object {
    char padding[0x228];
    TransformProperty transform;
    Shared getObject();
    void setParent(void*);
};

struct Actor {
    const Transform& getTransform();
};

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void notify(int);
    };
}

extern Actor* __cdecl findActor(RBX::Instance*);
extern Shared __cdecl convert(const Shared&) throw();
extern RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance*);

struct Tool {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual Shared createObject();
    virtual Transform makeTransform(int, const Transform&);
    virtual int getNotification();

    char padding[0x14];
    RBX::Instance* parent;
    Shared stored;
    int field24;
    int field28;
    int field2c;

    void execute(int);
};

void Tool::execute(int argument)
{
    field2c = field28;
    Actor* actor = findActor(parent);
    if (actor) {
        if (!stored.object)
            stored = createObject();

        Shared selected = convert(stored.object->getObject());
        selected.object->setParent(parent);
        selected.object->transform.assign(
            makeTransform(argument, actor->getTransform()));
        func_005807b0(parent)->notify(getNotification());
    }
}
