// from server: 80% by king_originala
struct String;

extern int (__thiscall *stringEmpty)(const String *);
extern int (__thiscall *stringFind)(const String *, const char *);
extern String &(__thiscall *stringAssign)(String *, const String &);
extern void (__thiscall *stringCopy)(String *, const String &);
extern const char *(__thiscall *stringData)(const String *);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    char *data;
    String(const String &other) { stringCopy(this, other); }
    ~String() { stringDestroy(this); }
    const char *c_str() const { return stringData(this); }
};

struct Selection {
    String get();
};

struct View;
struct Dialog;

struct ViewTable {
    void *unused[115];
    Dialog *(__thiscall *makeDialog)(View *);
};

struct DialogTable {
    void *unused[91];
    int (__thiscall *create)(Dialog *, int, const char *, const char *, unsigned int, View *);
};

struct Dialog {
    DialogTable *table;
    char reserved04[0x1c];
    void *window;
    char reserved24[0x178];
    int option;
    void show(int);
};

struct View {
    ViewTable *table;
    char reserved04[0x54];
    Selection selection;
    char reserved59[0x7f];
    int active;
    void open(int);
};

extern Dialog *currentDialog;
extern int currentKind;
extern String defaultSearch;
extern String replacement;
extern int flagC0;
extern int flagC4;
extern int flagC8;
extern int flagCC;
extern const char searchPattern[];

extern "C" void *__stdcall SetActiveWindow(void *);
extern "C" long __stdcall SendMessageA(void *, unsigned int, unsigned int, long);
extern Dialog *__stdcall fromHandle(void *);

void View::open(int kind)
{
    active = 1;

    if (currentDialog) {
        if (currentKind == kind) {
            fromHandle(SetActiveWindow(currentDialog->window));
            currentDialog->show(5);
            return;
        }
        SendMessageA(currentDialog->window, 16, 0, 0);
    }

    String search = selection.get();
    if (stringEmpty(&search) || stringFind(&search, searchPattern) != -1)
        stringAssign(&search, defaultSearch);

    String replace(replacement);
    currentDialog = table->makeDialog(this);

    unsigned int flags = 0;
    if (flagC4)
        flags = 1;
    if (flagC0)
        flags |= 4;
    if (flagC8)
        flags |= 2;
    if (flagCC)
        currentDialog->option = 1;

    if (!currentDialog->table->create(currentDialog, kind,
                                      search.c_str(), replace.c_str(),
                                      flags, this)) {
        currentDialog = 0;
    } else {
        currentKind = kind;
        fromHandle(SetActiveWindow(currentDialog->window));
        currentDialog->show(5);
    }
}
