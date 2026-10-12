// from server: 97% by king_originala
struct Text {
    const char* data;
};

struct Guard {
    ~Guard();
};

typedef Text* (__thiscall *AssignText)(Text*, const char*);
typedef const char* (__thiscall *ReadText)(const Text*);

extern AssignText assignText;
extern ReadText readText;
extern Text findText;
extern Text replaceText;
extern int searchFlags;
extern int searchDirection;
extern int searchMode;
extern int searchOption;

struct State {
    void prepare();
};

struct Context {
    int unused;
    State* state;
};

extern Context* __cdecl getContext();

struct Control {
    int setSelection(int, int, int);
    int setReadOnly(int, int);
    int replaceSelection(const char*, int);
};

struct View;

typedef int (__thiscall *FallbackCall)(
    View*, const char*, int, int, int, int, int);
typedef int (__thiscall *SearchCall)(
    View*, const char*, int, int, int, int);

struct ViewTable {
    void* preceding[106];
    FallbackCall fallback;
    void* intermediate[2];
    SearchCall search;
};

struct View {
    ViewTable* table;
    char padding[84];
    Control control;

    void replaceAll(const char*, const char*, int, int, int);
};

void View::replaceAll(const char* find, const char* replacement,
                      int flags, int mode, int option)
{
    assignText(&findText, find);
    assignText(&replaceText, replacement);
    searchFlags = flags;
    searchMode = mode;
    searchDirection = 1;
    searchOption = option;

    getContext()->state->prepare();
    Guard guard;

    control.setSelection(0, 0, 1);
    control.setReadOnly(1, 0);

    int found = 0;
    if (table->search(this, readText(&findText), searchDirection,
                      flags, mode, option)) {
        found = 1;
        do {
            control.replaceSelection(readText(&replaceText), 1);
        } while (table->search(this, readText(&findText),
                               searchDirection, flags, mode, option));
    }

    control.setReadOnly(0, 0);
    if (!found)
        table->fallback(this, readText(&findText), searchDirection,
                        flags, mode, option, 1);
}
