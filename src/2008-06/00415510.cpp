// from server: 15% by colin
extern "C" unsigned int __stdcall RegisterClipboardFormatA(const char *);
extern "C" int __stdcall IsClipboardFormatAvailable(unsigned int);
extern "C" int __stdcall OpenClipboard(void *);
extern "C" int __stdcall CloseClipboard(void);
extern "C" void * __stdcall GetClipboardData(unsigned int);
extern "C" void * __stdcall GlobalLock(void *);
extern "C" int __stdcall GlobalUnlock(void *);
extern "C" void __cdecl _invalid_parameter_noinfo(void);

extern const char clipboardName[];

struct String {
    char pad[0x1c];
    String(const char *);
    ~String();
    const char *c_str() const;
};

struct IStringStream {
    char pad[0x40];
    IStringStream(const String &, int);
    ~IStringStream();
};

struct Element {
    void *object;
    void *control;
};

struct Collection {
    char padding[12];
    Element *first;
    Element *last;
};

struct Data {
    char padding[0x154];
    Collection *collection;
};

struct Owner {
    Data *get();
};

struct PasteVerb {
    char padding[4];
    void *field4;
    Owner *owner;
    bool restricted;

    bool enabled();
};

bool PasteVerb::enabled()
{
    static unsigned int format;
    static unsigned int initialized;

    if (!(initialized & 1)) {
        initialized |= 1;
        format = RegisterClipboardFormatA(clipboardName);
    }

    if (IsClipboardFormatAvailable(format) != 1)
        return false;

    if (!restricted)
        return true;

    Data *data = owner ? owner->get() : 0;
    Collection *collection = data->collection;
    return collection->last - collection->first == 1;
}
