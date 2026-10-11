// from server: 28% by atomic.potato
extern "C" void* __cdecl sub_718A38(unsigned int);
extern "C" void __cdecl sub_719A4A(void*, void*);
extern "C" void* __cdecl sub_89E9C4();

struct TextureProxy;

struct Factory {
    void* ctor(int, int, char);
};

struct Factory2 {
    void* ctor(int, int, char);
};

struct Exception {
    Exception(const char**);
};

extern "C" void* __stdcall sub_5AF5B0(void*, int, int, char);
extern "C" void* __stdcall sub_5AF2C0(void*, int, int, char);

extern int g_factoryType;
extern const char* g_invalidFactoryType;
extern void* g_exceptionVtable;
extern const char* g_textureProxyName;

void* __cdecl CreateTextureProxy(int a, int b, char c)
{
    if (g_factoryType == 0)
    {
        Factory* f = (Factory*)sub_718A38(0x68);
        if (f != 0)
        {
            return sub_5AF5B0(f, a, b, c);
        }
        return 0;
    }
    else if (g_factoryType == 1)
    {
        Factory2* f = (Factory2*)sub_718A38(0x54);
        if (f != 0)
        {
            return sub_5AF2C0(f, a, b, c);
        }
        return 0;
    }
    else
    {
        const char* msg = g_invalidFactoryType;
        Exception e(&msg);
        sub_719A4A(&e, (void*)g_textureProxyName);
        return 0;
    }
}
