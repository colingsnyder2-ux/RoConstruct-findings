// from server: 94% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
void __cdecl operator delete(void *) throw();

struct Entity;
struct AxisAlignedBox;

extern unsigned (__thiscall *getNumSubEntitiesImport)(const Entity *);
extern void (__thiscall *destroyEntityImport)(Entity *);
extern void (__thiscall *destroyBoxImport)(AxisAlignedBox *);

struct SubEntity {
    virtual ~SubEntity();
};

struct RbxSubEntity : SubEntity {
    virtual ~RbxSubEntity();
};

struct InterfaceA {
    virtual void methodA();
};

struct InterfaceB {
    virtual void methodB();
    char padding[0xc0];
};

struct InterfaceC {
    virtual void methodC();
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
    SubEntity *&at(unsigned index);
};

__forceinline SubEntity *&SubEntityArray::at(unsigned index)
{
    if (index >= (unsigned)(last - first))
        _invalid_parameter_noinfo();
    return first[index];
}

struct Entity : InterfaceA, InterfaceB, InterfaceC {
    char padding0[12];
    SubEntityArray entities;
    char padding1[0x18c];
};

struct EntityCleanup {
    ~EntityCleanup();
};

__forceinline EntityCleanup::~EntityCleanup()
{
    destroyEntityImport(reinterpret_cast<Entity *>(this));
}

struct AxisAlignedBox {
    char storage[0x28];
    ~AxisAlignedBox();
};

__forceinline AxisAlignedBox::~AxisAlignedBox()
{
    destroyBoxImport(this);
}

struct Allocation {
    void *pointer;
    ~Allocation() throw();
};

__forceinline Allocation::~Allocation() throw()
{
    operator delete(pointer);
}

struct RbxEntity : EntityCleanup, Entity {
    AxisAlignedBox box;
    Allocation allocation;
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
        RbxSubEntity *entry =
            dynamic_cast<RbxSubEntity *>(entities.at(i));
        if (entry)
            delete entry;
    }

    SubEntity **end = entities.last;
    SubEntityArray &array = entities;
    if (array.first > end)
        _invalid_parameter_noinfo();

    SubEntity **begin = array.first;
    void *owner = array.owner;
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
}
