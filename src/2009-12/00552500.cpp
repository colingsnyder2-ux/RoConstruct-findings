// from server: 93% by atomic.potato
extern "C" int __cdecl printf(const char *, ...);

struct Exposer
{
    int f(const char *);
};

int Exposer::f(const char *value)
{
    return printf("ID_FCM_HOST_LIST_UPDATE", value);
}
