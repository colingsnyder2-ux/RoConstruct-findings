// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    unsigned char allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    String(const String&);
    ~String();
    unsigned int rfind(const char*, unsigned int, unsigned int) const;
    String& erase(unsigned int, unsigned int);
    String& append(const char*);
    const char* c_str() const;
};

extern void (__thiscall *string_copy)(String*, const String&);
extern void (__thiscall *string_destroy)(String*);
extern unsigned int (__thiscall *string_rfind)(
    const String*, const char*, unsigned int, unsigned int);
extern String& (__thiscall *string_erase)(String*, unsigned int, unsigned int);
extern String& (__thiscall *string_append)(String*, const char*);
extern unsigned int* string_npos;

inline String::String(const String& source)
{
    string_copy(this, source);
}

inline String::~String()
{
    string_destroy(this);
}

inline unsigned int String::rfind(
    const char* text, unsigned int position, unsigned int count) const
{
    return string_rfind(this, text, position, count);
}

inline String& String::erase(unsigned int position, unsigned int count)
{
    return string_erase(this, position, count);
}

inline String& String::append(const char* text)
{
    return string_append(this, text);
}

inline const char* String::c_str() const
{
    const char* result = storage.pointer;
    if (capacity < 16)
        result = storage.buffer;
    return result;
}

struct Settings {
    unsigned char padding[36];
    String path;
};

struct Provider {
    virtual Settings* get();
};

extern Provider* provider;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->references, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weakReferences, -1) == 0)
                p->destroy();
        }
    }
}

extern Shared __cdecl get_logger();
extern void __cdecl report(void*, int, const char*, ...);
extern unsigned int __cdecl get_time();

struct File;
extern File* (__cdecl *open_file)(const char*, const char*);
extern int (__cdecl *format_text)(char*, const char*, ...);
extern const char file_mode[];
extern const char packet_format[];
extern const char logging_message[];
extern const char failure_message[];

struct Base {
    Base();
    virtual ~Base();
    unsigned char padding[520];
};

struct S : Base {
    File* file;
    S(int);
};

S::S(int)
    : Base(), file(0)
{
    String path((provider ? provider->get() : 0)->path);
    char separator = '\\';
    path.erase(path.rfind(&separator, *string_npos, 1) + 1, *string_npos);

    char name[256];
    format_text(name, packet_format, get_time());
    path.append(name);

    file = open_file(path.c_str(), file_mode);
    if (file)
        report(get_logger().pointer, 1, logging_message, path.c_str());
    else
        report(get_logger().pointer, 2, failure_message, path.c_str());
}
