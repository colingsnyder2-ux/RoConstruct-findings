// from server: 93% by king_originala
struct Text;
typedef const char* (__thiscall *TextAccess)(const Text*);
typedef void (__thiscall *TextDestroy)(Text*);

extern TextAccess textAccess;
extern TextDestroy textDestroy;

struct Text {
    char* data;
    ~Text() throw();
    operator const char*() const;
};

inline Text::~Text() throw()
{
    textDestroy(this);
}

inline Text::operator const char*() const
{
    return textAccess(this);
}

typedef int (__thiscall *FindEntry)(void*, int, const char*);

struct SearchObject {
    FindEntry* table;
};

struct Window {
    char pad[0x20];
    void* handle;
};

struct Combo {
    char pad[0x178];
    Window* list;
    char gap[8];
    Window* edit;

    Text getText();
    int getSomething();
    void finalize(int);
};

typedef long (__stdcall *MessageFunction)(void*, unsigned int,
                                         unsigned int, long);
extern MessageFunction SendMessageA;

struct CBrowserView {
    char pad[0x118];
    Combo* combo;

    void navigate(const char*, unsigned long, const char*, const char*,
                  void*, unsigned long);
    void func_0040e7f0();
};

void CBrowserView::func_0040e7f0()
{
    Text text = combo->getText();
    const char* value = text;
    SearchObject* object = (SearchObject*)combo->getSomething();
    int result = object->table[133](object, -1, value);
    MessageFunction send = SendMessageA;

    if (result == -1) {
        send(combo->list->handle, 0x181, 0, (long)(const char*)text);
        if (send(combo->list->handle, 0x18b, 0, 0) > 10)
            combo->finalize(send(combo->list->handle, 0x18b, 0, 0) - 1);
    }

    navigate(text, 0, 0, 0, 0, 0);

    Window* edit = combo->edit;
    send(edit->handle, 0xb1, 0, -1);
    send(edit->handle, 0xb7, 0, 0);
}
