// from server: 50% by atomic.potato
typedef unsigned int DWORD;

struct String {
    String(const String&);
};

extern "C" void sub_009ea40c(String*, const String*);

struct S {
    int f(const String&);
};

int S::f(const String& value)
{
    String* destination = (String*)((char*)this + 0x3c);
    sub_009ea40c(destination, &value);
    return 0;
}
