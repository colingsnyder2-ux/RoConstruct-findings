// from server: 95% by king_originala
struct Control {
    int func_00460120(int);
    int func_00460c10(int, int);
    int func_004610e0(int, int);
};

struct Text {
    char* data;
    Text();
    ~Text();
};

extern void (__thiscall* text_construct)(Text*);
extern void (__cdecl* text_format)(Text*, unsigned int, ...);
extern const char* (__thiscall* text_data)(Text*);
extern void (__thiscall* text_destroy)(Text*);

__forceinline Text::Text()
{
    text_construct(this);
}

__forceinline Text::~Text()
{
    text_destroy(this);
}

struct Output {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(const char*) = 0;
};

struct CScriptEditor {
    int* func_004613d0();
    void func_00464300(Output*);
};

void CScriptEditor::func_00464300(Output* output)
{
    Control* control = reinterpret_cast<Control*>(func_004613d0());
    int value = control->func_00460120(1);
    value = control->func_00460c10(value, 1);
    value = control->func_004610e0(value, 1);
    value = (value & 0xfff) - 0x400;

    Text text;
    text_format(&text, 201, value);
    output->set(text_data(&text));
}
