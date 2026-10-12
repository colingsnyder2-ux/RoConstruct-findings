// from server: 87% by king_originala
struct Text;
extern char* (__thiscall *get_buffer)(Text*, int);
extern void (__thiscall *destroy_text)(Text*);

struct Text {
    char storage[4];
    char* buffer(int);
    ~Text();
};

inline char* Text::buffer(int n)
{
    return get_buffer(this, n);
}

inline Text::~Text()
{
    destroy_text(this);
}

extern Text __cdecl make_exception();
extern Text __cdecl concatenate(const Text&, const char*);

struct Dialog {
    char storage[304];
    Dialog(int, char*);
    void set_owner(void*);
    void run();
    ~Dialog();
};

struct S {
    char padding[148];
    void* owner;
    void report();
};

void S::report()
{
    Dialog dialog(123,
        concatenate(make_exception(), "/AbuseReport/InGameChat.aspx").buffer(0));
    dialog.set_owner(owner);
    dialog.run();
}
