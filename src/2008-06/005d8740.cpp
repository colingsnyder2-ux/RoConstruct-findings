// from server: 97% by king_originala
typedef unsigned long DWORD;

void* __cdecl operator new(unsigned int);

struct String {
    char storage[32];
    String(const char*);
    ~String();
};

extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

inline String::String(const char* text) {
    stringConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Base {
    DWORD words[77];
    Base();
    ~Base();
    void setValue(const String&);
};

struct Pointer {
    void* value;
    Pointer();
    ~Pointer();
};

inline Pointer::Pointer() : value(0) {}

struct Signal {
    struct Node {
        Signal* owner;
        Node(Signal*);
    };

    struct Owner {
        Node* value;
        Owner(Signal*);
        ~Owner();
    };

    Owner node;
    DWORD reserved[2];
    DWORD first;
    DWORD second;
    DWORD third;

    Signal();
    ~Signal();
};

inline Signal::Node::Node(Signal* signal) : owner(signal) {}

inline Signal::Owner::Owner(Signal* signal)
    : value(new Node(signal)) {}

inline Signal::Signal()
    : node(this), first(0), second(0), third(0) {}

struct S : Base {
    DWORD firstPointer;
    Pointer secondPointer;
    Signal signal;

    S();
    int initializeTables();
};

__forceinline int S::initializeTables() {
    words[0] = 0x83d544;
    words[4] = 0x83d538;
    words[5] = 0x83d530;
    words[8] = 0x83d528;
    words[9] = 0x83d518;
    words[17] = 0x83d508;
    words[25] = 0x83d4f8;
    words[33] = 0x83d4e8;
    words[41] = 0x83d4d8;
    words[49] = 0x83d4c8;
    words[76] = 0x83d4c0;
    return 0;
}

S::S()
    : Base(),
      firstPointer(initializeTables()),
      secondPointer(),
      signal() {
    setValue(String("FilteredSelection"));
}
