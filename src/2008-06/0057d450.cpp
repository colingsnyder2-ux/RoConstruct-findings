// from server: 98% by king_originala
struct String;
extern void (__thiscall *constructString)(String*, const char*);
extern const char signalName[];

struct String {
    char storage[28];

    String(const char*);
    String(const String&);
};

__forceinline String::String(const char* text)
{
    String* volatile destination = this;
    constructString(this, text);
}

struct Base {
    virtual void slot();
    char storage[8];

    Base(void*, String);
};

struct SignalDesc : Base {
    void* owner;

    virtual void slot();
    SignalDesc(void*);
};

SignalDesc::SignalDesc(void* object)
    : Base(object ? static_cast<char*>(object) + 0x1c8 : 0,
           String(signalName)),
      owner(object)
{
}
