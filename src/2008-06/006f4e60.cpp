// from server: 57% by king_originala
struct CString;

extern void (__thiscall *StringConstruct)(CString*);
extern void (__thiscall *StringCopyConstruct)(CString*, const CString&);
extern void (__thiscall *StringDestroy)(CString*);
extern const char* (__thiscall *StringText)(const CString*);
extern int (__thiscall *StringLength)(const CString*);
extern char* (__thiscall *StringGetBuffer)(CString*, int);
extern void (__thiscall *StringReleaseBuffer)(CString*, int);
extern void (__cdecl *StringFormat)(CString*, const char*, ...);
extern "C" int (__cdecl *_ismbblead)(unsigned int);

struct CString
{
    char* data;

    CString();
    ~CString();
    operator const char*() const;
    int GetLength() const;
    char* GetBuffer(int);
    void ReleaseBuffer(int = -1);
};

inline CString::CString()
{
    StringConstruct(this);
}

inline CString::~CString()
{
    StringDestroy(this);
}

inline CString::operator const char*() const
{
    return StringText(this);
}

inline int CString::GetLength() const
{
    return StringLength(this);
}

inline char* CString::GetBuffer(int length)
{
    return StringGetBuffer(this, length);
}

inline void CString::ReleaseBuffer(int length)
{
    StringReleaseBuffer(this, length);
}

CString* __cdecl FormatWindowCaption(
    CString* result, const CString& caption, int index)
{
    CString escaped;
    const char* source = caption;
    char* destination = escaped.GetBuffer(caption.GetLength() * 2);

    if (*source)
    {
        int (__cdecl *isLead)(unsigned int) = _ismbblead;
        do
        {
            if (*source == '&')
                *destination++ = *source;

            if (isLead(*source))
                *destination++ = *source++;

            *destination++ = *source++;
        } while (*source);
    }

    *destination = 0;
    escaped.ReleaseBuffer();

    CString formatted;
    const CString* selected;

    if (index == 0)
    {
        selected = &escaped;
    }
    else
    {
        if (index < 10)
            StringFormat(&formatted, "&%i %s", index, (const char*)escaped);
        else if (index == 10)
            StringFormat(&formatted, "1&0 %s", (const char*)escaped);
        else
            StringFormat(&formatted, "%i %s", index, (const char*)escaped);

        selected = &formatted;
    }

    StringCopyConstruct(result, *selected);
    return result;
}
