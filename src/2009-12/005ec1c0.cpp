// from server: 74% by atomic.potato
extern "C" int __cdecl fprintf(void*, const char*, ...);

struct Inner {
    char pad0[4];
    char* data;
    unsigned int len;
    unsigned int cap;
};

struct S {
    char pad0[4];
    void* field4;
    void log(const Inner* msg);
};

extern void* g_98b800;
extern char g_9a3810[];

void sub_5ec030();

void S::log(const Inner* msg)
{
    if (field4 != 0) {
        sub_5ec030();
        const char* p;
        if (msg->cap >= 0x10)
            p = msg->data;
        else
            p = (const char*)msg + 4;
        fprintf(g_98b800, g_9a3810, p);
    }
}
