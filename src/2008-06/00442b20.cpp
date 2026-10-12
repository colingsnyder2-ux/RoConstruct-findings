// from server: 81% by king_originala
void* __cdecl operator new(unsigned int);

struct Base
{
    Base();
    virtual ~Base();

    char reserved04[0x5c];
    int value60;
    char reserved64[0x124];
};

struct __declspec(novtable) Interface
{
    virtual void interfaceFunction() = 0;
};

struct Resource
{
    Resource();
    ~Resource();
    char data[12];
};

struct Container;

struct Link
{
    explicit Link(Container*);
    Container* owner;
};

struct Container
{
    Container();
    ~Container();

    Link* link;
    char reserved[8];
};

struct Owner : Container
{
    Owner();
    ~Owner();

    void* first;
    void* last;
    void* end;
};

struct Compare
{
    Compare();
};

struct Allocator
{
    Allocator();
};

struct Map
{
    Map(const Compare&, const Allocator&);
    ~Map();
    unsigned int data[8];
};

struct OtherMap
{
    OtherMap(const Compare&, const Allocator&);
    ~OtherMap();
    unsigned int data[8];
};

struct FinalMap
{
    FinalMap(const Compare&, const Allocator&);
    ~FinalMap();
    unsigned int data[8];
};

struct CPropGrid : Base, Interface
{
    CPropGrid();
    virtual ~CPropGrid();
    virtual void interfaceFunction();

    Resource resource;
    int value198;
    Owner owner;
    Map map1;
    Map map2;
    bool flag1;
    bool flag2;
    OtherMap map3;
    FinalMap map4;
};

inline Link::Link(Container* p) : owner(p)
{
}

inline Container::Container() : link(new Link(this))
{
}

inline Owner::Owner() : first(0), last(0), end(0)
{
}

inline Compare::Compare()
{
}

inline Allocator::Allocator()
{
}

CPropGrid::CPropGrid()
    : value198(0),
      map1(Compare(), Allocator()),
      map2(Compare(), Allocator()),
      flag1(false),
      flag2(false),
      map3(Compare(), Allocator()),
      map4(Compare(), Allocator())
{
    value60 = 0;
}
