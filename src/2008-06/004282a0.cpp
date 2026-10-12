// from server: 93% by king_originala
struct S;

extern void (__thiscall *G_ctor)(S *);
extern void (__thiscall *G_dtor)(S *) throw();
extern S &(__cdecl *G_append)(S &, const char *);
extern const char *(__thiscall *G_text)(S *);
extern void __cdecl G_func_00427c20(int, const char *);

struct S
{
    unsigned int storage;
    S();
    ~S() throw();
};

struct Crash
{
    int value;
    int source;
};

inline S::S()
{
    G_ctor(this);
}

inline S::~S() throw()
{
    G_dtor(this);
}

void func_004282a0()
{
    S message;
    G_append(message, "Pure Call Error");
    G_func_00427c20(1, G_text(&message));
    Crash *p = 0;
    p->value = p->source;
}
