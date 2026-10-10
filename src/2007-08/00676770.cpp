// from server: 30% by colin
struct PAUXTP_COMMANDBARS_CATEGORYINFO_CArray
{
    void dtor();
};

extern "C" void __cdecl sub_0062FC62(void*);
extern "C" void __cdecl sub_0062FF20();
extern "C" void __cdecl sub_00738826(void*);
extern "C" void __cdecl sub_00738778(void*);
extern "C" void __cdecl sub_00676540(void*);
extern "C" void __cdecl sub_00676120(void*);

void PAUXTP_COMMANDBARS_CATEGORYINFO_CArray::dtor()
{
    *(int*)this = 0x7cce6c;
    int i = 0;
    if (*(int*)((char*)this + 0x144) > 0)
    {
        do
        {
            if (i < 0 || i >= *(int*)((char*)this + 0x144))
                sub_0062FF20();
            void* p = *(void**)(*(int*)((char*)this + 0x140) + i * 4);
            if (p)
            {
                sub_00676120(p);
                sub_0062FC62(p);
            }
            ++i;
        } while (i < *(int*)((char*)this + 0x144));
    }
    sub_00676540((char*)this + 0x13c);
    sub_00738826((char*)this + 0xe4);
    sub_00738826((char*)this + 0x88);
    sub_00738778(this);
}
