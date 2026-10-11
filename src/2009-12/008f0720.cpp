// from server: 55% by atomic.potato
struct CXTPRibbonControlTab
{
    struct State
    {
        int pad0[29];
        int (__thiscall *check)(State *);
    };

    struct Data
    {
        int pad0[56];
        int value;
    };

    int IsSomething();
};

int CXTPRibbonControlTab::IsSomething()
{
    State *state = (State *)((char *)this - 0x184);
    if (!state->check(state))
        return 0;

    Data *data = (Data *)((char *)this - 0x84);
    if (data->value == 0)
        return 0;

    return 1;
}
