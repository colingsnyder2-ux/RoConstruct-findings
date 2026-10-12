// from server: 81% by king_originala
struct String {
    char data[28];

    String(const char*);
    String(const String&);
};

extern void (__thiscall *constructText)(String*, const char*);
extern void (__thiscall *constructCopy)(String*, const String&);
extern const char authoring[];

inline String::String(const char* text)
{
    constructText(this, text);
}

inline String::String(const String& source)
{
    constructCopy(this, source);
}

struct StringVector {
    char reserved[12];
    String* begin;
    String* end;
    String* capacity;

    String& at(unsigned int index);
};

struct Settings {
    char reserved[136];
    StringVector strings;

    String get(const int& index);
};

String Settings::get(const int& index)
{
    int value = index;
    volatile unsigned int flag = 0;

    if (value < 0)
        return String(authoring);

    StringVector* vector = &strings;
    if (static_cast<unsigned int>(value) >=
        static_cast<unsigned int>(vector->end - vector->begin))
        return String(authoring);

    return String(vector->at(static_cast<unsigned int>(value)));
}
