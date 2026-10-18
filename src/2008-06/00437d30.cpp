// from server: 54% by colin
struct String
{
    char data[28];
    const char* c_str() const;
};

extern const char* (__thiscall *stringCStr)(const String*);

struct S
{
    S* f(String);
};

S* S::f(String value)
{
    stringCStr(&value);
    return this;
}
