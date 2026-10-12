// from server: 92% by king_originala
struct Variant {
    unsigned long data[4];
};

struct String {
    unsigned char data[28];
};

struct Converted {
    void* data;
};

struct Guard {
    unsigned long saved;
    unsigned long* target;
    void* resource;
    int owned;
    Guard(void*);
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual void slot7() = 0;
    virtual void slot8() = 0;
    virtual void slot9() = 0;
    virtual void slot10() = 0;
    virtual void slot11() = 0;
    virtual void slot12() = 0;
    virtual int __stdcall invoke(const unsigned short*, Variant, Variant,
                                 Variant, Variant, unsigned long) = 0;

    int fallback(const char*, Variant, Variant, Variant, Variant, unsigned long);
};

extern "C" void* __cdecl getContext();
extern "C" void __stdcall releaseResource(unsigned long, void*);
extern "C" bool __cdecl testString(const String*);

typedef Converted* (__thiscall *ConvertConstructor)(Converted*, const unsigned short*);
typedef const char* (__thiscall *ConvertAccess)(Converted*);
typedef void (__thiscall *ConvertDestructor)(Converted*);
typedef void (__thiscall *StringConstructor)(String*, const char*);
typedef const char* (__thiscall *StringAccess)(const String*);
typedef void (__thiscall *StringDestructor)(String*);

extern ConvertConstructor constructConverted;
extern ConvertAccess accessConverted;
extern ConvertDestructor destroyConverted;
extern StringConstructor constructString;
extern StringAccess accessString;
extern StringDestructor destroyString;

int __stdcall function(Interface* object, const unsigned short* text,
                       Variant a, Variant b, Variant c, Variant d,
                       unsigned long flags)
{
    Guard guard(getContext());
    String string;
    Converted* temporary = reinterpret_cast<Converted*>(&text);
    const unsigned short* original = text;

    constructString(&string, accessConverted(constructConverted(temporary, original)));
    destroyConverted(temporary);

    int result;
    if (testString(&string))
        result = object->invoke(original, a, b, c, d, flags);
    else
        result = object->fallback(accessString(&string), a, b, c, d, flags);

    destroyString(&string);
    if (guard.target)
        guard.target[1] = guard.saved;
    if (guard.owned)
        releaseResource(0, guard.resource);
    return result;
}
