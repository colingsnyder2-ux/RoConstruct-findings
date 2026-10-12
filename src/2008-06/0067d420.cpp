// from server: 79% by king_originala
void __cdecl operator delete(void *);

extern void (__cdecl *invalid_parameter_noinfo)();

struct SubEntity {
    virtual ~SubEntity();
};

struct RbxSubEntity : SubEntity {
    virtual ~RbxSubEntity();
};

struct Iterator {
    void *owner;
    SubEntity **position;
    Iterator(void *, SubEntity **);
};

inline Iterator::Iterator(void *o, SubEntity **p)
    : owner(o), position(p) {}

struct SubEntities {
    void *owner;
    unsigned char padding[8];
    SubEntity **first;
    SubEntity **last;
    SubEntity **limit;
    Iterator erase(Iterator, Iterator);
};

struct Primary {
    virtual void primary();
};

struct Secondary {
    virtual void secondary();
    unsigned char padding[0xc0];
};

struct Tertiary {
    virtual void tertiary();
    unsigned char padding[12];
};

struct Entity;
struct AxisAlignedBox;

extern unsigned int (__thiscall *entity_count)(const Entity *);
extern void (__thiscall *entity_destroy)(Entity *);
extern void (__thiscall *box_destroy)(AxisAlignedBox *);

struct Entity : Primary, Secondary, Tertiary {
    SubEntities entities;
    unsigned char padding[0x18c];

    ~Entity();
    unsigned int getNumSubEntities() const;
};

inline Entity::~Entity()
{
    entity_destroy(this);
}

inline unsigned int Entity::getNumSubEntities() const
{
    return entity_count(this);
}

struct AxisAlignedBox {
    unsigned char data[0x28];
    ~AxisAlignedBox();
};

inline AxisAlignedBox::~AxisAlignedBox()
{
    box_destroy(this);
}

struct Buffer {
    void *data;
    unsigned int size;
    unsigned int capacity;
};

struct PointerArray {
    void *first;
    void *last;
    void *limit;
};

struct RbxEntity : Entity {
    AxisAlignedBox box;
    Buffer buffer;
    PointerArray pointers;

    virtual void primary();
    virtual void secondary();
    virtual void tertiary();
    ~RbxEntity();
};

RbxEntity::~RbxEntity()
{
    for (int i = 0; i < (int)getNumSubEntities(); ++i) {
        if ((unsigned int)i >=
            (unsigned int)(entities.last - entities.first))
            invalid_parameter_noinfo();

        RbxSubEntity *p =
            dynamic_cast<RbxSubEntity *>(entities.first[i]);
        if (p)
            delete p;
    }

    SubEntities &v = entities;
    SubEntity **end = v.last;
    if (v.first > end)
        invalid_parameter_noinfo();

    SubEntity **begin = v.first;
    void *owner = v.owner;
    if (begin > v.last)
        invalid_parameter_noinfo();

    v.erase(Iterator(v.owner, begin), Iterator(owner, end));

    if (pointers.first)
        operator delete(pointers.first);
    pointers.first = 0;
    pointers.last = 0;
    pointers.limit = 0;
    operator delete(buffer.data);
}
