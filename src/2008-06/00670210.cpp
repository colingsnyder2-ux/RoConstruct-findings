// from server: 76% by king_originala
extern long (__stdcall * const InterlockedDecrement)(volatile long*);

struct ImagePtr;

struct Image {
    virtual void destroy(unsigned);
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual ImagePtr resolve(void*);

    volatile long references;
    void* resource;
    char name[4];

    void release();
};

struct ImagePtr {
    Image* pointer;
    ~ImagePtr();
};

inline ImagePtr::~ImagePtr()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0) {
        pointer->release();
        if (pointer)
            pointer->destroy(1);
    }
}

struct Shared;

struct SharedTable {
    void* destructor;
    void (__thiscall *dispose)(Shared*);
};

extern SharedTable sharedTable;

struct Shared {
    SharedTable* table;
    void* pointer;
    unsigned* references;

    ~Shared();
};

inline Shared::~Shared()
{
    table = &sharedTable;
    if (references) {
        --*references;
        if (*references == 0)
            table->dispose(this);
    }
}

struct Texture;

struct TextureTable {
    void* unused[24];
    unsigned (__thiscall *first)(Texture*);
    unsigned (__thiscall *second)(Texture*);
};

struct Texture {
    TextureTable* table;
};

struct TexturePtr;

extern void (__thiscall *constructTexture)(TexturePtr*, const Shared&);
extern void (__thiscall *destroyTexture)(TexturePtr*);

struct TexturePtr {
    void* table;
    Texture* pointer;
    unsigned* references;

    TexturePtr(const Shared&);
    ~TexturePtr();
};

inline TexturePtr::TexturePtr(const Shared& source)
{
    constructTexture(this, source);
}

inline TexturePtr::~TexturePtr()
{
    destroyTexture(this);
}

struct Manager {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual Shared lookup(const void*);
};

extern Manager& (__cdecl *getSingleton)();

struct Rectangle {
    float x, y, z, w;

    Rectangle(float, float, float, float);
};

inline Rectangle::Rectangle(float a, float b, float c, float d)
    : x(a), y(b), z(c), w(d)
{
}

struct S {
    void* unused;
    void* context;

    Rectangle f(ImagePtr image);
};

Rectangle S::f(ImagePtr image)
{
    image.pointer->resolve(context);
    TexturePtr texture(getSingleton().lookup(image.pointer->name));

    unsigned second = texture.pointer->table->second(texture.pointer);
    unsigned first = texture.pointer->table->first(texture.pointer);
    float height = (float)second;
    float width = (float)first;

    return Rectangle(0.0f, 0.0f, height, width);
}
