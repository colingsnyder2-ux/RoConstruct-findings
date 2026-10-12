// from server: 81% by king_originala
struct Shared
{
    void* pointer;
    void* control;

    Shared(const Shared&);
    ~Shared();
};

struct Selection
{
    void* first;
    void* second;

    Selection(Shared);
    ~Selection();
};

struct Point
{
    int x;
    int y;
};

struct Tree;

struct TreeVTable
{
    void* unused[85];
    Shared (__thiscall *getSelection)(Tree*);
};

struct Tree
{
    TreeVTable* vtable;

    void focus();
    void* hitTest(Point, unsigned int*);
    char* itemData(void*);
    void func_004237d0(unsigned int, Point);
};

struct Manager
{
    void select(Shared);
};

struct Context
{
    void* unused;
    Manager* manager;
};

extern Shared __cdecl func_004236d0(void*);
extern Context* __cdecl func_006a0926();

void Tree::func_004237d0(unsigned int flags, Point point)
{
    focus();
    if (flags & 0x0c)
        return;

    void* item = hitTest(point, &flags);
    if (!item)
        return;
    if (!(flags & 0x46))
        return;

    char* data = itemData(item);
    if (!data)
        return;

    Shared value = func_004236d0(data + 12);
    if (value.pointer)
    {
        Selection selection(vtable->getSelection(this));
        func_006a0926()->manager->select(value);
    }
}
