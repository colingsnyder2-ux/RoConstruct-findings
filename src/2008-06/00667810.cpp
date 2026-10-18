// from server: 74% by colin
struct Property {
    char pad[728];
    float value;
    float f();
    void set(float);
};

struct Human {
    char pad[20];
    char identity;
    Property* first();
    Property* second();
};

struct Signal {
    void fire(Human**, int);
};

struct Entry {
    char pad[16];
    Signal signal;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;
extern float initialValue;
extern float initialLimit;

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    char pad[164];
    Base(Human*, float, float);
    virtual ~Base();
};

struct Freefall : Base {
    float savedSecond;
    float savedFirst;
    float value2;
    float value3;
    float value4;

    Freefall(Human*);
    virtual ~Freefall();
};

Freefall::Freefall(Human* human)
    : Base(human, initialLimit, initialValue)
{
    Human* owner = human;

    savedSecond = 0.0f;
    savedFirst = 0.0f;
    value2 = 0.0f;
    value3 = 0.0f;
    value4 = 0.0f;

    Entry* entry = registry.find(owner ? &owner->identity : 0);
    if (entry)
        entry->signal.fire(&owner, 1);

    if (owner->first()) {
        savedFirst = owner->first()->f();
        owner->first()->set(0.0f);
    }

    if (owner->second()) {
        savedSecond = owner->second()->f();
        owner->second()->set(0.0f);
    }
}
