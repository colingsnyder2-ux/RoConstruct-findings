// from server: 92% by king_originala
struct String {
    unsigned int proxy;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
};

String operator+(const String&, const char*);
String operator+(const String&, const String&);

struct Text {
    unsigned int padding;
    String value;
};

struct Link {
    unsigned int padding;
    Text* text;
};

struct Source {
    unsigned int padding0;
    Text* suffix;
    unsigned int padding1;
    Link* prefix;
};

String __stdcall concatenate(const Source* source)
{
    return (source->prefix->text->value + "Critical Error")
         + source->suffix->value;
}
