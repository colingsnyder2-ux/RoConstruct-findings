// from server: 97% by king_originala
class type_info {};

typedef bool (__thiscall *TypeEqual)(const type_info*, const type_info&);
extern TypeEqual type_equal;

struct Color {
    unsigned value;
};

struct String {
    unsigned allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;

    ~String();
};

namespace std {
    class runtime_error {
        char storage[36];
    public:
        runtime_error(const String&);
        runtime_error(const runtime_error&);
        virtual ~runtime_error();
    };
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info& type() const;
};

struct Any {
    Placeholder* content;
    void assign(const Color&);
};

struct Name {
    unsigned unused;
    String text;
};

struct Descriptor {
    unsigned unused[2];
    const type_info* type;
    Name* name;
};

extern const type_info emptyType;
extern const type_info colorType;
extern const type_info stringType;

extern Color* __cdecl color_cast(Any*);
extern String* __cdecl string_cast(Any*);
extern bool __cdecl parse_color(const String*, Color*);
extern Descriptor* __cdecl color_descriptor();
extern String __cdecl format_message(const char*, ...);

struct S {
    Descriptor* descriptor;
    Any value;
    void convert();
};

void S::convert()
{
    TypeEqual equal = type_equal;
    Any* source = &value;
    if (source) {
        const type_info& type =
            source->content ? source->content->type() : emptyType;
        if (equal(&type, colorType)) {
            Color* color = reinterpret_cast<Color*>(
                reinterpret_cast<char*>(source->content) + 4);
            if (color)
                return;
        }
    }

    if (equal(&stringType, *descriptor->type)) {
        Color color;
        if (parse_color(string_cast(source), &color)) {
            source->assign(color);
            descriptor = color_descriptor();
            color_cast(source);
            return;
        }
    }

    const Name* destination = color_descriptor()->name;
    const char* destinationName = destination->text.capacity >= 16
        ? destination->text.pointer : destination->text.buffer;
    const String& original = descriptor->name->text;
    const char* originalName = original.capacity >= 16
        ? original.pointer : original.buffer;

    throw std::runtime_error(
        format_message("Unable to cast %s to %s",
                       originalName, destinationName));
}
