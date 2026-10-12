// from server: 98% by king_originala
extern "C" void __cdecl release_storage(void *);

struct ModuleBase {
    unsigned char data[0x30];
    ~ModuleBase();
};

struct ContainerBase {
    void *storage;
    ~ContainerBase();
};

struct Container : ContainerBase {
    unsigned char data[0x10];
    void clear();
    ~Container();
};

struct CRobloxModule : ModuleBase {
    Container container;
    ~CRobloxModule();
};

inline ContainerBase::~ContainerBase()
{
    release_storage(storage);
}

inline Container::~Container()
{
    clear();
}

CRobloxModule::~CRobloxModule()
{
}
