// from server: 44% by colin
struct CXTPDockingPaneVisualStudio2005SecondTheme
{
    int GetThemeValue(int nIndex);
};

extern "C" void __stdcall sub_66f110(int);
extern "C" void __stdcall sub_66f140(int);

int CXTPDockingPaneVisualStudio2005SecondTheme::GetThemeValue(int nIndex)
{
    if (*(int*)((char*)this + 0x18) == 1)
        return *(int*)((char*)this + 0x14c);
    if (*(int*)((char*)this + 0x18) == 3)
    {
        int local;
        sub_66f110(10);
        int result = 0;
        (*(void(__thiscall**)(void*, int*, int))(*(int*)this + 0xc))(this, &local, 1);
        if (*(int*)((char*)&local + 8) == 1)
        {
            int* p = *(int**)((char*)&local + 4);
            int* q = p ? (int*)((char*)p - 0x54) : 0;
            result = *(int*)((char*)q + 0x1a0);
        }
        sub_66f140((int)&local);
        return result;
    }
    return 0;
}
