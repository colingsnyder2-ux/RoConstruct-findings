// from server: 53% by atomic.potato
extern "C" int __cdecl fputs(const char *, void *);

struct FilePacketLogger
{
    void f(void *);
};

void FilePacketLogger::f(void *arg)
{
    void *p = *(void **)((char *)this + 0x20c);
    if (p)
    {
        fputs((const char *)arg, p);
        fputs((const char *)0x818744, p);
    }
}
