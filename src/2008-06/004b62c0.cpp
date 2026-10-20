// from server: 99% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_menubranchphase036987608f47cd68.cpp

// Candidate translation unit (score above; library headers required).
#include <intrin.h>
#include <boost/shared_ptr.hpp>
// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern unsigned long table0[];
extern unsigned long table10[];
extern unsigned long table14[];
extern unsigned long table20[];
extern unsigned long table24[];
extern unsigned long table44[];
extern unsigned long table64[];
extern unsigned long table84[];
extern unsigned long tablea4[];
extern unsigned long tablec4[];

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Source {
    char padding[0x2d1c];
    void* item1c;
    void* item20;
    void* item24;
    void* item28;
    void* item2c;
    void* item30;
    void* item34;
    void* item38;
    void* item3c;
    void* item40;
    void* item44;
    void* item48;
};

typedef boost::shared_ptr<Source> Shared;

struct Base {
    unsigned long words[0x158 / 4];
    void* value158;
    void* value15c;
    void* value160;
    void* value164;

    Base();
    ~Base();
    void* lookup(const char*);
    Base* attach(void*);
    void bind(const char*, void*);
};

struct Receiver : Base {
    Shared source;
    void* owner;
    void* value174;
    void* value178;

    Receiver(const Shared*, void*);
    const Shared& initializeTables(const Shared*);
};

inline const Shared& Receiver::initializeTables(const Shared* argument)
{
    words[0x00 / 4] = reinterpret_cast<unsigned long>(table0);
    words[0x10 / 4] = reinterpret_cast<unsigned long>(table10);
    words[0x14 / 4] = reinterpret_cast<unsigned long>(table14);
    words[0x20 / 4] = reinterpret_cast<unsigned long>(table20);
    words[0x24 / 4] = reinterpret_cast<unsigned long>(table24);
    words[0x44 / 4] = reinterpret_cast<unsigned long>(table44);
    words[0x64 / 4] = reinterpret_cast<unsigned long>(table64);
    words[0x84 / 4] = reinterpret_cast<unsigned long>(table84);
    words[0xa4 / 4] = reinterpret_cast<unsigned long>(tablea4);
    words[0xc4 / 4] = reinterpret_cast<unsigned long>(tablec4);
    return *argument;
}

Receiver::Receiver(const Shared* argument, void* other)
    : Base(), source(initializeTables(argument)),
      owner(other), value174(0), value178(0)
{
    value160 = lookup("Ping");
    Base* initial = attach(argument->get()->item40);
    initial->bind("Bandwidth Exceeded",
                  static_cast<char*>(other) + 0xc4);

    value15c = lookup("Packet Loss");
    attach(argument->get()->item3c);
    attach(argument->get()->item44);
    attach(argument->get()->item48);

    _ReadWriteBarrier();
    Base* branch = attach(argument->get()->item1c);
    branch->attach(argument->get()->item20);
    branch->attach(argument->get()->item28);

    Base* nested = branch->attach(argument->get()->item30);
    nested->attach(argument->get()->item34);
    nested->attach(argument->get()->item38);

    branch->attach(argument->get()->item24);
    branch->attach(argument->get()->item2c);

    value164 = branch->lookup("Instance size (In)");
    value158 = branch->lookup("Waiting Refs");
}
