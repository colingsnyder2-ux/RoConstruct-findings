// from server: 44% by colin
struct OgreString {
    void* rep;
    OgreString(const char*);
    ~OgreString();
};

struct OgreResourceGroupManager {
    static OgreString DEFAULT_RESOURCE_GROUP_NAME;
};

struct OgreQuaternion {
    static const OgreQuaternion IDENTITY;
};

struct OgreDataStream {
    char pad[0x14];
    void* mpResourceGroup;
    char pad2[0x2c];
    char mIsAuthoring;
    char pad3[3];
    char mIsIdentity;
    char pad4[3];
    void open();
    void _open();
};

extern "C" {
    void* __stdcall sub_4B3870(void*);
    void __stdcall sub_4D9E00(void*, void*);
    void __stdcall sub_802458(OgreString*);
    void __stdcall sub_802468(OgreString*);
}

extern float g_float_826DE0;
extern void* g_ptr_804E68;
extern void* g_ptr_804E6C;

void OgreDataStream::open()
{
    if (mIsAuthoring)
        return;

    void* rg = 0;
    if (mpResourceGroup)
        rg = sub_4B3870(mpResourceGroup);

    if (*(char*)((char*)rg + 0x240) == 0)
    {
        OgreString str(">Authoring");
        void* vtable = *(void**)mpResourceGroup;
        void* fn = *(void**)((char*)vtable + 0x198);
        float f = g_float_826DE0;
        void* a = g_ptr_804E68;
        void* b = g_ptr_804E6C;
        ((void (__stdcall*)(void*, int, void*, void*, float, OgreString*, int))fn)(
            mpResourceGroup, 1, b, a, f, &str, 0);
        str.~OgreString();
    }
    else if (!mIsIdentity)
    {
        sub_4D9E00(this, *(void**)((char*)this + 8));
        mIsIdentity = 1;
    }
}
