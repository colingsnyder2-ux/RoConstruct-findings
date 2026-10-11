// from server: 39% by atomic.potato
typedef unsigned long DWORD;

struct Sub1
{
    void ctor();
};

struct Sub2
{
    void ctor();
};

struct Sub3
{
    void ctor();
};

struct VRunServiceMarshaledListener
{
    void ctor();
};

void VRunServiceMarshaledListener::ctor()
{
    char *base = (char *)this;
    ((Sub1 *)(base + 0xec))->ctor();
    ((Sub2 *)(base + 0xf0))->ctor();
    ((Sub3 *)(base + 0x114))->ctor();
    *(DWORD *)(base + 0x00) = 0x81b3dc;
    *(DWORD *)(base + 0xec) = 0x81b3d0;
    *(DWORD *)(base + 0xf0) = 0x81b3bc;
    *(DWORD *)(base + 0x114) = 0x81b3a8;
    *(DWORD *)(base + 0x138) = 0;
    *(DWORD *)(base + 0x13c) = 0;
    *(DWORD *)(base + 0x140) = 0;
    *(DWORD *)(base + 0x144) = 0;
    *(DWORD *)(base + 0x148) = 0;
    *(DWORD *)(base + 0x14c) = 0;
    *(DWORD *)(base + 0x150) = 0;
    *(char *)(base + 0x154) = 0;
    *(char *)(base + 0x155) = 0;
    *(char *)(base + 0x156) = 0;
    *(DWORD *)(base + 0x15c) = 0;
    *(DWORD *)(base + 0x158) = 0x81b228;
}
