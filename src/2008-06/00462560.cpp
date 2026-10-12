// from server: 98% by king_originala
struct Text;
struct Editor;
struct S;
struct Dialog;

extern void* (__stdcall *SetActiveWindow)(void*);
extern long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);
extern "C" void __stdcall activate(void*);

extern bool (__thiscall *textEmpty)(const Text*);
extern int (__thiscall *textFind)(const Text*, const char*);
extern void (__thiscall *textAssign)(Text*, const char*);
extern void (__thiscall *textConstruct)(Text*, const char*);
extern const char* (__thiscall *textData)(const Text*);
extern void (__thiscall *textDestroy)(Text*);

struct Text {
    void* data;
    Text(Editor*);
    Text(const char*);
    ~Text() throw();
};

struct Editor {
    char padding[0x54];
    int (__cdecl *direct)(int, unsigned int, unsigned int, int);
    int context;
    Text* getSelectedText(Text*);
};

inline Text::Text(Editor* editor)
{
    editor->getSelectedText(this);
}

inline Text::Text(const char* value)
{
    textConstruct(this, value);
}

inline Text::~Text() throw()
{
    textDestroy(this);
}

struct DialogTable {
    char padding[0x16c];
    int (__thiscall *create)(Dialog*, int, const char*, const char*, unsigned int, S*);
};

struct Dialog {
    DialogTable* table;
    char padding1[0x1c];
    void* window;
    char padding2[0x178];
    int option;
    void show(int);
};

struct ViewTable {
    char padding[0x1cc];
    Dialog* (__thiscall *makeDialog)(S*);
};

struct S {
    ViewTable* table;
    char padding1[0x54];
    Editor editor;
    char padding2[0x24];
    int active;
    void f(int);
};

extern Dialog* currentDialog;
extern int currentMode;
extern const char defaultText[];
extern const char initialText[];
extern const char replacementText[];
extern int matchCase;
extern int searchDown;
extern int wholeWord;
extern int extraOption;

void S::f(int mode)
{
    active = 1;
    if (currentDialog) {
        if (currentMode == mode) {
            activate(SetActiveWindow(currentDialog->window));
            currentDialog->show(5);
            return;
        }
        SendMessageA(currentDialog->window, 0x10, 0, 0);
    }

    Text selected(&editor);
    if (textEmpty(&selected) || textFind(&selected, defaultText) != -1)
        textAssign(&selected, initialText);

    Text replacement(replacementText);
    currentDialog = table->makeDialog(this);

    unsigned int flags = 0;
    if (searchDown)
        flags = 1;
    if (matchCase)
        flags |= 4;
    if (wholeWord)
        flags |= 2;
    if (extraOption)
        currentDialog->option = 1;

    DialogTable* dialogTable = currentDialog->table;
    if (!dialogTable->create(currentDialog, mode, textData(&selected),
                             textData(&replacement), flags, this)) {
        currentDialog = 0;
    } else {
        currentMode = mode;
        activate(SetActiveWindow(currentDialog->window));
        currentDialog->show(5);
    }
}
