// from server: 98% by king_originala
typedef void* (__thiscall *StringCopy)(void*, const void*);
extern StringCopy string_copy;

struct String {
    unsigned int storage[7];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other)
{
    string_copy(this, &other);
}

struct Tail {
    Tail(const Tail&);
};

struct SignalDesc {
    unsigned int first;
    unsigned int second;
    String name;
    Tail tail;

    SignalDesc(const SignalDesc&);
};

SignalDesc::SignalDesc(const SignalDesc& other)
    : first(other.first),
      second(other.second),
      name(other.name),
      tail(other.tail)
{
}
