// from server: 83% by atomic.potato
struct CXTPMenuBar
{
    char pad[0x20];
    void* field20;

    void sub_008941F0(void* arg);
};

extern void* __stdcall sub_00894090(void*);
extern void __stdcall sub_008AC8D0(void*, void*);
extern void __stdcall sub_007F3DDC(void*);

void CXTPMenuBar::sub_008941F0(void* arg)
{
    void* p = sub_00894090(arg);
    if (p)
    {
        sub_008AC8D0(&field20, arg);
        sub_007F3DDC(p);
    }
}
