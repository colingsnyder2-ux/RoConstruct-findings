// from server: 96% by atomic.potato
struct Teams
{
    int isReady(void *);
};

extern "C" int __stdcall helper(int);

int Teams::isReady(void *value)
{
    if (!*(unsigned char *)((char *)value + 0xb0))
        return 0;
    return helper(*(int *)((char *)value + 0xac));
}
