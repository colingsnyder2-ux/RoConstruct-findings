// from server: 48% by colin
extern "C" {
    int __stdcall GetKeyNameTextA(int, char*, int);
    int __stdcall GetKeyboardLayout(int);
    int __stdcall MapVirtualKeyExA(int, int, int);
    int __stdcall IsCharLowerA(char);
}

struct CKeyHelper
{
    void* p0;
    char pad[0x40];
    int f(int);
};

extern "C" int __stdcall sub_6A1704(void*, int, int);
extern "C" int __stdcall sub_6A1DD2();
extern "C" char __cdecl sub_71DBC0(char);

extern void* g_802c18;
extern void* g_802c1c;
extern void* g_802cf8;
extern void* g_802cfc;
extern void* g_802fd8;
extern void* g_802fe0;
extern void* g_803388;
extern void* g_803ddc;
extern void* g_803e4c;
extern void* g_803ed4;
extern void* g_803f10;
extern void* g_803f14;
extern char g_80b716;

int CKeyHelper::f(int a)
{
    char buf[0x32];
    int v;
    int i;
    int r;
    int code;
    int scan;
    int layout;
    int name;
    int flag;
    char ch;

    sub_6A1704(buf, 0, 0x32);
    v = 0;

    if (a != 3)
    {
        ((void (__thiscall*)(void*, const char*))g_803f10)(p0, &g_80b716);
        return (int)p0;
    }

    layout = ((int (__stdcall*)(int))g_802cf8)(0);
    scan = ((int (__stdcall*)(int, int, int))g_802cfc)(0, a, 0);
    code = (scan << 16) | 1;
    if ((unsigned)(a - 0x21) <= 0xe)
        code |= 0x1000000;

    ((int (__stdcall*)(int, char*, int))g_802c1c)(code, buf, 0x32);

    ((void (__thiscall*)(void*, int*))g_803f10)(p0, &name);

    ((void (__thiscall*)(void*))g_802fd8)(&name);
    if (((char (__thiscall*)(void*))g_802fd8)(&name) == 0)
    {
        ((void (__thiscall*)(void*))g_803388)(&name);
        ((int (__thiscall*)(void*))g_802fe0)(&name);
        if (((int (__thiscall*)(void*))g_802fe0)(&name) > 0)
        {
            i = 0;
            do
            {
                ((void (__thiscall*)(void*, int))g_803e4c)(&name, 0);
                ch = ((char (__thiscall*)(void*))g_803e4c)(&name);
                r = ((int (__stdcall*)(int))g_802c18)(ch);
                if (r != 0)
                {
                    flag = sub_71DBC0(ch);
                    ((void (__thiscall*)(void*, int, int))g_803ddc)(&name, i, flag);
                    break;
                }
                i++;
                ((int (__thiscall*)(void*))g_802fe0)(&name);
            } while (i < ((int (__thiscall*)(void*))g_802fe0)(&name));
        }
    }

    ((void (__thiscall*)(void*, int*))g_803ed4)(p0, &name);
    ((void (__thiscall*)(void*))g_803f14)(&name);

    return (int)p0;
}
