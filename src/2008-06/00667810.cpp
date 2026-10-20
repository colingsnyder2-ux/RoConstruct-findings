// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_freefallctorreturnsa2da485722acf759.cpp

// Candidate translation unit (score above; library headers required).

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

struct Empty{Empty(){}};
struct Signal {
    Empty fire(bool);
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
    : Base(human, 300.f, 50.f), savedSecond(0), savedFirst(0), value2(0), value3(0), value4(0)
{
    Human* owner = human;



    Entry* entry = registry.find(owner ? &owner->identity : 0);
    if (entry)
        entry->signal.fire(true);

    if (owner->first()) {
        savedFirst = owner->first()->f();
        owner->first()->set(0.0f);
    }

    if (owner->second()) {
        savedSecond = owner->second()->f();
        owner->second()->set(0.0f);
    }
}