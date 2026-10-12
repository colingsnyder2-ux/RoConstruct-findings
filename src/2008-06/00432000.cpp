// from server: 95% by king_originala
struct Resource {
    void release();
};

struct Object {
    virtual void unused();
    virtual ~Object();
};

struct OwnedObject {
    Object* p;
    ~OwnedObject() { if (p) delete p; }
};

struct Auxiliary {
    ~Auxiliary();
};

struct OwnedAuxiliary {
    Auxiliary* p;
    ~OwnedAuxiliary() { if (p) delete p; }
};

struct Member108 {
    char data[0x30];
    ~Member108();
};

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
    virtual void baseMethod();
    char data[0xec];
    void cleanup();
    ~Base() { cleanup(); }
};

struct Interface {
    virtual void interfaceMethod();
};

struct Registry {
    void remove(Interface*);
};

extern Registry registry;

struct CDataModelPropGrid : Base, Interface {
    OwnedAuxiliary auxiliary;
    char paddingF8[8];
    Resource* resource;
    char padding104[4];
    Member108 member108;
    Member138 member138;
    Member284 member284;
    OwnedObject member3A8;
    OwnedObject member3AC;
    OwnedObject member3B0;
    Member3B4 member3B4;
    Member3E0 member3E0;

    virtual void baseMethod();
    virtual void interfaceMethod();
    ~CDataModelPropGrid();
};

CDataModelPropGrid::~CDataModelPropGrid()
{
    if (resource) {
        resource->release();
        resource = 0;
    }
    registry.remove(this);
}
