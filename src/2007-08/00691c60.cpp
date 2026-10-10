// from server: 50% by colin
struct CXTThemeManagerStyle {
    void* m_vtable;
    char m_pad[0x0C];
    int m_unk10;
    char m_pad2[0x10];
    int m_unk24;
    void Cleanup();
};

extern "C" void __stdcall sub_738B3E(void*, void*, void*);
extern "C" void __stdcall sub_738B38(void*);

void CXTThemeManagerStyle::Cleanup()
{
    m_vtable = (void*)0x7D0890;
    int flag = -(m_unk10 != 0);
    void* local10 = 0;
    int local14 = flag;
    int local28 = 0;
    if (flag != 0) {
        char* base = (char*)this + 4;
        do {
            sub_738B3E(base, &local10, &local14);
            void* p = local10;
            if (p != 0) {
                (*(void (__thiscall **)(void*, int))*(void**)p)(p, 1);
                local10 = 0;
            }
        } while (local14 != 0);
    }
    m_unk24 = 0;
    local28 = -1;
    sub_738B38((char*)this + 4);
}
