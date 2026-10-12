// from server: 97% by king_originala
typedef void (__thiscall *StringConstructor)(void *, const char *);
extern StringConstructor stringConstructor;

struct String {
    char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

inline String::String(const char *text)
{
    stringConstructor(this, text);
}

struct Context {
    char padding[456];
    char selection;
};

struct Verb {
    virtual void execute();
    unsigned int data[2];
    Verb(void *, String);
};

struct PasteVerb : Verb {
    Context *context;
    bool pasteInto;

    virtual void execute();
    PasteVerb(Context *, bool);
};

PasteVerb::PasteVerb(Context *owner, bool into)
    : Verb(owner ? &owner->selection : 0,
           String(into ? "PasteInto" : "Paste")),
      context(owner),
      pasteInto(into)
{
}
