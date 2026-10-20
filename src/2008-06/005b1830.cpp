// from server: 97% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_headweldcollection_e1f26ffb346eee78.cpp

// Candidate translation unit (score above; library headers required).
#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>
typedef std::string String;
typedef std::vector<boost::shared_ptr<void> > Root;
struct Transform {
    float data[12];
};

struct Argument {
    char data[48];
};

struct Part {
    void detach(int);
};

struct Context {
    void* get();
    Transform calculate(const Argument&, const String&);
};

struct Receiver {
    char data[40];
    void assign(void*, Part*, const Transform&);
};

struct Resettable {
    void reset();
};

struct S {
    char padding0[0x104];
    void* context;
    char padding1[0x28];
    Receiver receiver;
    Argument argument;
    Resettable resettable;

    Part* getPart();
    void f();
};

void __cdecl initialize(S*, Root*);
void __cdecl finish(void*);
Context* __cdecl getContext(void*);

void S::f()
{
    resettable.reset();
    Root root;
    initialize(this, &root);
    finish(&root);

    Context* c = getContext(context);
    void* value = c->get();
    Part* part = getPart();
    if (part)
        part->detach(0);

    String name("HeadWeld");
    receiver.assign(value, part, c->calculate(argument, name));
}
