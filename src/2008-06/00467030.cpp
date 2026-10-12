// from server: 88% by king_originala
struct Rect {
    int left, top, right, bottom;
};

struct Size {
    int cx, cy;
};

struct Model {
    void* getValue();
};

struct ModelRef {
    Model* p;
    void* control;
    ~ModelRef();
    void* getValue() const;
};

inline void* ModelRef::getValue() const
{
    return p ? p->getValue() : 0;
}

ModelRef getModel();
extern const char itemText[];
extern "C" int __stdcall GetWindowRect(void*, Rect*);

struct Dialog;
struct Window;

struct WindowTable {
    void* reserved[81];
    int (__thiscall* createChild)(Window*, const Rect*, Window*, unsigned);
    int (__thiscall* create)(Window*, Dialog*, unsigned, unsigned, unsigned, unsigned);
    int (__thiscall* addItem)(Window*, unsigned, unsigned, const char*, Size, unsigned);
};

struct Window {
    WindowTable* table;
    char reserved1[28];
    void* handle;
    char reserved2[244];

    unsigned getStyle(unsigned, unsigned, unsigned);
    Window* getItem(unsigned, unsigned);
    void setModel(Model*);
    void setValue(void*);
    void move(int, int, int, int, int);
};

struct Dialog {
    char reserved[116];
    Window list;
    Window* item;
    Window child;

    int initializeBase();
    Window* getControl(int);
    void screenToClient(Rect*);
    int initialize();
};

int Dialog::initialize()
{
    if (!initializeBase())
        return 0;

    if (!list.table->create(&list, this, 1, 2, 0x50000000, 0xe900))
        return 0;

    Size size = {200, 200};
    if (!list.table->addItem(&list, 0, 0, itemText, size, 0))
        return 0;

    item = list.getItem(0, 0);
    item->setModel(getModel().p);

    Rect empty = {0, 0, 0, 0};
    child.table->createChild(&child, &empty, &list, list.getStyle(0, 1, 0));

    void* value = getModel().getValue();
    child.setValue(value);

    Rect rect;
    void* handle = getControl(1001)->handle;
    GetWindowRect(handle, &rect);
    screenToClient(&rect);
    list.move(rect.left, rect.top,
              rect.right - rect.left, rect.bottom - rect.top, 1);
    return 1;
}
