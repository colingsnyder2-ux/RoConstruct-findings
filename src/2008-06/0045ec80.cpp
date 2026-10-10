// from server: 91% by atomic.potato
typedef int (__cdecl *Callback)(void *, void *, void *, int);

extern "C" int __cdecl sub_006A17C6(
    int,
    void *,
    void *,
    void *,
    int
);

struct StatsService
{
    int f(void *);
};

int StatsService::f(void *arg)
{
    return sub_006A17C6((int)arg, (void *)0x92907C, (void *)0x9320F4, 0, 0) != 0;
}
