// from server: 87% by colin
// from server: 82% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

extern bool (__thiscall *stringEmpty)(const String *);
extern String *(__thiscall *stringFromText)(String *, const char *);
extern String *(__thiscall *stringCopy)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    void *data;

    String(const char *);
    String(const String &);
    __declspec(dllimport) ~String() throw();
    bool empty() const;
};

inline String::String(const char *text) {
    stringFromText(this, text);
}

inline String::String(const String &other) {
    stringCopy(this, other);
}

inline bool String::empty() const {
    return stringEmpty(this);
}

struct Provider {
    String getText();
};

struct S {
    char padding0[0xd8];
    String primary;
    String secondary;
    char padding1[0x7c];
    Provider *provider;

    String getText();
};

String S::getText() {
    return !secondary.empty() ? secondary :
           !primary.empty() ? primary :
           provider ? provider->getText() : String(">Authoring");
}
