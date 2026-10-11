// from server: 59% by tester
struct WNDCLASSA
{
    unsigned int style;
    int lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    int hInstance;
    int hIcon;
    int hCursor;
    int hbrBackground;
    const char* lpszMenuName;
    const char* lpszClassName;
};

extern "C" __declspec(dllimport) int __stdcall LoadIconA(int hInstance, const char* lpIconName);
extern "C" __declspec(dllimport) int __stdcall LoadCursorA(int hInstance, const char* lpCursorName);
extern "C" __declspec(dllimport) unsigned short __stdcall RegisterClassA(const WNDCLASSA* lpWndClass);

extern int g_802dc4;
extern int g_802d64;
extern int g_802dd0;
extern int g_802d34;
extern int g_8034f4;
extern const char g_816618[];
extern const char g_816620[];
extern const char g_81662c[];

extern int __cdecl sub_6a0926(int, int, int, int);
extern int __cdecl sub_6a1166();
extern int __cdecl sub_6a0fc2();

struct S
{
    int f();
};

int S::f()
{
    WNDCLASSA wc;
    wc.style = 3;
    wc.lpfnWndProc = g_802dc4;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    int v = sub_6a0926(3, g_802dc4, 0, 0);
    wc.hInstance = *(int*)(v + 8);
    wc.hIcon = LoadIconA(0, (const char*)0x7f00);
    wc.hCursor = LoadCursorA(0, (const char*)0x7f00);
    wc.hbrBackground = 0;
    wc.lpszMenuName = g_81662c;
    wc.lpszClassName = g_816620;
    RegisterClassA(&wc);
    int q = sub_6a0fc2();
    int* obj = (int*)q;
    int* vt = *(int**)obj;
    int (*fn)(int*, int, const char*, int, int, int, int, int, int) = (int (*)(int*, int, const char*, int, int, int, int, int, int))*(int*)((char*)vt + 0x144);
    fn(obj, g_8034f4, g_816618, 0xcf0000, 0, 0, 0, 0, 0);
    return 0;
}
