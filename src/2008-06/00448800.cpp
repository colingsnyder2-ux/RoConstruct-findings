// from server: 92% by king_originala
struct String;

extern void (__thiscall *stringConstruct)(String*);
extern void (__thiscall *stringDestroy)(String*);
extern const char* (__thiscall *stringData)(const String*);
extern unsigned int (__thiscall *stringSize)(const String*);

struct String
{
    char storage[28];
    String();
    ~String();
};

inline String::String()
{
    stringConstruct(this);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Name;
extern const Name& __cdecl lookupName(const char*);

enum EnumValue
{
    EnumValueZero = 0
};

struct Value
{
    bool isString() const;
    bool getString(String&) const;
    bool getInteger(int&) const;
};

struct Element
{
    char padding[16];
    Value value;
    bool isNull() const;
};

struct EnumDescriptor
{
    bool convert(const Name&, int&) const;
};

struct Setter
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const EnumValue&);
};

struct S
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual bool setEmpty(void*, int);

    char padding[24];
    Setter* setter;
    EnumDescriptor* descriptor;

    void read(void*, Element*, void*);
};

void S::read(void* object, Element* element, void*)
{
    if (element->isNull())
        return;

    if (element->value.isString())
    {
        String text;
        if (element->value.getString(text))
        {
            int value;
            const char* name = stringData(&text);
            EnumDescriptor* enumDescriptor = descriptor;
            if (enumDescriptor->convert(lookupName(name), value))
            {
                EnumValue converted = static_cast<EnumValue>(value);
                setter->set(object, converted);
                return;
            }

            if (stringSize(&text) == 0 && setEmpty(object, 0))
                return;
        }
    }

    int value;
    if (element->value.getInteger(value))
    {
        EnumValue converted = static_cast<EnumValue>(value);
        setter->set(object, converted);
    }
}
