// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
#pragma float_control(precise, off)

struct Counted {
    virtual ~Counted();
    virtual void dispose();
    virtual void destroy();
    volatile long use;
    volatile long weak;
    void release();
};

inline void Counted::release()
{
    if (_InterlockedDecrement(&use) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Vector {
    float x, y, z;
    Vector();
    Vector(const Vector&);
};

inline Vector::Vector(const Vector& v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Frame {
    float rotation[9];
    Vector position;
    Vector transform(const Vector&) const;
};

struct Part {
    const Frame& frame() const;
};

struct Shared {
    Part* pointer;
    Counted* count;
    ~Shared();
};

inline Shared::~Shared()
{
    if (count)
        count->release();
}

struct Weak {
    Part* pointer;
    Counted* count;
    Shared lock() const;
};

struct Event {};

struct Signal {
    void fire(const Event&);
};

struct Receiver {
    char padding[16];
    Signal signal;
};

struct Registry {
    Receiver* find(void*);
};

extern Registry registry;

struct Rocket {
    int unused;
    int active;
    Weak target;
    bool enabled;
    char padding0[3];
    Part* relative;
    int unused18;
    Vector destination;
    float radius;
    bool fired;

    void update(int, int, int);
    void baseUpdate(int, int, int);
};

void Rocket::update(int a, int b, int c)
{
    baseUpdate(a, b, c);

    if (active && target.lock().pointer && enabled && !fired) {
        Vector position = target.lock().pointer->frame().position;
        const Vector& goal =
            relative ? relative->frame().transform(destination) : destination;

        float x = position.x - goal.x;
        float y = position.y - goal.y;
        float z = position.z - goal.z;

        if (x * x + y * y + z * z <= radius * radius) {
            Rocket* base = reinterpret_cast<Rocket*>(
                reinterpret_cast<char*>(this) - 0x138);
            Receiver* receiver = registry.find(
                base ? reinterpret_cast<char*>(this) - 0x124 : 0);
            if (receiver) {
                Event event;
                receiver->signal.fire(event);
            }
            fired = true;
        }
    }
}
