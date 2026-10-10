// from server: 81% by atomic.potato
extern "C" int __stdcall WSAStartup(unsigned short, void *);

volatile int g_startupCount;

int sub_0052d8e0()
{
    int count = ++g_startupCount;
    char data[400];

    if (count == 1)
        WSAStartup(0x0202, data);

    return count;
}
