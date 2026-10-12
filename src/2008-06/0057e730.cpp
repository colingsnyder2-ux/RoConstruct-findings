// from server: 94% by king_originala
struct String;
extern String* (__thiscall *stringCopy)(String*, const String*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const String& s);
    ~String();
};

inline String::String(const String& s) {
    stringCopy(this, &s);
}

inline String::~String() {
    stringDestroy(this);
}

struct Owner {
    char padding[0x1c8];
    char context[0x3c];
    void* value;
};

struct Reference {
    void* object;
    void* control;
    Reference(void*);
    ~Reference();
};

extern void __cdecl initializeReference(Reference*, void*);

inline Reference::Reference(void* p) {
    initializeReference(this, p);
}

struct Base {
    virtual void invoke();
    unsigned long data[2];
    Base(void*, String);
    ~Base();
};

struct ClearBackpack : Base {
    Reference reference;
    Owner* owner;
    unsigned long first;
    unsigned long second;
    Owner* target;

    ClearBackpack(String, Owner*);
    virtual void invoke();
};

ClearBackpack::ClearBackpack(String name, Owner* p)
    : Base(p ? p->context : 0, name),
      reference(p->value),
      owner(p),
      first(0),
      second(0),
      target(p) {
}
