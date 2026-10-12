// from server: 93% by king_originala
struct String;

extern void (__thiscall *constructString)(String*);
extern void (__thiscall *destroyString)(String*);
extern int (__thiscall *compareString)(const String*, const char*);

extern const char* expectedText;
extern const char replacementText[];

struct String
{
    char* data;
    String();
    ~String() throw();
    int Compare(const char*) const;
};

inline String::String()
{
    constructString(this);
}

inline String::~String() throw()
{
    destroyString(this);
}

inline int String::Compare(const char* text) const
{
    return compareString(this, text);
}

struct CBrush
{
    void GetWindowText(String&) const;
    void SetWindowText(const char*);
    void f();
};

void CBrush::f()
{
    String text;
    GetWindowText(text);
    if (text.Compare(expectedText) == 0)
        SetWindowText(replacementText);
}
