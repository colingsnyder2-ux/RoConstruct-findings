// from server: 46% by colin
struct RBX_Sky_StaticInit
{
    static void init();
};

void RBX_Sky_StaticInit::init()
{
    static bool initialized = false;
    if (!initialized)
    {
        initialized = true;
        extern void construct(void*, const char*, const char*, const char*);
        construct((void*)0x8c6048, (const char*)0x7b83f0, (const char*)0x8aaa2c, (const char*)0x7b83f8);
        extern void registerClass(void*);
        registerClass((void*)0x77b830);
    }
}
