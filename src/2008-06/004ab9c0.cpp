// from server: 95% by king_originala
struct Scope
{
    const char* name;
    void* previous;
    bool enabled;
    double startTime;

    Scope(const char*, bool);
    ~Scope();
};

struct Target;
struct TargetTable
{
    void* unused[2];
    int (__thiscall* invoke)(Target*, int);
};

struct Target
{
    TargetTable* table;
};

struct S_func_004ab9c0
{
    char pad0[0x2B80];
    Target* target;
    char pad1[0x1AC];
    const char* scopeName1;
    char pad2[4];
    const char* scopeName2;

    int f(int value);
};

int S_func_004ab9c0::f(int value)
{
    Scope first(scopeName1, false);
    Scope second(scopeName2, false);
    return target->table->invoke(target, value);
}
