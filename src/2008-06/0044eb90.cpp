// from server: 96% by king_originala
struct RGB
{
    unsigned char r, g, b;
};

struct String
{
    const char* c_str() const;
};

struct BrickColor
{
    int value;
    RGB rgb() const;
    const String& name() const;
};

struct Text;
extern void (__thiscall *textConstruct)(Text*);
extern void (__thiscall *textDestroy)(Text*) throw();
extern void (__thiscall *textAssign)(Text*, const char*);
extern const char* (__thiscall *stringData)(const String*);

struct Text
{
    unsigned long value;
    Text();
    ~Text() throw();
    void assign(const char*);
};

inline Text::Text()
{
    textConstruct(this);
}

inline Text::~Text() throw()
{
    textDestroy(this);
}

inline void Text::assign(const char* s)
{
    textAssign(this, s);
}

struct Entry
{
    unsigned long color;
    int id;
    Text text;
    Entry(unsigned long, int);
};

inline Entry::Entry(unsigned long c, int i)
{
    color = c;
    id = i;
}

struct Registry
{
    void insert(const Entry*);
};

extern int nextId;
extern Registry registry;

void addColor(BrickColor color)
{
    int id = nextId++;
    BrickColor copy = color;

    unsigned long rgb =
        copy.rgb().r |
        ((copy.rgb().g | (copy.rgb().b << 8)) << 8);

    Entry entry(rgb, id);
    entry.text.assign(stringData(&color.name()));
    registry.insert(&entry);
}
