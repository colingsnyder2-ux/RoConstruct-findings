// from server: 91% by colin
struct CXTPRibbonControlTab {
    int sub_7176F0();
};

int CXTPRibbonControlTab::sub_7176F0()
{
    char* base = (char*)this - 0x178;
    int* p = *(int**)(base);
    int (__thiscall *fn)(void*) = *(int (__thiscall **)(void*))((char*)p + 0x74);
    if (fn(base) != 0)
    {
        int* q = *(int**)((char*)this - 0x7c);
        if (*(int*)((char*)q + 0xdc) != 0)
            return 1;
    }
    return 0;
}
