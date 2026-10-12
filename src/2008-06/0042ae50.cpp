// from server: 95% by king_originala
struct String;
extern void (__thiscall* constructString)(String*, const char*);

struct String {
    char storage[28];
    String(const char* text) { constructString(this, text); }
    ~String();
};

struct Error {
    char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

extern "C" void __stdcall SysFreeString(unsigned short*);

struct BString {
    unsigned short* data;
    BString(const char*);
    ~BString() { SysFreeString(data); }
};

struct Interface;

struct InterfaceTable {
    long (__stdcall* query)(Interface*, const void*, Interface**);
    unsigned long (__stdcall* addRef)(Interface*);
    unsigned long (__stdcall* release)(Interface*);
    void* reserved0[6];
    long (__stdcall* getBody)(Interface*, Interface**);
    void* reserved1[47];
    long (__stdcall* putHtml)(Interface*, unsigned short*);
};

struct Interface {
    InterfaceTable* table;
};

extern Interface* __cdecl getDocument();
extern const unsigned char documentInterfaceId[16];

struct InterfacePtr {
    Interface* value;

    InterfacePtr() : value(0) {}

    InterfacePtr(Interface* source) : value(0)
    {
        if (source)
            source->table->query(source, documentInterfaceId, &value);
    }

    ~InterfacePtr()
    {
        if (value)
            value->table->release(value);
    }
};

void __stdcall f(const char* text)
{
    InterfacePtr document(getDocument());

    if (!document.value)
        throw Error(String("The HtmlDocument is not loaded"));

    InterfacePtr body;
    document.value->table->getBody(document.value, &body.value);

    Interface* element = body.value;
    if (!element)
        throw Error(String("The HtmlDocument does not contain a body"));

    element->table->putHtml(element, BString(text).data);
}
