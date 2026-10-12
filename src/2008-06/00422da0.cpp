// from server: 85% by king_originala
extern "C" long __stdcall SendMessageA(void *, unsigned int, unsigned int, long);
extern "C" void __stdcall helper_006a0eba(long);

struct S;
struct Sub;

struct SubTable
{
    void *unused0[16];
    void (__thiscall *set)(Sub *, int);
    void *unused1;
    void (__thiscall *clear)(Sub *);
};

struct Sub
{
    SubTable *table;
};

struct Table
{
    void *unused[89];
    void (__thiscall *refresh)(S *);
};

struct Handle
{
    unsigned int unused;
    long value;
    long get() const;
};

inline long Handle::get() const
{
    return this ? value : 0;
}

struct S
{
    Table *table;
    char padding0[0x1c];
    void *window;
    char padding1[0x30];
    Sub control;
    char padding2[0x64];
    Handle handle;

    int helper_006a0c68();
    int func_00422da0(int);
};

int S::func_00422da0(int)
{
    if (helper_006a0c68() == -1)
        return -1;

    control.table->clear(&control);
    helper_006a0eba(SendMessageA(window, 0x1109, 0, handle.get()));
    control.table->set(&control, 1);
    table->refresh(this);
    return 0;
}
