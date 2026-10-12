// from server: 90% by king_originala
struct Text;
struct Output;

extern void (__thiscall *construct_text)(Text *, const char *);
extern void (__thiscall *construct_output)(Output *, const char *, int, int, int);
extern Output &(__thiscall *flush_output)(Output *);

extern const unsigned int table[];
extern const char prefix[];
extern const char suffix[];

void __cdecl set_logging(int);
Output &__cdecl append(Output &, const char *);

struct Text {
    char storage[28];
    Text(const char *);
    ~Text();
};

struct Output {
    Output(const char *, int, int, int);
    ~Output();
};

inline Text::Text(const char *s)
{
    construct_text(this, s);
}

inline Output::Output(const char *s, int mode, int protection, int flag)
{
    construct_output(this, s, mode, protection, flag);
}

struct Log {
    const unsigned int *vtable;
    Text name;
    int state;
    Text filename;
    Output output;

    Log(const char *, const char *);
};

Log::Log(const char *path, const char *label)
    : vtable(table),
      name(label),
      state(0),
      filename(path),
      output(path, 2, 64, 1)
{
    set_logging(1);
    append(append(append(output, prefix), label), suffix);
    flush_output(&output);
}
