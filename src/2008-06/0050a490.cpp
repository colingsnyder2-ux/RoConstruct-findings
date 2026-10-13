// from server: 88% by colin
// from server: 82% by king_originala
struct String;

extern void (__thiscall *stringDestroy)(String*);
extern String (__cdecl *stringConcat)(const String&, const String&);
extern String (__cdecl *stringAppend)(const String&, const char*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char*);
    ~String();

    const char* c_str() const;
};

inline String::~String()
{
    stringDestroy(this);
}

inline const char* String::c_str() const
{
    if (capacity >= 16)
        return pointer;
    return buffer;
}

inline String operator+(const String& left, const String& right)
{
    return stringConcat(left, right);
}

inline String operator+(const String& left, const char* right)
{
    return stringAppend(left, right);
}

extern unsigned long (__stdcall *GetLastError)();
extern void (__stdcall *SetLastError)(unsigned long);

extern const char assertionTitle[];
extern const char emptyText[];
extern const char logPrefix[];
extern const char logSeparator[];
extern const char dialogOptions[];

void __cdecl formatAssertion(const char*, const char*, int, const char*,
                             String&, String&);
void __fastcall prepareLogText(const char*);

struct Log {
    void write();
};

Log* __stdcall getLog(const String&);
int __cdecl showAssertion(const char*, const char*, const char*, int, int);

bool __cdecl assertionFailure(const char* expression, const char* file,
                              int line, const char* message,
                              bool* ignore, int options)
{
    String title(assertionTitle);
    String text(emptyText);
    formatAssertion(expression, file, line, message, title, text);

    unsigned long error = GetLastError();
    prepareLogText(text.c_str());

    getLog(String(logPrefix) + title + logSeparator + text)->write();

    int result = showAssertion(title.c_str(), text.c_str(),
                               dialogOptions, 4, options);
    SetLastError(error);

    switch (result) {
    case -1:
    case 0:
        return true;
    case 1:
        *ignore = true;
        break;
    case 2:
        break;
    case 3:
        return true;
    default:
        break;
    }
    return false;
}
