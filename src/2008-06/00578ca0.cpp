// from server: 65% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHa /MD
// roc-lib: g3d-6.09 roc_datamodel_mark_native_0beeb8b2b37b1a32.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/Array.h>
#include <G3D/Vector4.h>
#include <stddef.h>
#include <intrin.h>
extern bool enabled;
extern void __cdecl alignedFree(void*);

typedef G3D::Array<G3D::Vector4> Array;

struct Settings
{
    Array values;
    bool first;
    bool second;
};

// Target constructor005c3f80: section0, frameTick8, wallTime16,
// TlsGetValue return at4; dtor005c42d0 restores parent and calls CodeProfiler log.
// 2016 util/Profiling.h corroborates reference/parent/frameTick ownership,
// but its later Time and extra fields are not transplanted.
struct CodeProfiler;
struct Scope {
 CodeProfiler& section;
 Scope* enclosingMark;
 bool frameTick;
 double startTime;
 Scope(CodeProfiler&,bool);
 ~Scope();
};
typedef char mark_size[sizeof(Scope)==24?1:-1];
typedef char mark_align[__alignof(Scope)==8?1:-1];
typedef char mark_time[offsetof(Scope,startTime)==16?1:-1];

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
    bool active = false;

    switch (mode)
    {
    case 0:
    case 3:
    case 4:
        active = state->mode == 1;
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
            Scope scope(*static_cast<CodeProfiler*>(world->firstScope), true);
            world->step(elapsed, &settings);
        }
        {
            Scope scope(*static_cast<CodeProfiler*>(world->thirdScope), true);
            state->step(elapsed);
        }
    }
    else
    {
        Scope scope(*static_cast<CodeProfiler*>(world->secondScope), true);
        world->update();
    }

    {
        Scope scope(*static_cast<CodeProfiler*>(world->fourthScope), true);
        state->update(elapsed);
    }
}