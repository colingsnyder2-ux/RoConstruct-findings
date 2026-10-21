// from server: 98% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <vector>
typedef unsigned long DWORD;

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long *);

struct Log {
    DWORD data[2];
    Log();
    ~Log();
};

struct Counts {
    DWORD first;
    DWORD second;
    Counts() : first(0), second(0) {}
    ~Counts();
};

struct __declspec(novtable) HeadBase {
    virtual void dispatch();
    unsigned char flag;
    Log log;
    __forceinline HeadBase() : flag(0) {}
};

struct Interface {
    virtual void interfaceSlot();
    __forceinline Interface() {}
    ~Interface();
};

struct SignalFirst {
    virtual void first();
    DWORD data[2];
};

struct SignalSecond {
    virtual void second();
};

struct Signal : SignalFirst, SignalSecond {
    Signal();
    ~Signal();
};

struct Slot {
    virtual void slot();
    DWORD data[7];
    Slot();
    ~Slot();
};

template <int N>
struct __declspec(novtable) SlotN : Slot {
    __forceinline SlotN() {}
};

struct __declspec(novtable) Head : HeadBase, Interface, Signal,
    SlotN<0>, SlotN<1>, SlotN<2>, SlotN<3>, SlotN<4>, SlotN<5> {
    __forceinline Head() {}
};

struct String {
    DWORD data[7];
    String(const char *);
    ~String();
};

typedef String *(__thiscall *StringConstructor)(String *, const char *);
extern StringConstructor constructString;

inline String::String(const char *text)
{
    constructString(this, text);
}

struct Empty {
};

struct Triple : Empty {
    DWORD first;
    DWORD second;
    DWORD third;
    Triple() : first(0), second(0), third(0) {}
    ~Triple();
};

struct S : Counts, Head {
    std::vector<void *> container;
    Triple values;
    String name;
    unsigned char enabled;

    static volatile long instances;

    S(const char *);
    virtual void dispatch();
};

S::S(const char *text) : name(text)
{
    enabled = 1;
    InterlockedIncrement(&instances);
}
