// from server: 97% by king_originala
struct String;
extern const char clearBackpack[];
extern String *(__thiscall *stringConstructor)(String *, const char *);

struct String {
    char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

__forceinline String::String(const char *text)
{
    stringConstructor(this, text);
}

struct Base {
    unsigned char storage[8];
    Base(void *, String);
    virtual void dispatch();
};

struct SignalDesc : Base {
    void *instance;
    SignalDesc(void *);
    virtual void dispatch();
};

SignalDesc::SignalDesc(void *object)
    : Base(object ? static_cast<char *>(object) + 0x1c8 : 0,
           String(clearBackpack)),
      instance(object)
{
}
