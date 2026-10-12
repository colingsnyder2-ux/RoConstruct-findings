// from server: 76% by king_originala
struct Text;
struct Size { int cx, cy; };
struct Point { int x, y; };
struct Rect { int left, top, right, bottom; };

extern void (__thiscall *const textConstruct)(Text *);
extern void (__thiscall *const textDestroy)(Text *);
extern const char *(__thiscall *const textData)(const Text *);
extern int (__thiscall *const textLength)(const Text *);
extern void (__cdecl *const textFormat)(Text *, const char *, ...);
extern const char pageFormat[];

struct Text {
    char *data;
    Text();
    __declspec(nothrow) ~Text();
    const char *c_str() const;
    int length() const;
};

__forceinline Text::Text() { textConstruct(this); }
__forceinline Text::~Text() { textDestroy(this); }
__forceinline const char *Text::c_str() const { return textData(this); }
__forceinline int Text::length() const { return textLength(this); }

struct DC;
typedef unsigned long (__thiscall *DCVirtual)(DC *, unsigned long);

struct DC {
    DCVirtual *table;
    void *output;
    void *attribute;
    unsigned int setAlignment(unsigned int);
    Point moveTo(int, int);
    int lineTo(int, int);
};

struct Page {
    char reserved[20];
    int number;
};

struct PrintInfo {
    char reserved[20];
    int limit;
    Rect area;
};

extern int (__stdcall *const GetTextExtentPoint32A)(
    void *, const char *, int, Size *);
extern int (__stdcall *const ExtTextOutA)(
    void *, int, int, unsigned int, const Rect *,
    const char *, unsigned int, const int *);

extern void __stdcall formatResource(Text &, unsigned int, const char *);

void __stdcall drawPage(DC *dc, Page *page, PrintInfo *info)
{
    Text number;
    textFormat(&number, pageFormat, page->number);

    Text caption;
    formatResource(caption, 198, number.c_str());

    dc->table[14](dc, 0);
    unsigned int previous = dc->setAlignment(0);

    int height;
    {
        Size extent;
        GetTextExtentPoint32A(
            dc->attribute, caption.c_str(), caption.length(), &extent);

        height = extent.cy * 2;
        int left = info->area.left;
        Rect rectangle;
        rectangle.top = info->area.bottom - height;
        rectangle.right = info->area.right;
        rectangle.bottom = info->area.bottom;
        int baseline = info->area.bottom - (height * 2) / 3;
        rectangle.left = left;

        ExtTextOutA(
            dc->output, left, baseline, 0, &rectangle,
            caption.c_str(), caption.length(), 0);
    }

    dc->moveTo(info->area.left, info->area.bottom - height + 5);
    dc->lineTo(info->area.right, info->area.bottom - height + 5);
    dc->setAlignment(previous);

    if (info->limit > info->area.bottom - height)
        info->limit = info->area.bottom - height;
}
