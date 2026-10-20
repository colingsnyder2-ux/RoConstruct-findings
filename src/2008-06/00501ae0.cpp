// from server: 98% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>

extern bool enabled;
extern const char emptyText[];

extern double __cdecl queryFloat();
extern unsigned __int64 __cdecl queryCounter();
extern unsigned __cdecl queryFirst();
extern unsigned __cdecl querySecond();
extern const std::string &__cdecl queryFirstString();
extern const std::string &__cdecl querySecondString();

struct MemoryStatus {
    unsigned length;
    unsigned load;
    int totalPhysical;
    unsigned availablePhysical;
    unsigned totalPageFile;
    unsigned availablePageFile;
    unsigned totalVirtual;
    unsigned availableVirtual;
};

extern "C" __declspec(dllimport) void __stdcall GlobalMemoryStatus(MemoryStatus *);

inline int queryPhysicalMegabytes()
{
    MemoryStatus status;
    GlobalMemoryStatus(&status);
    return status.totalPhysical / 1048576;
}

extern void __cdecl initializeBlock(void *);
extern void __cdecl destroyBlock(void *);
extern void __cdecl initializeTail(void *);

struct Block {
    unsigned char storage[28];
    Block();
    ~Block();
};

inline Block::Block()
{
    initializeBlock(this);
}

inline Block::~Block()
{
    destroyBlock(this);
}

struct Tail {
    unsigned char storage[4];
    Tail();
};

inline Tail::Tail()
{
    initializeTail(this);
}

struct S {
    float value;
    unsigned counter;
    unsigned first;
    unsigned second;
    std::string firstString;
    std::string secondString;
    Block block;
    int physicalMegabytes;
    Tail tail;

    S();
};

S::S()
    : value(enabled ? queryFloat() : 0.0),
      counter(static_cast<unsigned>(queryCounter() >> 20)),
      first(queryFirst()),
      second(querySecond()),
      firstString(enabled ? queryFirstString() : std::string(emptyText)),
      secondString(enabled ? querySecondString() : std::string(emptyText)),
      block(),
      physicalMegabytes(queryPhysicalMegabytes()),
      tail()
{
}
