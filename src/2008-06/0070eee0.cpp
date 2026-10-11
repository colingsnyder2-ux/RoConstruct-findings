// from server: 49% by colin
struct CStatusCmdUI
{
    void Enable(int bOn);
    void DoUpdate(int pCmdUI);
};

extern "C" void __stdcall sub_803F10(void*);
extern "C" void __stdcall sub_803F14(void*);

void CStatusCmdUI::DoUpdate(int pCmdUI)
{
    if (*(int*)((char*)this + 0x14))
    {
        void* local;
        sub_803F10(&local);
        local = 0;
        ((void (__thiscall*)(void*, int, void*, int))0x70ecd0)(*(void**)((char*)this + 0x14), *(int*)((char*)this + 8), &local, 1);
        sub_803F14(&local);
    }
}
