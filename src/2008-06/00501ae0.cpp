// from server: 86% by king_originala
extern bool enabled;
extern const char emptyText[];

struct String;

extern String *(__thiscall *constructText)(String *, const char *);
extern String *(__thiscall *copyText)(String *, const String &);
extern void (__thiscall *destroyText)(String *);

struct String {
    unsigned char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

inline String::String(const char *text)
{
    constructText(this, text);
}

inline String::String(const String &text)
{
    copyText(this, text);
}

inline String::~String()
{
    destroyText(this);
}

extern double __cdecl queryFloat();
extern unsigned __int64 __cdecl queryCounter();
extern unsigned __cdecl queryFirst();
extern unsigned __cdecl querySecond();
extern const String &__cdecl queryFirstString();
extern const String &__cdecl querySecondString();

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

extern "C" void (__stdcall *GlobalMemoryStatus)(MemoryStatus *);

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
    String firstString;
    String secondString;
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
      firstString(enabled ? queryFirstString() : String(emptyText)),
      secondString(enabled ? querySecondString() : String(emptyText)),
      block(),
      physicalMegabytes(queryPhysicalMegabytes()),
      tail()
{
}
