// from server: 66% by colin
struct CRenderSettings
{
    void registerWindowClass();
};

extern "C" void* __cdecl sub_62FF02();
extern "C" void* __cdecl sub_6306BE();
extern "C" void __cdecl sub_63052C(void* self);

extern "C" void* __stdcall LoadCursorA(void* hInstance, const char* lpCursorName);
extern "C" void* __stdcall LoadIconA(void* hInstance, const char* lpIconName);
extern "C" unsigned short __stdcall RegisterClassA(void* lpWndClass);
extern "C" long __stdcall DefWindowProcA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);

extern void* g_77d7a4;

void CRenderSettings::registerWindowClass()
{
    struct WNDCLASSA_LOCAL {
        unsigned int style;
        long (__stdcall *lpfnWndProc)(void*, unsigned int, unsigned int, long);
        int cbClsExtra;
        int cbWndExtra;
        void* hInstance;
        void* hIcon;
        void* hCursor;
        void* hbrBackground;
        const char* lpszMenuName;
        const char* lpszClassName;
    };

    WNDCLASSA_LOCAL wc;
    wc.style = 3;
    wc.lpfnWndProc = DefWindowProcA;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = sub_62FF02();
    wc.hIcon = LoadIconA(0, (const char*)0x7f00);
    wc.hCursor = LoadCursorA(0, (const char*)0x7f00);
    wc.hbrBackground = 0;
    wc.lpszMenuName = (const char*)0x79039c;
    wc.lpszClassName = (const char*)0x790390;
    RegisterClassA(&wc);

    void* obj = sub_6306BE();
    sub_63052C(obj);

    void** vtable = *(void***)obj;
    long (__stdcall *fn)(void*, void*, const char*, unsigned int, int, int, int, int, int) =
        (long (__stdcall *)(void*, void*, const char*, unsigned int, int, int, int, int, int))vtable[0x13c / 4];

    fn(obj, g_77d7a4, (const char*)0x790388, 0xcf0000, 0, 0, 0, 0, 0);
}
