// from server: 60% by colin
extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall GetParent(void*);
extern "C" long __stdcall GetWindowLongA(void*, int);

extern void* g_802e10;
extern long (__stdcall *g_802dbc)(void*, int);
extern void* (__stdcall *g_802df8)(void*);

char* func_0075b120();
void* func_0075ac00(void*);
int func_007bc256(void*);
void* func_006a0bde(void*);
void* func_006a0c26(void*, void*);
void* func_0075d4a0(void*);

struct CXTPDockingPaneKeyboardHook
{
    void* func_0075ac40();
};

void* CXTPDockingPaneKeyboardHook::func_0075ac40()
{
    void* focus = GetFocus();
    void* result = 0;
    while (focus != 0)
    {
        void* pane = func_0075ac00(focus);
        if (pane != 0)
        {
            int ok = func_007bc256(*(void**)((char*)pane + 0xcc));
            if (ok != 0)
                return pane;
            return 0;
        }
        if ((g_802dbc(focus, -0x10) & 0x40000000) == 0)
        {
            if ((char)g_802dbc(focus, -0x14) < 0)
            {
                void* a = func_006a0bde(focus);
                void* b = func_0075b120();
                void* c = func_006a0c26(a, b);
                if (c != 0)
                {
                    return func_0075d4a0((char*)c + 0xf8);
                }
            }
            return 0;
        }
        focus = g_802df8(focus);
    }
    return result;
}
