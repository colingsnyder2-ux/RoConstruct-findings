// from server: 74% by king_originala
struct String;

struct Ios {
    void *vtable;
    int reserved;
    int state;
    int flags;
    int precision;
};

struct Input {
    int *vbtable;
    int reserved;

    Ios *ios() {
        return reinterpret_cast<Ios *>(
            reinterpret_cast<char *>(this) + vbtable[1]);
    }

    operator void *() {
        return (ios()->state & 6) ? 0 : ios();
    }
};

struct Output {
    int *vbtable;
    int reserved;

    Ios *ios() {
        return reinterpret_cast<Ios *>(
            reinterpret_cast<char *>(this) + vbtable[1]);
    }

    bool fail() {
        return (ios()->state & 6) != 0;
    }
};

struct Stream;

extern void (__thiscall *stream_construct)(Stream *, int, int);
extern void (__thiscall *stream_destroy)(Stream *);
extern Output &(__cdecl *insert_string)(Output &, const String &);
extern Input &(__thiscall *extract_integer)(Input *, int &);
extern int (__thiscall *get_character)(Input *);

struct Stream {
    Input input;
    Output output;
    char storage[120];

    Stream() {
        stream_construct(this, 3, 1);
    }

    ~Stream() {
        stream_destroy(this);
    }
};

struct BadCast;
extern void (__thiscall *bad_cast_construct)(BadCast *, const char *);

struct BadCast {
    virtual ~BadCast();
    virtual const char *what() const;
    char *message;
    bool owns_message;

    BadCast(const char *text) {
        bad_cast_construct(this, text);
    }
};

extern const char string_type;
extern const char integer_type;

struct BadLexicalCast : BadCast {
    const void *source_type;
    const void *target_type;

    BadLexicalCast()
        : BadCast("bad lexical cast: source type value could not be interpreted as target"),
          source_type(&string_type),
          target_type(&integer_type) {
    }

    virtual ~BadLexicalCast();
};

__declspec(noreturn) void __cdecl throw_exception(const BadLexicalCast &);

int __cdecl lexical_integer(const String &source)
{
    int result;
    Stream stream;

    stream.input.ios()->flags &= ~1;
    stream.input.ios()->precision = 10;

    if (!insert_string(stream.output, source).fail() &&
        extract_integer(&stream.input, result) &&
        get_character(&stream.input) == -1)
        return result;

    BadLexicalCast error;
    throw_exception(error);
}
