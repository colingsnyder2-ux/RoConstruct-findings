// from server: 42% by atomic.potato
struct RunningBase
{
    int vftable0;
    int vftable1;
    int Initialize();
    void Register();
    RunningBase* f(unsigned int flags);
};

int RunningBase::Initialize()
{
    return 0;
}

void RunningBase::Register()
{
}

RunningBase* RunningBase::f(unsigned int flags)
{
    vftable0 = 0x84cc38;
    vftable1 = 0x84cc30;
    Initialize();
    if (flags & 1)
        Register();
    return this;
}
