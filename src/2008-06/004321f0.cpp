// from server: 49% by colin
struct CMainFrame
{
    char pad0[0xf0];
    int f0;
    int f4;
    char f8;
    char f9;
    char fa;
    char pad_fb[1];
    int fc;
    int f100;
    char f104;
    char f105;
    char pad_106[2];
    char f108[0x30];
    char f138[0x14c];
    char f284[0x124];
    int f3a8;
    int f3ac;
    int f3b0;
    char f3b4[0x2c];
    char f3e0[0x10];
    void f();
};

extern "C" {
    int __stdcall RegOpenKeyExA(void*, const char*, unsigned long, unsigned long, void**);
    int __stdcall RegQueryValueExA(void*, const char*, unsigned long*, unsigned long*, unsigned char*, unsigned long*);
    int __stdcall RegCloseKey(void*);
    void* __stdcall InterlockedIncrement(long*);
}

void __stdcall sub_6e1980(void*);
void __stdcall sub_6e4a80(void*);
void __stdcall sub_6e6b80(void*);
void __stdcall sub_703600(void*);
void __stdcall sub_70dbb0(void*);
void __stdcall sub_70ea60(void*);
void __stdcall sub_5a7ac0(void*, int, void*);
void __stdcall sub_4218a0(void*, void*);
void* __stdcall sub_6c0e80();
void __stdcall sub_6e4f50(void*, void*);

extern void* g_803f04;
extern void* g_802010;
extern void* g_802020;
extern void* g_802008;
extern void* g_8023f4;
extern void* g_802464;
extern void* g_803edc;
extern void* g_8021b0;
extern void* g_802468;

extern char g_96d139;
extern char g_976cad;
extern char g_96cc49;

void CMainFrame::f()
{
    sub_6e1980(this);
    *(int*)this = 0x811a1c;
    *(int*)((char*)this + 0xf0) = 0x811a0c;
    f0 = 0;
    f4 = 0;
    f8 = 0;
    f9 = 0;
    fa = 0;
    fc = 0;
    f100 = 0;
    f104 = 0;
    f105 = 0;
    ((void (__stdcall*)(void*))g_803f04)((char*)this + 0x108);
    sub_6e4a80((char*)this + 0x10c);
    sub_6e6b80((char*)this + 0x138);
    sub_703600((char*)this + 0x284);
    f3a8 = 0;
    f3ac = 0;
    f3b0 = 0;
    sub_70dbb0((char*)this + 0x3b4);
    sub_70ea60((char*)this + 0x3e0);

    void* hkey = 0;
    unsigned long type = 0;
    unsigned long size = 0;
    int result = RegOpenKeyExA((void*)0x80000001, "Software\\ROBLOX Corporation\\Roblox", 0, 0x20019, &hkey);
    if (result == 0)
    {
        size = 4;
        RegQueryValueExA(hkey, "OverrideLockViewGamelayout", 0, &type, (unsigned char*)&result, &size);
    }
    char val = (size == 1);
    g_96d139 = val;
    g_976cad = val;
    g_96cc49 = val;
    if (hkey)
        RegCloseKey(hkey);

    sub_5a7ac0((char*)this + 0x108, 1, 0);

    if (((unsigned long (__stdcall*)(void*))g_8023f4)((char*)this + 0x108) > 0)
    {
        void* p = ((void* (__stdcall*)(void*))g_802464)((char*)this + 0x108);
        ((void (__stdcall*)(void*, const char*, void*))g_803edc)((char*)this + 0x108, "%s\\IDESettings.xml", p);
    }

    sub_4218a0((void*)0x976fa0, (char*)this + 0xf0);
    void* p2 = sub_6c0e80();
    ((void (__stdcall*)(void*))g_8021b0)((char*)p2 + 4);
    void* p3 = sub_6c0e80();
    sub_6e4f50((char*)this + 0x138, p3);
    ((void (__stdcall*)(void*))g_802468)((char*)this + 0x108);
}
