// from server: 94% by king_originala
struct Text;

extern void (__thiscall *textConstruct)(Text*);
extern void (__thiscall *textDestroy)(Text*);
extern int (__thiscall *textLoad)(Text*, unsigned int);
extern const char* (__thiscall *textData)(const Text*);

struct Text {
    char* data;
    Text();
    ~Text() throw();
    int load(unsigned int);
    operator const char*() const;
};

inline Text::Text()
{
    textConstruct(this);
}

inline Text::~Text() throw()
{
    textDestroy(this);
}

inline int Text::load(unsigned int id)
{
    return textLoad(this, id);
}

inline Text::operator const char*() const
{
    return textData(this);
}

struct Command {
    virtual void enable(int);
    virtual void check(int);
    virtual void radio(int);
    virtual void setText(const char*);
};

struct Control {
    int query(int);
};

struct CScriptEditor {
    int* f();
    void update(Command*);
};

void CScriptEditor::update(Command* command)
{
    Text text;
    if (reinterpret_cast<Control*>(f())->query(1))
        text.load(0xe704);

    typedef void (__thiscall *SetText)(Command*, const char*);
    SetText* table = *reinterpret_cast<SetText**>(command);
    const char* value = text;
    table[3](command, value);
}
