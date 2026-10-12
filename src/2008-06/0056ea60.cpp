// from server: 78% by king_originala
struct TypeInfo
{
    void* field0;
    void* field4;
    const TypeInfo* field8;
};

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Any
{
    Placeholder* content;
};

struct IntHolder
{
    void* vtable;
    int value;
};

extern bool (__thiscall *g_802878)(const TypeInfo*, const TypeInfo*);
extern TypeInfo g_92bedc;
extern TypeInfo g_92bee8;
extern TypeInfo g_929644;
extern char g_8106cc;

extern TypeInfo* __cdecl func_0056cbc0();
extern void* __cdecl func_006a0920(unsigned int);
extern float __cdecl func_00415ff0(Any*);
extern double __cdecl func_00416080(Any*);
extern bool __cdecl func_00415f60(Any*);

struct PropDesc
{
    TypeInfo* descriptor;
    Any value;

    void setValue();
    void finish();
};

void PropDesc::setValue()
{
    bool (__thiscall *typeCheck)(const TypeInfo*, const TypeInfo*) = g_802878;

    if (typeCheck(&g_92bedc, descriptor->field8))
    {
        volatile float f = func_00415ff0(&value);
        volatile int iv = (int)f;
        IntHolder* p = (IntHolder*)func_006a0920(8);
        if (p)
        {
            p->vtable = &g_8106cc;
            p->value = iv;
        }
        else
            p = 0;

        Any temporary;
        temporary.content = (Placeholder*)p;
        Placeholder* old = temporary.content;
        if (&temporary != &value)
        {
            old = value.content;
            value.content = temporary.content;
        }
        if (old)
            delete old;
        descriptor = func_0056cbc0();
    }

    if (typeCheck(&g_92bee8, descriptor->field8))
    {
        volatile double d = func_00416080(&value);
        volatile int iv = (int)d;
        IntHolder* p = (IntHolder*)func_006a0920(8);
        if (p)
        {
            p->vtable = &g_8106cc;
            p->value = iv;
        }
        else
            p = 0;

        Any temporary;
        temporary.content = (Placeholder*)p;
        Placeholder* old = temporary.content;
        if (&temporary != &value)
        {
            old = value.content;
            value.content = temporary.content;
        }
        if (old)
            delete old;
        descriptor = func_0056cbc0();
    }

    if (typeCheck(&g_929644, descriptor->field8))
    {
        int iv = func_00415f60(&value) ? 1 : 0;
        IntHolder* p = (IntHolder*)func_006a0920(8);
        if (p)
        {
            p->vtable = &g_8106cc;
            p->value = iv;
        }
        else
            p = 0;

        Any temporary;
        temporary.content = (Placeholder*)p;
        Placeholder* old = temporary.content;
        if (&temporary != &value)
        {
            old = value.content;
            value.content = temporary.content;
        }
        if (old)
            delete old;
        descriptor = func_0056cbc0();
    }

    finish();
}
