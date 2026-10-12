// from server: 58% by colin
struct Str_0042e700 { int words[8]; };

struct X_0042e700
{
    char pad[0x44];
    Str_0042e700 value;
    Str_0042e700* copy(Str_0042e700* out);
};

extern void (__thiscall* str_ctor_0042e700)(Str_0042e700*, Str_0042e700*);

Str_0042e700* X_0042e700::copy(Str_0042e700* out)
{
    volatile int zero = 0;
    str_ctor_0042e700(out, &value);
    return out;
}

struct CRobloxControlColorSelector
{
    char pad0[0xe8];
    char field_e8;
    char pad1[0x15c - 0xe9];
    X_0042e700* field_15c;

    CRobloxControlColorSelector* method(char* arg);
};

extern "C" int (__stdcall* fn_802fd8)(void*);
extern "C" void (__stdcall* fn_803f10)(void*, const char*);
extern "C" void (__stdcall* fn_803ed4)(void*, void*);
extern "C" void (__stdcall* fn_803f14)(void*);

CRobloxControlColorSelector* CRobloxControlColorSelector::method(char* arg)
{
    char local10[8];
    char local18[8];
    int state = 0;
    void* result;

    if (fn_802fd8(&field_e8))
    {
        if (field_15c == 0)
        {
            result = field_15c->copy((Str_0042e700*)local10);
            state = 1;
        }
        else
        {
            fn_803f10(local18, ">Authoring");
            state = 2;
            result = local18;
        }
    }
    else
    {
        result = &field_e8;
    }

    fn_803ed4(arg, result);

    state |= 4;
    if (state & 2)
    {
        state &= ~2;
        fn_803f14(local10);
    }
    if (state & 1)
    {
        fn_803f14(local18);
    }

    return this;
}
