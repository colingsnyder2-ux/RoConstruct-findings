// from server: 75% by king_originala
struct String;

extern "C" const char* (__thiscall *stringData)(const String*);
extern "C" void (__thiscall *destroyString)(String*);

struct String
{
    char storage[28];
    ~String() { destroyString(this); }
    const char* c_str() const { return stringData(this); }
};

struct StringHolder
{
    unsigned int prefix;
    String value;
};

struct Object
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual bool enabled();

    StringHolder* first;
    StringHolder* second;
};

struct Handle
{
    Object* object;
    String text();
};

struct Destination
{
    void write(int, const char*);
};

struct Provider
{
    virtual Destination* get();
};

extern Provider* provider;
extern const char formatText[];
extern String __cdecl format(const char*, ...);

void __cdecl f(Handle handle)
{
    if (handle.object->enabled())
    {
        const String& text = handle.text();
        const char* first = handle.object->first->value.c_str();
        const char* second = handle.object->second->value.c_str();
        const String& message = format(formatText, second, first, text.c_str());
        Destination* destination = provider ? provider->get() : 0;
        destination->write(0, message.c_str());
    }
}
