// from server: 91% by king_originala
struct String;
extern void (__thiscall *stringConstruct)(String *);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String();
    ~String();
};

inline String::String() { stringConstruct(this); }
inline String::~String() { stringDestroy(this); }

struct Value {
    bool isString() const;
    bool getString(String *) const;
    bool getInteger(int *) const;
};

struct Element {
    char padding[16];
    Value value;
    bool isEmpty() const;
};

struct Name;
extern const Name &__cdecl getName(const char *);

struct Enumeration {
    bool lookup(const Name &, int *) const;
};

enum EnumValue { EnumZero = 0 };

struct Setter;
struct SetterTable {
    void *padding[3];
    void (__thiscall *set)(Setter *, void *, const EnumValue &);
};

struct Setter {
    SetterTable *table;
};

struct S;
struct STable {
    void *padding[13];
    bool (__thiscall *setDefault)(S *, void *, int);
};

struct S {
    STable *table;
    char padding[24];
    Setter *setter;
    Enumeration *enumeration;

    void read(void *, Element *, int);
};

void S::read(void *object, Element *element, int unused)
{
    if (element->isEmpty())
        return;

    const Value &value = element->value;
    if (value.isString()) {
        String text;
        if (value.getString(&text)) {
            int result;
            const char *characters = text.storage.pointer;
            if (text.capacity < 16)
                characters = text.storage.buffer;
            Enumeration *mapping = enumeration;
            if (mapping->lookup(getName(characters), &result)) {
                EnumValue converted = static_cast<EnumValue>(result);
                setter->table->set(setter, object, converted);
                return;
            }
            if (text.length == 0 && table->setDefault(this, object, 0))
                return;
        }
    }

    int result;
    if (value.getInteger(&result)) {
        EnumValue converted = static_cast<EnumValue>(result);
        setter->table->set(setter, object, converted);
    }
}
