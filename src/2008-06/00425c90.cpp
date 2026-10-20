// from server: 93% by Espeon
// from server: 89% by king_originala
typedef unsigned long DWORD;

extern "C" void* __stdcall FindResourceHandle(const char*, const char*);
extern "C" void* (__stdcall *LoadMenuA)(void*, const char*);

extern DWORD registeredTable[];
extern DWORD menuTable[];

struct Empty {
    Empty() {}
};

struct Primary {
    virtual void primaryFunction();
    char padding[0x50];
};

struct Secondary {
    virtual void secondaryFunction();
    char padding[0x78];
};

struct Base : Primary, Secondary {
    Base();
    ~Base();
};

struct RegisteredMember {
    DWORD* tablePointer;
    RegisteredMember* initialize();
    RegisteredMember();
    ~RegisteredMember();
};

inline RegisteredMember::RegisteredMember()
{
    initialize();
    tablePointer = registeredTable;
}

struct Interface {
    virtual void interfaceFunction();
};

struct Menu {
    DWORD* tablePointer;
    void* handle;
    Menu();
    ~Menu();
    int attach(void*);
};

inline Menu::Menu() : tablePointer(menuTable), handle(0)
{
}

struct Allocator {Allocator(){}};
struct EmptyPack : Empty, Allocator {};
struct RawPointer {void* value;RawPointer():value(0){}};
struct ContainerA {
    DWORD data[8];
    ContainerA();
    void initialize(const Empty&, const Allocator&);
    ~ContainerA();
};

inline ContainerA::ContainerA()
{
    EmptyPack value;
    initialize(value,value);
}

struct ContainerB {
    DWORD data[8];
    ContainerB();
    void initialize(const Empty&, const Allocator&);
    ~ContainerB();
};

inline ContainerB::ContainerB()
{
    EmptyPack value;
    initialize(value,value);
}

struct PointerMember {
    void* value;
    PointerMember();
    ~PointerMember();
};

inline PointerMember::PointerMember() : value(0)
{
}

struct CRobloxTreeCtrl : Base, RegisteredMember {
    Interface interfaceMember;
    Menu menu;
    unsigned char flag0;
    unsigned char flag1;
    unsigned char flag2;
    ContainerA first;
    ContainerB second;
    PointerMember pointer0;
    PointerMember pointer1;
    RawPointer pointer2;

    virtual void primaryFunction();
    virtual void secondaryFunction();
    CRobloxTreeCtrl();
};

CRobloxTreeCtrl::CRobloxTreeCtrl()
    : flag0(0), flag1(0), flag2(0)
{
    menu.attach(LoadMenuA(
        FindResourceHandle((const char*)0x67, (const char*)4),
        (const char*)0x67));
}
