// from server: 57% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
typedef unsigned int size_t;

void *__cdecl operator new(size_t);

struct Text;
typedef Text *(__thiscall *TextConstruct)(Text *, const char *);
typedef void (__thiscall *TextDestroy)(Text *);
extern TextConstruct textConstruct;
extern TextDestroy textDestroy;

struct Text {
    char storage[28];
    Text(const char *s) { textConstruct(this, s); }
    ~Text() { textDestroy(this); }
};

struct Material;
typedef Material *(__thiscall *MaterialConstruct)(Material *);
extern MaterialConstruct materialConstruct;

struct Material {
    char storage[16];
    Material() { materialConstruct(this); }
    ~Material();
};

struct SequenceBase;

struct Proxy {
    SequenceBase *owner;
    Proxy(SequenceBase *p) : owner(p) {}
};

struct SequenceBase {
    Proxy *proxy;
    unsigned int reserved[2];

    SequenceBase() : proxy(new Proxy(this)) {}
    ~SequenceBase();
};

struct Sequence : SequenceBase {
    void *first;
    void *last;
    void *limit;

    Sequence() : first(0), last(0), limit(0) {}
    ~Sequence();
};

struct Allocator {
    char unused;
};

struct MapA {
    char storage[36];
    MapA(const Allocator &, const Allocator &);
    ~MapA();
};

struct MapB {
    char storage[32];
    MapB(const Allocator &, const Allocator &);
    ~MapB();
};

struct NameItem {
    unsigned int value;
    NameItem();
    ~NameItem();
};

struct FontPointer {
    void *object;
    unsigned int *count;

    void assign(const FontPointer &);
};

struct FontTemporary {
    virtual void unused();
    virtual void release();
    void *object;
    unsigned int *count;

    ~FontTemporary() {
        if (count) {
            --*count;
            if (!*count)
                release();
        }
    }
};

extern FontPointer font;
Text __cdecl makeFontName(const char *);
FontTemporary __cdecl loadFont(const Text &);

struct Adorn {
    virtual ~Adorn();

    void *context;
    Text label;
    Material material1;
    unsigned int padding;
    Material material2;
    Sequence sequence1;
    Sequence sequence2;
    MapA map1;
    unsigned int value1;
    Sequence sequence3;
    MapB map2;
    unsigned int value2;
    Sequence sequence4;
    MapB map3;
    NameItem name;

    Adorn(void *);
};

Adorn::Adorn(void *p)
    : label(">Authoring"),
      material1(),
      material2(),
      sequence1(),
      sequence2(),
      map1(Allocator(), Allocator()),
      value1(0),
      sequence3(),
      map2(Allocator(), Allocator()),
      value2(0),
      sequence4(),
      map3(Allocator(), Allocator()),
      name()
{
    context = p;
    if (!font.object) {
        Text filename = makeFontName("Fonts\\comics.fnt");
        FontTemporary loaded = loadFont(filename);
        font.assign(*reinterpret_cast<FontPointer *>(&loaded.object));
    }
}
