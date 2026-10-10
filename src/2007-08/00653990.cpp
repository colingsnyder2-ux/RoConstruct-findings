// from server: 74% by colin
struct CNameItem
{
    char pad[0x48];
    void* p48;
    int get(int);
};

int CNameItem::get(int)
{
    if (p48 != 0)
    {
        void** v = (void**)p48;
        int (__fastcall *fn)(void*) = (int (__fastcall *)(void*))v[0x64 / 4];
        return fn(p48);
    }
    return 0;
}
