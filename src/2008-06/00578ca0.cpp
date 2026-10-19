// from server: 47% by colin
// from server: 45% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
#include <intrin.h>
extern bool enabled;
extern void __cdecl alignedFree(void*);

struct Array
{
    void* data;
    int size;
    int capacity;

    Array(const Array&);
    ~Array() { alignedFree(data); }
};

struct Settings
{
    Array values;
    bool first;
    bool second;
};

struct Scope
{
    char storage[24];

    Scope(void*, int);
    ~Scope();
};

struct World
{
    char padding[0x42c];
    void* firstScope;
    void* secondScope;
    void* thirdScope;
    void* fourthScope;

    double step(float, Settings*);
    void update();
};

struct State
{
    char padding[0x1b4];
    int mode;

    void step(float);
    void update(float);
};

struct S
{
    char padding[0x204];
    World* world;
    void* unused;
    State* state;

    void configure(Settings*);
    void f(float);
};

extern unsigned int __cdecl classify(S*);
extern const Settings* __cdecl getSettings();

void S::f(float elapsed)
{
    unsigned int mode = classify(this);
    volatile bool active = false;

    switch (mode)
    {
    case 0:
    case 3:
    case 4:
        active = state->mode == 1;
        _ReadWriteBarrier();
        break;
    case 1:
    case 2:
        active = enabled;
        break;
    }

    Settings settings = *getSettings();

    if (enabled)
        configure(&settings);

    if (active)
    {
        {
            Scope scope(world->firstScope, 1);
            world->step(elapsed, &settings);
        }
        {
            Scope scope(world->thirdScope, 1);
            state->step(elapsed);
        }
    }
    else
    {
        Scope scope(world->secondScope, 1);
        world->update();
    }

    {
        Scope scope(world->fourthScope, 1);
        state->update(elapsed);
    }
}
