// from server: 92% by king_originala
struct Text;

extern void (__thiscall *constructText)(Text *, const char *);
extern void (__thiscall *destroyText)(Text *);

struct Text {
    void *data;
    Text(const char *);
    ~Text();
};

inline Text::Text(const char *value) : data(0)
{
    constructText(this, value);
}

inline Text::~Text()
{
    destroyText(this);
}

struct DxUserInput {
    void helper(int, const Text *);
    int func_0046a440(int);
};

int DxUserInput::func_0046a440(int value)
{
    Text name("FileVersion");
    helper(value, &name);
    return value;
}
