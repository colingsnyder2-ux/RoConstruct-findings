// from server: 96% by king_originala
extern void* copyVerbVtable[];

struct String;
extern String* (__thiscall *stringConstructor)(String*, const char*);

struct String {
    char storage[28];
    String(const char*);
    String(const String&);
    ~String();
};

inline String::String(const char* text)
{
    stringConstructor(this, text);
}

struct Verb {
    void** vtable;
    Verb(void*, void*, String);
};

struct CopyVerb : Verb {
    CopyVerb(void*);
};

CopyVerb::CopyVerb(void* object)
    : Verb(object ? static_cast<char*>(object) + 0x1c8 : 0,
           object, String("Copy"))
{
    vtable = copyVerbVtable;
}
