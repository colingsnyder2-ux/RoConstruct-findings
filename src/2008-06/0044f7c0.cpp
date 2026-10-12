// from server: 89% by king_originala
struct String;

extern "C" void (__thiscall *StringConstruct)(String *);
extern "C" void (__thiscall *StringDestroy)(String *) throw();
extern "C" int (__thiscall *StringLoad)(String *, unsigned int);
extern "C" const char *(__thiscall *StringText)(const String *);
extern "C" void (__stdcall *SysFreeString)(wchar_t *);
extern const char extension[];

struct String {
    char *data;

    String();
    ~String() throw();
    int load(unsigned int);
};

inline String::String()
{
    StringConstruct(this);
}

inline String::~String() throw()
{
    StringDestroy(this);
}

inline int String::load(unsigned int id)
{
    return StringLoad(this, id);
}

struct Dialog {
    char storage[0x1e0];

    Dialog(int, const char *, const char *, unsigned long,
           const char *, void *, unsigned long, int);
    ~Dialog();
    int run();
    String path() const;
};

struct WideString {
    wchar_t *data;

    WideString(const char *);
    ~WideString();
};

inline WideString::~WideString()
{
    SysFreeString(data);
}

struct Interface;

struct InterfaceTable {
    void *reserved[8];
    long (__stdcall *insert)(Interface *, wchar_t *);
};

struct Interface {
    InterfaceTable *table;
};

struct PasteVerb {
    char padding[0x94];
    Interface *object;

    void execute();
};

void PasteVerb::execute()
{
    String filter;
    filter.load(184);

    Dialog dialog(0, extension, 0, 6, StringText(&filter), 0, 0, 1);
    if (dialog.run() == 1) {
        WideString filename(StringText(&dialog.path()));
        object->table->insert(object, filename.data);
    }
}
