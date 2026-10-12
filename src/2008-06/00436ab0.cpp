// from server: 82% by king_originala
void __cdecl operator delete(void *);

struct B_func_00465a80 {
    virtual ~B_func_00465a80();
};

struct S_func_00465a80 : B_func_00465a80 {
    ~S_func_00465a80();
};

struct Interface;

struct InterfaceTable {
    void *slots[2];
    unsigned long (__stdcall *release)(Interface *);
};

struct Interface {
    InterfaceTable *table;
};

struct Storage {
    void *first;
    ~Storage();
};

struct Container {
    Storage storage;
    unsigned char remainder[28];
    void clear();
    ~Container();
};

struct COutputView : S_func_00465a80 {
    unsigned char padding[244];
    Container container;
    Interface *firstInterface;
    Interface *secondInterface;
    ~COutputView();
};

__forceinline Storage::~Storage()
{
    operator delete(first);
}

__forceinline Container::~Container()
{
    clear();
}

COutputView::~COutputView()
{
    if (secondInterface)
        secondInterface->table->release(secondInterface);
    if (firstInterface)
        firstInterface->table->release(firstInterface);
}
