// from server: 88% by king_originala
struct String {
    char storage[28];

    String(const char *);
    String(const String &);
    ~String();
};

String operator+(const String &, const char *);
String operator+(const String &, const String &);

struct Instance {
    char padding[0x104];
    Instance *parent;
    char reserved[8];
    String name;

    String fullName();
};

String Instance::fullName()
{
    if (parent) {
        if (parent->parent)
            return parent->fullName() + "." + name;
        return name;
    }
    return "";
}
