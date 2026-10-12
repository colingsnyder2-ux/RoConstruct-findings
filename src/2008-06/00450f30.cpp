// from server: 58% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
struct Input;

extern void (__thiscall* stringConstruct)(String*);
extern void (__thiscall* stringDestroy)(String*);
extern void (__thiscall* stringLoad)(String*, unsigned int);
extern const char* (__thiscall* stringBuffer)(const String*, int, int, int);
extern void (__thiscall* inputConstruct)(void*, const char*);
extern void (__thiscall* inputDestroy)(Input*);
extern const char extension[];

struct String {
    char* data;
    String();
    ~String();
    void load(unsigned int);
    const char* buffer(int, int, int) const;
};

inline String::String()
{
    stringConstruct(this);
}

inline String::~String()
{
    stringDestroy(this);
}

inline void String::load(unsigned int id)
{
    stringLoad(this, id);
}

inline const char* String::buffer(int first, int last, int flags) const
{
    return stringBuffer(this, first, last, flags);
}

struct Dialog {
    char storage[0x1e0];
    Dialog(int, const char*, const char*, unsigned long, const char*);
    ~Dialog();
    int run();
    String path() const;
};

struct Input {
    char storage[0x8c];
    Input(const char*);
    ~Input();
};

inline Input::Input(const char* name)
{
    inputConstruct(storage + 12, name);
}

inline Input::~Input()
{
    inputDestroy(this);
}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    long strong;
    long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 0) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
            control->destroy();
    }
}

struct Reader {
    char storage[12];
    Reader(Shared);
    ~Reader();
};

struct Document {
    const Shared get();
    void read(Input*, int);
};

struct CRobloxDoc {
    char padding[0x94];
    Document* document;
    void f();
};

void CRobloxDoc::f()
{
    String filter;
    filter.load(0xb8);
    Dialog dialog(1, extension, 0, 6, filter.buffer(0, 0, 1));
    if (dialog.run() == 1) {
        Input input(dialog.path().buffer(0x21, 0x40, 1));
        Reader reader(document->get());
        document->read(&input, 1);
    }
}
