// from server: 81% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_docexecutetemp_ded166d8447d3533.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
#include <string>
struct String { char storage[28]; __declspec(dllimport) ~String(); __declspec(dllimport) const char* c_str() const; };
struct Owner {
    Owner** proxy;
    unsigned int reserved[2];
    unsigned int first;
    unsigned int last;
    unsigned int end;
    Owner();
    ~Owner();
};

struct Holder {
    Owner* value;
    ~Holder();
};

struct Runner {
    Holder run(int, const char*, const char*, Owner*);
};

struct Model {
    Runner* runner();
};

typedef boost::shared_ptr<Model> Result;
struct Returned : Result {};

struct Lock {
    unsigned char storage[12];
    Lock(Result);
    ~Lock();
};

struct Source {
    void copy(Result*);
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Returned f();
    int execute(String);
};

inline Owner::Owner()
{
    Owner** p = new Owner*(this);
    proxy = p;
    first = 0;
    last = 0;
    end = 0;
}

inline Holder::~Holder()
{
    Owner* p = value;
    if (p) {
        p->~Owner();
        operator delete(p);
    }
}

int S::execute(String text)
{
    try {
        Lock lock(f());
        Owner owner;
        {
            Returned temporary = f();
            Model* model = temporary.get();
            const char* script = text.c_str();
            Runner* runner = model->runner();
            runner->run(1, script, "Doc script", &owner);
        }
        return 1;
    }
    catch (...) {
        return 0;
    }
}
