// from server: 59% by tester
struct CXTPCommandBar
{
    char pad[0xf8];
    void* m_pSomething;

    void* sub_006439b0();
    void* sub_00646570();
    void* sub_00643950();
    void sub_0063023e();
    int DoMessage(unsigned int msg, unsigned int wParam, unsigned int lParam);
};

extern "C" void* __stdcall sub_0067a9a0(void* p, unsigned int a, unsigned int b);
extern "C" long __stdcall SendMessageA(void* hWnd, unsigned int msg, unsigned int wParam, unsigned int lParam);

int CXTPCommandBar::DoMessage(unsigned int msg, unsigned int wParam, unsigned int lParam)
{
    void* p = sub_0067a9a0(m_pSomething, wParam, lParam);
    if (p == 0)
    {
        sub_0063023e();
        return 0;
    }

    if (sub_006439b0() != 0)
    {
        sub_0063023e();
        return 0;
    }

    void* q = sub_00646570();
    unsigned int hwnd = *(unsigned int*)((char*)q + 0x20);

    unsigned int result;
    if (SendMessageA((void*)hwnd, 0x2859, (unsigned int)&result, (unsigned int)p) == 1)
    {
        return 0;
    }

    void* r = sub_00643950();
    if (*(unsigned int*)((char*)r + 0x11c) != 0)
    {
        void* vt = *(void**)p;
        void* fn = *(void**)((char*)vt + 0xec);
        typedef void (__thiscall *Fn)(void*, unsigned int, unsigned int);
        ((Fn)fn)(p, result, wParam);
        return 0;
    }

    void* vt = *(void**)p;
    void* fn = *(void**)((char*)vt + 0xf4);
    typedef void (__thiscall *Fn)(void*, unsigned int, unsigned int);
    ((Fn)fn)(p, wParam, result);
    return 0;
}
