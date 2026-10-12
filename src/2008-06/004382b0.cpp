// from server: 98% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Str {
    int words[8];
};

extern int (__thiscall* string_compare)(Str*, const char*);
extern void (__thiscall* string_destroy)(Str*);

struct StringTemporary {
    int storage;
    operator Str*();
    ~StringTemporary();
};

inline StringTemporary::operator Str*()
{
    return reinterpret_cast<Str*>(this);
}

inline StringTemporary::~StringTemporary()
{
    string_destroy(reinterpret_cast<Str*>(this));
}

struct Rect {
    int left, top, right, bottom;
};

struct Value {
    int data;
    Value(int);
    Value(const Value&);
};

extern Value __cdecl make_value(int);

struct Grid {
    int notify(int, int);
    void convert_rect(Rect*);
};

struct Popup {
    char padding[0x17c];
    unsigned char accepted;
    char padding2[3];
    int color;

    Popup();
    void set_color(int);
    int get_color();
};

struct Manager {
    void attach(Popup*, int, int, int, int);
};

struct Owner {
    char padding[0xfc];
    Manager* manager;
    void release();
};

struct Window {
    void** table;
};

extern Owner* __cdecl get_owner(int);
extern Window* __cdecl get_window();
extern int __cdecl show_popup(Owner*, int, int, int, int, int, int);

struct Item {
    virtual void slot00();
    virtual void slot01();
    virtual void slot02();
    virtual void slot03();
    virtual void slot04();
    virtual void slot05();
    virtual void slot06();
    virtual void slot07();
    virtual void slot08();
    virtual void slot09();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void set_value(Value);

    char padding[0xb8];
    Grid* grid;

    void get_rect(Rect*);
    StringTemporary copy();
    void activate(int);
};

void Item::activate(int argument)
{
    if (grid->notify(5, argument) == 1)
        return;

    if (!reinterpret_cast<int (__thiscall*)(Item*)>(
            (*reinterpret_cast<void***>(this))[0x90 / 4])(this))
        return;

    Rect rect;
    get_rect(&rect);
    grid->convert_rect(&rect);
    rect.left = rect.right - 158;

    Owner* owner = get_owner(0);
    Popup* popup = new Popup;
    owner->manager->attach(popup, 0, 0, -1, 0);

    bool authoring = string_compare(copy(), ">Authoring") != 0;

    if (authoring)
        popup->set_color(
            reinterpret_cast<int (__thiscall*)(Item*)>(
                (*reinterpret_cast<void***>(this))[0xe8 / 4])(this));

    Window* window = get_window();
    int handle = window
        ? reinterpret_cast<int (__thiscall*)(Window*)>(
            window->table[0x7c / 4])(window)
        : 0;

    if (show_popup(owner, 0x88, rect.right, rect.bottom, handle, 0, 0)
        && popup->accepted)
    {
        set_value(make_value(popup->get_color()));
    }

    owner->release();
}
