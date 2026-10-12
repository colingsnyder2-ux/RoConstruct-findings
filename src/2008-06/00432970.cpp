// from server: 91% by king_originala
struct CriticalSection {
    unsigned char data[24];
};

struct Payload {
    virtual void unused();
    virtual ~Payload();
};

struct Message {
    void* window;
    unsigned int message;
    unsigned int wParam;
    Payload* lParam;
    unsigned long time;
    long x;
    long y;
};

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(CriticalSection*);
    extern void (__stdcall *LeaveCriticalSection)(CriticalSection*) throw();
    extern int (__stdcall *PeekMessageA)(
        Message*, void*, unsigned int, unsigned int, unsigned int);
}

struct Lock {
    CriticalSection* section;
    bool owned;

    Lock(CriticalSection*);
    ~Lock();
};

inline Lock::Lock(CriticalSection* p) : section(p) {
    EnterCriticalSection(section);
    owned = true;
}

inline Lock::~Lock() {
    if (owned)
        LeaveCriticalSection(section);
}

struct S {
    unsigned char reserved0[4];
    void* window;
    unsigned char reserved1[36];
    CriticalSection section;

    int f(unsigned int, unsigned int, unsigned int, int*);
};

int S::f(unsigned int, unsigned int, unsigned int, int* result) {
    Lock lock(&section);
    Message message;
    int (__stdcall *peek)(
        Message*, void*, unsigned int, unsigned int, unsigned int) =
        PeekMessageA;

    while (peek(&message, window, 0x465, 0x465, 1))
        delete message.lParam;

    *result = 0;
    return 0;
}
