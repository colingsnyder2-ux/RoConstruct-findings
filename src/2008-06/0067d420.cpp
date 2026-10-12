// from server: 84% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
void __cdecl operator delete(void *);

struct Entity;
extern unsigned (__thiscall *getNumSubEntitiesImport)(const Entity *);

struct SubEntity {
    virtual ~SubEntity();
};

struct RbxSubEntity : SubEntity {
    virtual ~RbxSubEntity();
};

struct InterfaceA {
    virtual ~InterfaceA();
};

struct InterfaceB {
    virtual ~InterfaceB();
    char padding[0xc0];
};

struct InterfaceC {
    virtual ~InterfaceC();
};

struct Iterator {
    void *owner;
    SubEntity **position;
};

struct SubEntityArray {
    void *owner;
    unsigned reserved[2];
    SubEntity **first;
    SubEntity **last;
    SubEntity **limit;

    Iterator erase(Iterator first, Iterator last);
};

struct Entity : InterfaceA, InterfaceB, InterfaceC {
    char padding0[12];
    SubEntityArray entities;
    char padding1[0x18c];

    virtual ~Entity();
};

struct AxisAlignedBox {
    char storage[0x28];
    ~AxisAlignedBox();
};

struct RbxEntity : Entity {
    AxisAlignedBox box;
    void *allocation;
    unsigned reserved[2];
    void *buffer;
    void *bufferEnd;
    void *bufferLimit;

    virtual ~RbxEntity();
};

RbxEntity::~RbxEntity()
{
    unsigned (__thiscall *count)(const Entity *) =
        getNumSubEntitiesImport;

    for (int i = 0; i < (int)count(this); ++i) {
        if ((unsigned)i >= (unsigned)(entities.last - entities.first))
            _invalid_parameter_noinfo();

        RbxSubEntity *entry =
            dynamic_cast<RbxSubEntity *>(entities.first[i]);
        if (entry)
            delete entry;
    }

    SubEntity **end = entities.last;
    if (entities.first > end)
        _invalid_parameter_noinfo();

    SubEntityArray &array = entities;
    SubEntity **begin = array.first;
    void *volatile owner = array.owner;
    if (begin > array.last)
        _invalid_parameter_noinfo();

    Iterator first;
    first.owner = array.owner;
    first.position = begin;

    Iterator last;
    last.owner = owner;
    last.position = end;

    array.erase(first, last);

    if (buffer)
        operator delete(buffer);

    buffer = 0;
    bufferEnd = 0;
    bufferLimit = 0;
    operator delete(allocation);
}
