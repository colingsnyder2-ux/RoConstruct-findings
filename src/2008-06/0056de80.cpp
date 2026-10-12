// from server: 97% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
    public:
        unsigned int allocator_state;
        union {
            T buffer[16];
            T* pointer;
        } storage;
        unsigned int length;
        unsigned int capacity;

        basic_string();
        ~basic_string();
        const T* c_str() const;
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class runtime_error {
        unsigned char data[40];
    public:
        runtime_error(const string&);
        runtime_error(const runtime_error&);
        ~runtime_error();
    };
}

extern void (__thiscall *string_destroy)(void*);

template<class T, class Traits, class Alloc>
inline std::basic_string<T, Traits, Alloc>::~basic_string()
{
    string_destroy(this);
}

template<class T, class Traits, class Alloc>
inline const T* std::basic_string<T, Traits, Alloc>::c_str() const
{
    if (capacity >= 16)
        return storage.pointer;
    return storage.buffer;
}

class type_info;
extern bool (__thiscall *type_equal)(const type_info*, const type_info&);

struct ContentId {
    unsigned int state;
    std::string text;

    ContentId();
};

struct Name {
    unsigned int unused;
    std::string text;
    const char* c_str() const;
};

inline const char* Name::c_str() const
{
    if (text.capacity >= 16)
        return text.storage.pointer;
    return text.storage.buffer;
}

struct Descriptor {
    unsigned int unused[2];
    const type_info* type;
    Name* name;
};

struct Placeholder {
    virtual void destroy();
    virtual const type_info& type() const;
};

struct Any {
    Placeholder* object;
    void assign(const ContentId&);
};

extern const type_info placeholder_type;
extern const type_info content_type;
extern const type_info string_type;

extern std::string* __cdecl string_cast(Any*);
extern ContentId* __cdecl content_cast(Any*);
extern bool __cdecl convert(const std::string*, ContentId*);
extern Descriptor* __cdecl content_descriptor();
extern std::string __cdecl format(const char*, ...);

struct S {
    Descriptor* descriptor;
    Any value;
    ContentId* f();
};

ContentId* S::f()
{
    bool (__thiscall *equal)(const type_info*, const type_info&) = type_equal;
    Any* p = &value;
    if (p) {
        const type_info& t = p->object ? p->object->type() : placeholder_type;
        if (equal(&t, content_type)) {
            ContentId* result = reinterpret_cast<ContentId*>(
                reinterpret_cast<char*>(p->object) + 4);
            if (result)
                return result;
        }
    }

    if (equal(&string_type, *descriptor->type)) {
        ContentId converted;
        if (convert(string_cast(p), &converted)) {
            p->assign(converted);
            descriptor = content_descriptor();
            return content_cast(p);
        }
    }

    throw std::runtime_error(
        format("Unable to cast %s to %s",
               descriptor->name->text.c_str(),
               content_descriptor()->name->c_str()));
}
