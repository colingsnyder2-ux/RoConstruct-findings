// from server: 63% by king_originala
struct Block16 { unsigned long value[4]; };

struct String
{
    unsigned char data[28];
    String();
    String(const char*);
    ~String();
    const char* c_str() const;
};

struct Text
{
    unsigned char data[4];
    Text(const char*);
    ~Text();
    const char* get() const;
};

struct Output
{
    unsigned char data[184];
    Output(int, bool);
    ~Output();
    String str() const;
};

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);
extern const char* (__thiscall *string_data)(const String*);
extern void (__thiscall *text_construct)(Text*, const char*);
extern void (__thiscall *text_destroy)(Text*);
extern const char* (__thiscall *text_data)(const Text*);
extern void (__thiscall *output_construct)(Output*, int, bool);
extern void (__thiscall *output_destroy)(Output*);
extern String* (__thiscall *output_string)(const Output*, String*);

inline String::String() {}
inline String::String(const char* p) { string_construct(this, p); }
inline String::~String() { string_destroy(this); }
inline const char* String::c_str() const { return string_data(this); }
inline Text::Text(const char* p) { text_construct(this, p); }
inline Text::~Text() { text_destroy(this); }
inline const char* Text::get() const { return text_data(this); }
inline Output::Output(int mode, bool initialize)
{
    output_construct(this, mode, initialize);
}
inline Output::~Output() { output_destroy(this); }
inline String Output::str() const
{
    String result;
    output_string(this, &result);
    return result;
}

extern void* __cdecl local_scope();
extern void* __cdecl current_context();
extern void __stdcall restore_context(int, void*);

struct Context
{
    unsigned long saved;
    unsigned long* target;
    void* token;
    int active;
    Context(void*);
    ~Context();
};

inline Context::~Context()
{
    if (target)
        target[1] = saved;
    if (active)
        restore_context(0, token);
}

struct Guid
{
    String text;
    void* scope;
    Guid(const char*);
};

inline Guid::Guid(const char* p) : text(p), scope(local_scope()) {}

struct StreamBase { virtual ~StreamBase(); };
struct Stream : virtual StreamBase {};

struct TemporaryOwner
{
    mutable Stream* pointer;
    ~TemporaryOwner();
};

struct Owner
{
    Stream* pointer;
    Owner(const TemporaryOwner&);
    ~Owner();
};

inline TemporaryOwner::~TemporaryOwner()
{
    if (pointer)
        delete pointer;
}

inline Owner::Owner(const TemporaryOwner& other) : pointer(other.pointer)
{
    other.pointer = 0;
}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

struct Source
{
    Source* resolve();
    TemporaryOwner open(Guid);
};

struct Workspace
{
    unsigned char padding[36];
    Source* source;
    int submit(const char*, Block16, Block16, Block16, Block16, int);
};

extern void __cdecl copy_stream(Stream*, Output*, int);

int __cdecl function(Workspace* workspace, const char* text,
                     Block16 a, Block16 b, Block16 c, Block16 d, int flags)
{
    try
    {
        Context context(current_context());
        Output output(2, true);
        {
            Text input(text);
            Owner stream((workspace->source
                ? workspace->source->resolve() : 0)->open(Guid(input.get())));
            copy_stream(stream.pointer, &output, 4096);
        }
        return workspace->submit(output.str().c_str(), a, b, c, d, flags);
    }
    catch (...)
    {
        return -2147467259;
    }
}
