// from server: 56% by atomic.potato
typedef int String;

struct StringObject
{
    int value;
};

extern "C" void __stdcall copy_string(StringObject*, const StringObject*);

struct S
{
    StringObject value;
    StringObject f(StringObject*);
    char padding[0x150];
    StringObject source;
};

StringObject S::f(StringObject* p)
{
    copy_string(&source, p);
    p->value = source.value;
    return *p;
}
