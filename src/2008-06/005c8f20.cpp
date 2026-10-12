// from server: 79% by king_originala
struct String;

extern void (__thiscall *stringDestroy)(String*);
extern String& (__thiscall *stringAssign)(String*, const String&);

struct String {
    unsigned char storage[28];
    ~String();
    String& operator=(const String&);
};

__forceinline String::~String()
{
    stringDestroy(this);
}

__forceinline String& String::operator=(const String& other)
{
    return stringAssign(this, other);
}

extern String __cdecl formatText(const char*, char*);

struct S {
    unsigned char reserved[0x130];
    double time;
    String text;
};

void __cdecl f(S* object, double time, const char* format, ...)
{
    String temporary = formatText(format, (char*)&format + sizeof(format));
    object->time = time;
    object->text = temporary;
}
