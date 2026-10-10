// from server: 58% by colin
struct CXTPCommandBar
{
    void m();
};

extern "C" int __stdcall GetMessageA(void*, void*, unsigned int, unsigned int);
extern "C" int __stdcall TranslateMessage(const void*);
extern "C" int __stdcall DispatchMessageA(const void*);
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, unsigned int);

extern "C" void* __stdcall sub_6303D0();

void CXTPCommandBar::m()
{
    if (*(int*)((char*)this + 0xdc) == 0)
        return;

    char msg[0x1c];

    while (*(int*)((char*)this + 0xdc) != 0)
    {
        if (GetMessageA(msg, 0, 0, 0) == 0)
            return;

        if (*(int*)((char*)this + 0xdc) == 0)
        {
            PostMessageA(*(void**)(msg + 0x0c), *(unsigned int*)(msg + 0x08), *(unsigned int*)(msg + 0x04), *(unsigned int*)msg);
            return;
        }

        if (*(unsigned int*)(msg + 0x04) != 0x36a)
        {
            void* p = sub_6303D0();
            void** vt = *(void***)p;
            int (__thiscall *fn)(void*, void*) = (int (__thiscall *)(void*, void*))vt[0x60 / 4];
            if (fn(p, msg + 0x00) == 0)
            {
                TranslateMessage(msg);
                DispatchMessageA(msg);
            }
        }
    }
}
