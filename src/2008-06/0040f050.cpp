// from server: 94% by king_originala
typedef unsigned long DWORD;

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Rect {
    int left, top, right, bottom;
    Rect(int, int, int, int);
};

inline Rect::Rect(int l, int t, int r, int b)
    : left(l), top(t), right(r), bottom(b)
{
}

struct Window;
struct View;
struct Unknown;
struct String;

extern const char windowClass[];
extern const char windowType[];
extern const char viewType[];

extern const char *(__thiscall *stringData)(const String *);
extern void (__thiscall *stringAssign)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *) throw();

struct String {
    void *data;
    ~String() throw();
};

inline String::~String() throw()
{
    stringDestroy(this);
}

struct UnknownTable {
    long (__stdcall *query)(Unknown *, const void *, void **);
    unsigned long (__stdcall *addRef)(Unknown *);
    unsigned long (__stdcall *release)(Unknown *);
};

struct Unknown {
    UnknownTable *table;
};

struct WindowTable {
    void *unused[81];
    int (__thiscall *create)(Window *, const char *, const char *,
                            DWORD, const Rect &, Window *, unsigned int,
                            void *, void *);
};

struct Window {
    WindowTable *table;
    unsigned char storage[228];

    Window();
    void modifyStyle(DWORD, DWORD, unsigned int);
    void getClientRect(Rect *);
    void setWindowPos(Window *, int, int, int, int, unsigned int);
    void showWindow(int, int);
};

struct View {
    unsigned char storage[708];
    Unknown *object;
    unsigned long reserved;
    String text;

    void navigate(const char *, DWORD, const char *, const char *,
                  void *, DWORD);
};

extern Window *__stdcall createView(Window *, const char *, const char *,
                                     void *, DWORD, unsigned int,
                                     unsigned int);
extern View *__cdecl castView(Window *, int, const void *, const void *, int);

View *__cdecl makeView(Rect rect, Window *parent, String text, Unknown *object)
{
    Window *window = new Window;

    window->table->create(window, 0, 0, 0x00cf0000, Rect(0, 0, 0, 0),
                          parent, 0, 0, 0);
    window->modifyStyle(0x200, 0x80, 0);

    View *view = castView(
        createView(window, windowClass, 0, 0, 0x50800000, 0, 0xe900),
        0, windowType, viewType, 0);

    if (view->object != object) {
        if (object)
            object->table->addRef(object);
        if (view->object)
            view->object->table->release(view->object);
        view->object = object;
    }

    const char *value = stringData(&text);
    stringAssign(&view->text, value);
    view->navigate(value, 0, 0, 0, 0, 0);

    parent->getClientRect(&rect);
    window->setWindowPos(0, rect.left, rect.top,
                         rect.right - rect.left,
                         rect.bottom - rect.top, 4);
    window->showWindow(0, 1);
    return view;
}
