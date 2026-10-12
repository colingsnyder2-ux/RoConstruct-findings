// from server: 81% by king_originala
struct Size { int cx, cy; };
struct Point { int x, y; };
struct Rect { int left, top, right, bottom; };

struct String;
extern void (__thiscall * const StringConstruct)(String*);
extern void (__thiscall * const StringDestroy)(String*);
extern int (__thiscall * const StringLength)(const String*);
extern const char* (__thiscall * const StringData)(const String*);

struct String {
    char* data;
    String();
    ~String();
};

inline String::String() { StringConstruct(this); }
inline String::~String() { StringDestroy(this); }

#pragma pack(push, 4)
struct Date {
    double value;
    int status;
    Date(const __int64&);
    void SetTime(const __int64&);
    String Format(unsigned long, unsigned long) const;
};
#pragma pack(pop)

inline Date::Date(const __int64& time) : value(0), status(0)
{
    SetTime(time);
}

struct Document {
    char reserved[32];
    String title;
};

struct PrintInfo {
    char reserved0[12];
    int bottom;
    char reserved1[8];
    Rect draw;
};

struct DC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual unsigned long SetTextColor(unsigned long);

    void* output;
    void* attribute;

    unsigned int SetTextAlign(unsigned int);
    Point MoveTo(int, int);
    int LineTo(int, int);
};

extern __int64 (__cdecl * const Time64)(__int64*);
extern int (__stdcall * const TextExtent)(void*, const char*, int, Size*);
extern int (__stdcall * const TextOut)(
    void*, int, int, unsigned int, const Rect*, const char*,
    unsigned int, const int*);

void __stdcall FormatString2(String&, unsigned int, const char*, const char*);

struct View {
    char reserved[84];
    Document* document;
    void DrawHeader(DC*, unsigned int, PrintInfo*);
};

void View::DrawHeader(DC* dc, unsigned int unused, PrintInfo* info)
{
    String text;
    {
        __int64 now = Time64(0);
        Date date(now);
        Document* doc;
        FormatString2(text, 197,
                      StringData(&(doc = document)->title),
                      StringData(&date.Format(0, 0x400)));
    }

    dc->SetTextColor(0);
    unsigned int oldAlignment = dc->SetTextAlign(0);

    Size extent;
    TextExtent(dc->attribute, StringData(&text), StringLength(&text), &extent);

    int height = extent.cy * 2;
    int x = info->draw.left;
    Rect rectangle;
    rectangle.left = x;
    rectangle.top = info->draw.top;
    rectangle.right = info->draw.right;
    rectangle.bottom = rectangle.top + height;

    int y = rectangle.top + height / 3;
    TextOut(dc->output, x, y, 0, &rectangle,
            StringData(&text), StringLength(&text), 0);

    dc->MoveTo(info->draw.left, info->draw.top + height - 5);
    dc->LineTo(info->draw.right, info->draw.top + height - 5);
    dc->SetTextAlign(oldAlignment);

    height += info->draw.top;
    if (info->bottom < height)
        info->bottom = height;
}
