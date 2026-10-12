// from server: 94% by king_originala
struct Text;

extern void (__thiscall *textConstruct)(Text*);
extern void (__cdecl *textFormat)(Text*, unsigned int, ...);
extern const char* (__thiscall *textData)(const Text*);
extern void (__thiscall *textDestroy)(Text*);

struct Text {
    char* data;
    Text();
    __declspec(nothrow) ~Text();
    const char* get() const;
    void format(unsigned int, int);
};

inline Text::Text()
{
    textConstruct(this);
}

inline Text::~Text()
{
    textDestroy(this);
}

inline const char* Text::get() const
{
    return textData(this);
}

inline void Text::format(unsigned int resource, int value)
{
    textFormat(this, resource, value);
}

struct Control {
    int position(bool);
    int line(int, bool);
};

struct Command;
typedef void (__thiscall *SetText)(Command*, const char*);

struct CommandTable {
    void* slots[3];
    SetText setText;
};

struct Command {
    CommandTable* table;
};

struct CScriptEditor {
    int* control();
    void func_00464270(Command*);
};

void CScriptEditor::func_00464270(Command* command)
{
    Control* p = reinterpret_cast<Control*>(control());
    int position = p->position(true);
    int line = p->line(position, true);
    Text text;
    text.format(200, line);
    CommandTable* table = command->table;
    const char* value = text.get();
    table->setText(command, value);
}
