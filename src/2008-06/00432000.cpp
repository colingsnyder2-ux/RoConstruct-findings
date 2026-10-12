// from server: 92% by king_originala
void __cdecl operator delete(void *);

struct Resource {
    void release();
};

struct Owned {
    ~Owned();
};

struct Polymorphic {
    virtual void reserved();
    virtual ~Polymorphic();
};

struct OwnedPtr {
    Owned *p;
    ~OwnedPtr();
};

inline OwnedPtr::~OwnedPtr() {
    if (p)
        delete p;
}

struct PolyPtr {
    Polymorphic *p;
    ~PolyPtr();
};

inline PolyPtr::~PolyPtr() {
    if (p)
        delete p;
}

struct Member108 {
    char data[0x30];
    ~Member108();
};

extern void (__thiscall *destroy108)(Member108 *);

inline Member108::~Member108() {
    destroy108(this);
}

struct Member138 {
    char data[0x14c];
    ~Member138();
};

struct Member284 {
    char data[0x124];
    ~Member284();
};

struct Member3B4 {
    char data[0x2c];
    ~Member3B4();
};

struct Member3E0 {
    ~Member3E0();
};

struct Base {
    virtual ~Base();
    void cleanup();
    char padding[0xec];
};

inline Base::~Base() {
    cleanup();
}

struct Interface {
    virtual void callback();
};

struct Registry {
    void remove(Interface *);
};

extern Registry registry;

struct CDataModelPropGrid : Base, Interface {
    OwnedPtr owned;
    char paddingF8[8];
    Resource *resource;
    char padding104[4];
    Member108 member108;
    Member138 member138;
    Member284 member284;
    PolyPtr member3A8;
    PolyPtr member3AC;
    PolyPtr member3B0;
    Member3B4 member3B4;
    Member3E0 member3E0;

    virtual ~CDataModelPropGrid();
    virtual void callback();
};

CDataModelPropGrid::~CDataModelPropGrid() {
    if (resource) {
        resource->release();
        resource = 0;
    }
    registry.remove(static_cast<Interface *>(this));
}
