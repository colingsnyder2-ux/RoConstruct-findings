// from server: 81% by king_originala
typedef unsigned short WideChar;

extern "C" void __stdcall SysFreeString(WideChar*);

struct Conversion;
struct String;

extern Conversion* (__thiscall* conversionConstruct)(Conversion*, WideChar*);
extern const char* (__thiscall* conversionText)(Conversion*);
extern void (__thiscall* conversionDestroy)(Conversion*);
extern String* (__thiscall* stringConstruct)(String*, const char*);
extern void (__thiscall* stringDestroy)(String*);

struct Conversion {
    unsigned int storage[3];

    Conversion(WideChar*);
    ~Conversion();
    const char* text();
};

inline Conversion::Conversion(WideChar* value) {
    conversionConstruct(this, value);
}

inline Conversion::~Conversion() {
    conversionDestroy(this);
}

inline const char* Conversion::text() {
    return conversionText(this);
}

struct String {
    unsigned int storage[7];

    String(const char*);
    ~String();
};

inline String::String(const char* value) {
    stringConstruct(this, value);
}

inline String::~String() {
    stringDestroy(this);
}

struct WideString {
    WideChar* value;

    WideString();
    ~WideString();
};

inline WideString::WideString() : value(0) {}

inline WideString::~WideString() {
    SysFreeString(value);
}

struct Source;

struct SourceTable {
    void* entries[10];
    void (__stdcall* get)(Source*, WideChar**);
};

struct Source {
    SourceTable* table;
};

struct Node {
    unsigned int value;
};

struct Result {
    unsigned int storage[2];
};

extern void __cdecl callback();
extern Result* __cdecl invoke(
    Result*, void*, unsigned int, void*, Node*,
    void (__cdecl*)(), String*);

struct Holder {
    unsigned char reserved0[12];
    void* context;
    unsigned char reserved1[16];
    Node* node;
    unsigned char reserved2[12];
    Source* source;

    bool run();
};

bool Holder::run() {
    WideString value;
    source->table->get(source, &value.value);
    String text(Conversion(value.value).text());
    Result result;
    invoke(&result, context, node->value, context, node, callback, &text);
    return true;
}
