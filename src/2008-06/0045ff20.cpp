// from server: 95% by king_originala
struct Text;
struct S;

extern void (__thiscall *textConstruct)(Text *);
extern void (__thiscall *textDestroy)(Text *);
extern int (__thiscall *textCompare)(const Text *, const char *);
extern const char *(__thiscall *textData)(const Text *);
extern int (__cdecl *atoiCall)(const char *);

struct Text {
    char *data;
    Text();
    ~Text() throw();
    int compare(const char *) const;
    const char *c_str() const;
};

__forceinline Text::Text() {
    textConstruct(this);
}

__forceinline Text::~Text() throw() {
    textDestroy(this);
}

__forceinline int Text::compare(const char *value) const {
    return textCompare(this, value);
}

__forceinline const char *Text::c_str() const {
    return textData(this);
}

struct VTable {
    void *slots[88];
    void (__thiscall *accept)(S *);
    void (__thiscall *reject)(S *);
};

struct S {
    VTable *vtable;
    void getProperty(const wchar_t *, long, Text *, int);
    void f(void *, short *);
};

void S::f(void *, short *cancel) {
    *cancel = -1;
    Text result;
    getProperty(L"DialogResult", (long)0x800113ed, &result, 1);
    if (result.compare(">Authoring") != 0 && atoiCall(result.c_str()) == 1)
        vtable->accept(this);
    else
        vtable->reject(this);
}
