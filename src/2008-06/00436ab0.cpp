// from server: 88% by king_originala
void __cdecl operator delete(void*);

struct B_func_00465a80 {
    virtual ~B_func_00465a80();
};

struct S_func_00465a80 : B_func_00465a80 {
    ~S_func_00465a80();
};

struct Interface;

struct InterfaceTable {
    void* slots[2];
    unsigned long (__stdcall *release)(Interface*);
};

struct Interface {
    InterfaceTable* table;
};

struct List {
    void* head;
    char padding[28];

    void clear();
    ~List();
};

inline List::~List()
{
    clear();
    operator delete(head);
}

struct COutputView : S_func_00465a80 {
    char padding[244];
    List list;
    Interface* first;
    Interface* second;

    ~COutputView();
};

COutputView::~COutputView()
{
    if (second)
        second->table->release(second);
    if (first)
        first->table->release(first);
}
