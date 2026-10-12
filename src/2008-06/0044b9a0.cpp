// from server: 78% by king_originala
struct String;

extern bool (__thiscall *stringEmpty)(const String *);
extern const char *(__thiscall *stringData)(const String *);
extern void (__thiscall *stringConstruct)(String *, const char *);

struct String {
    unsigned char data[28];
    String(const char *);
    ~String();
    bool empty() const;
    const char *c_str() const;
};

inline String::String(const char *text)
{
    stringConstruct(this, text);
}

inline bool String::empty() const
{
    return stringEmpty(this);
}

inline const char *String::c_str() const
{
    return stringData(this);
}

struct Error {
    unsigned char data[40];
    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct Document {
    virtual ~Document();
};

extern Document *pendingDocument;
extern void finishOpen();

struct CRobloxModule {
    unsigned char padding[0x90];
    Document *document;
    String errorText;

    Document *open(const char *, int);
    Document *getDocument();
};

Document *CRobloxModule::getDocument()
{
    if (document)
        return document;

    Document *old = pendingDocument;
    pendingDocument = 0;
    if (old)
        delete old;

    Document *result = open(0, 1);
    try {
        finishOpen();
    }
    catch (...) {
        if (result)
            delete result;
        throw;
    }

    if (!result) {
        if (!errorText.empty())
            throw Error(String(errorText.c_str()));
        throw Error(String("OpenDocumentFile returned NULL"));
    }

    document = result;
    return result;
}
