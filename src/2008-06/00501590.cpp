// from server: 90% by king_originala
struct String;

extern void (__thiscall *string_default)(String *);
extern void (__thiscall *string_from_text)(String *, const char *);
extern void (__thiscall *string_copy)(String *, const String &);
extern void (__thiscall *string_destroy)(String *);

extern const char processor_name_path[];
extern const char fallback_name[];

struct String {
    unsigned char storage[28];

    String();
    String(const char *);
    String(const String &);
    ~String();
};

__forceinline String::String()
{
    string_default(this);
}

__forceinline String::String(const char *text)
{
    string_from_text(this, text);
}

__forceinline String::String(const String &other)
{
    string_copy(this, other);
}

__forceinline String::~String()
{
    string_destroy(this);
}

extern bool __cdecl read_processor_name(const String &, String &);

String __cdecl get_processor_name()
{
    String value;
    if (read_processor_name(String(processor_name_path), value))
        return value;
    return String(fallback_name);
}
