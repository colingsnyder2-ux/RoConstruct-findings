// from server: 84% by atomic.potato
struct FlagStandService
{
    void *Find(void *);
    void Update(void *);
};

void FlagStandService::Update(void *arg)
{
    void *value = Find(arg);
    if (value)
        ((FlagStandService *)value)->Update(arg);
}
