// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Text;
extern void (__thiscall *textCopy)(Text*, const Text&);
extern void (__thiscall *textDestroy)(Text*);
extern Text& (__thiscall *textAppend)(Text*, const char*);
extern const char* (__thiscall *textData)(const Text*);

struct Text {
    char data[28];
    Text(const Text&);
    ~Text();
    Text& operator+=(const char*);
    const char* c_str() const;
};

inline Text::Text(const Text& other) { textCopy(this, other); }
inline Text::~Text() { textDestroy(this); }
inline Text& Text::operator+=(const char* value) { return textAppend(this, value); }
inline const char* Text::c_str() const { return textData(this); }

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Declaration;
struct Service;

struct SharedService {
    Service* object;
    RefCount* count;
    ~SharedService();
};

inline SharedService::~SharedService()
{
    if (count) {
        RefCount* p = count;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Item {
    char padding[0x130];
    unsigned char visible;
    unsigned char restricted;
    unsigned char special;
};

struct Service {
    Item* lookup(Declaration*);
};

struct Settings {
    char padding[0x130];
    unsigned char showRestricted;
    unsigned char showSpecial;
};

struct Name {
    int prefix;
    Text text;
};

struct Declaration {
    int prefix;
    Name* name;
    int unused08;
    int category;
    int marked;
    int unused14;
    Declaration* begin;
    char unused1c[0x10];
    Declaration** end;
};

extern void __cdecl visitDeclaration(Declaration*, int*, Text*);

struct Visitor {
    void (__cdecl *function)(Declaration*, int*, Text*);
    int* count;
    Text* text;
    Visitor(int*, Text*);
};

inline Visitor::Visitor(int* counter, Text* value)
    : function(visitDeclaration), count(counter), text(value)
{
}

extern SharedService __cdecl getService();
extern Settings* __cdecl getSettings();
extern Visitor __cdecl traverse(
    Declaration*, Declaration*, Declaration*, Declaration**, Visitor);
extern const char openingText[];
extern const char closingText[];

struct CDeclarationView {
    char padding[0xa8];
    unsigned char showAll;
    char unuseda9[3];
    int category;

    void update(Declaration*);
    void* insert(int, const char*, int, int, int, int, int, int, int);
    void configure(void*, int, int, int, int, int, int, Declaration*);
    void associate(void*, Item*);
};

void CDeclarationView::update(Declaration* declaration)
{
    if (!showAll && declaration->category != category)
        return;

    Item* item = getService().object->lookup(declaration);

    if (item) {
        Settings* settings = getSettings();
        if (item->restricted && !settings->showRestricted)
            return;
        if (item->special && !settings->showSpecial)
            return;
        if (!item->visible)
            return;
    }

    Text text(declaration->name->text);
    text += openingText;

    Declaration** end = declaration->end;
    int count = 0;
    Declaration* last = *end;
    traverse(declaration->begin, last, declaration->begin, end,
             Visitor(&count, &text));

    text += closingText;

    int image = (declaration->marked != 0) + 4;
    const char* label = text.c_str();
    void* entry = insert(0x23, label, image, image,
                         0, 0, 0, 0xffff0000, 0xffff0002);
    configure(entry, 4, 0, 0, 0, 0, 0, declaration);
    associate(entry, item);
}
