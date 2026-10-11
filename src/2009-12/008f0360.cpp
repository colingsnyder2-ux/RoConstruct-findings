// from server: 91% by atomic.potato
struct CXTPRibbonQuickAccessControls {
    void OnControlAdded(void* pControl);
};

extern "C" void __stdcall sub_82D280(void*, int, int);
extern "C" void __stdcall sub_7F3DDC(void*);

void CXTPRibbonQuickAccessControls::OnControlAdded(void* pControl)
{
    int count = *(int*)((char*)this + 0x2c);
    int i = 0;
    if (count > 0)
    {
        do
        {
            void* item;
            if (i >= 0 && i < count)
                item = *(void**)(*(int*)((char*)this + 0x28) + i * 4);
            else
                item = 0;
            if (item == pControl)
            {
                sub_82D280((char*)this + 0x24, i, 1);
                void (__thiscall *fn)(void*, void*) = *(void (__thiscall **)(void*, void*))((*(int*)this) + 0x6c);
                fn(this, pControl);
                sub_7F3DDC(pControl);
                return;
            }
            i++;
        } while (i < count);
    }
}
