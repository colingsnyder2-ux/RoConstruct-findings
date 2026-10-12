// from server: 92% by king_originala
extern "C" unsigned long (__stdcall *GetModuleFileNameA)(
    void *, char *, unsigned long);

struct Text;
extern void (__thiscall *textConstruct)(Text *, const char *);
extern void (__thiscall *textDestroy)(Text *);

struct Text
{
    void *data;
    Text(const char *);
    ~Text() throw();
};

__forceinline Text::Text(const char *s)
{
    textConstruct(this, s);
}

__forceinline Text::~Text() throw()
{
    textDestroy(this);
}

struct DxUserInput
{
    int process(const Text &);
    int func_0046a4f0(void *);
};

int DxUserInput::func_0046a4f0(void *module)
{
    char path[500];
    GetModuleFileNameA(module, path, 500);
    Text text(path);
    return process(text);
}
