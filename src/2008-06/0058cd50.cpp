// from server: 82% by king_originala
struct String;

extern void (__thiscall *string_construct)(String *);
extern void (__thiscall *string_construct_text)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);
extern String &(__thiscall *string_append_char)(String *, char);
extern String &(__thiscall *string_append_code)(String *, int);
extern String &(__thiscall *string_append_string)(String *, const String &);
extern String (__thiscall *string_substr)(const String *, unsigned, unsigned);
extern bool (__cdecl *string_equal)(const String &, const char *);
extern String (__cdecl *string_prefix)(const char *, const String &);
extern String (__cdecl *string_suffix)(const String &, const char *);
extern const unsigned *string_npos;
extern void (__cdecl *invalid_parameter)();
extern int (__cdecl *parse_integer)(const char *);

struct String {
    unsigned allocator;
    union {
        char buffer[16];
        char *pointer;
    };
    unsigned length;
    unsigned capacity;

    String();
    String(const char *);
    ~String();
    const char *c_str() const;
    char operator[](unsigned) const;
    String &operator+=(char);
    String &operator+=(const String &);
    String substr(unsigned, unsigned) const;
};

__forceinline String::String() {
    string_construct(this);
}

__forceinline String::String(const char *text) {
    string_construct_text(this, text);
}

__forceinline String::~String() {
    string_destroy(this);
}

__forceinline const char *String::c_str() const {
    const char *text = pointer;
    if (capacity < 16)
        text = buffer;
    return text;
}

__forceinline char String::operator[](unsigned index) const {
    if (index > length)
        invalid_parameter();
    return c_str()[index];
}

__forceinline String &String::operator+=(char value) {
    return string_append_char(this, value);
}

__forceinline String &String::operator+=(const String &value) {
    return string_append_string(this, value);
}

__forceinline String String::substr(unsigned offset, unsigned count) const {
    return string_substr(this, offset, count);
}

struct ParseError {
    char storage[40];
    ParseError(const String &);
};

extern unsigned char error_type;
extern "C" __declspec(noreturn) void __cdecl raise_error(void *, void *);

String decode(String input)
{
    String result;
    unsigned index = 0;
    char character;
    bool (__cdecl *equal)(const String &, const char *) = string_equal;

    while (index < input.length) {
        character = input[index++];
        if (character == '&') {
            String entity;
            while (index < input.length) {
                character = input[index++];
                if (character == ';')
                    break;
                entity += character;
            }

            if (equal(entity, "lt"))
                result += '<';
            else if (equal(entity, "gt"))
                result += '>';
            else if (equal(entity, "amp"))
                result += '&';
            else if (equal(entity, "quot"))
                result += '"';
            else if (equal(entity, "apos"))
                result += '\'';
            else if (equal(entity, "nbsp"))
                result += ' ';
            else if (entity.c_str()[0] == '#') {
                if (entity.length < 2) {
                    String message("bad XML. No character code following #");
                    ParseError error(message);
                    raise_error(&error, &error_type);
                }
                if (entity[1] == 'x') {
                    String message("Unable to parse hexidecimal character code");
                    ParseError error(message);
                    raise_error(&error, &error_type);
                }
                string_append_code(&result,
                    parse_integer(entity.substr(1, *string_npos).c_str()));
            } else {
                result += string_suffix(string_prefix("&", entity), ";");
            }
        } else {
            result += character;
        }
    }
    return result;
}
