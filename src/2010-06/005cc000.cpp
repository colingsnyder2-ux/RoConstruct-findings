// from server: 54% by atomic.potato
struct String
{
    String(const String&);
};

extern "C" void __stdcall string_construct(String*, const String*);

struct S
{
    S& f(const String&);
};

S& S::f(const String& value)
{
    String* destination = (String*)((char*)this + 0xb60);
    string_construct(destination, &value);
    return *this;
}
