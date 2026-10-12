// from server: 84% by king_originala
void* __cdecl operator new(unsigned int);

struct Entity;
struct SubMesh;

struct PrimaryBase {
    virtual ~PrimaryBase();
    char padding[0xe8];
};

struct SecondaryBase {
    virtual ~SecondaryBase();
    char padding[0x40];
};

struct SubEntity : PrimaryBase, SecondaryBase {
    SubEntity(Entity*, SubMesh*);
    virtual ~SubEntity();
};

struct Holder {
    void* pointer;
    unsigned int unused;
    Holder() : pointer(0) {}
    ~Holder();
};

struct Container {
    struct Link {
        Container* owner;
        Link(Container* p) : owner(p) {}
    };

    Link* link;
    unsigned int unused[2];
    void* first;
    void* last;
    void* end;

    Container() {
        link = new Link(this);
        first = 0;
        last = 0;
        end = 0;
    }

    ~Container();
};

struct ShadowRenderable : SubEntity {
    unsigned int field130;
    Holder field134;
    bool field13c;
    unsigned int field140;
    Container field144;

    ShadowRenderable(Entity*);
    virtual ~ShadowRenderable();
};

ShadowRenderable::ShadowRenderable(Entity* parent)
    : SubEntity(parent, 0), field134(), field13c(true), field144() {
    field140 = 0;
    field130 = 0;
}
