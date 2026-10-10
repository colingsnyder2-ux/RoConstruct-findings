// from server: 42% by colin
struct CPatchedControlComboBox
{
    void sub_639960();
};

extern "C" int __stdcall sub_77DCD0(void*);
extern "C" int __stdcall sub_77DDBC(void*);
extern "C" void __stdcall sub_635E50(void*);
extern "C" void __stdcall sub_636BE0(void*);
extern "C" void __stdcall sub_636C40(void*);
extern "C" int __stdcall sub_42F5B0(void*);
extern "C" void __stdcall sub_645A70(void*, int, int);
extern "C" void __stdcall sub_639460(void*, int);

void CPatchedControlComboBox::sub_639960()
{
    char buf1[8];
    char buf2[8];
    char buf3[8];
    int flag = 0;

    sub_635E50(buf1);
    if (!sub_77DCD0(buf1))
    {
        int p = *(int*)((char*)this + 0x178);
        if (p != 0 && *(int*)(p + 0x20) != 0)
        {
            sub_636BE0(buf2);
            if (sub_77DCD0(buf2))
                flag = 1;
        }
    }

    sub_77DDBC(buf2);
    sub_77DDBC(buf1);

    if (flag)
    {
        sub_635E50(buf3);
        sub_636C40(buf3);
        sub_77DDBC(buf3);
    }

    (*(void(__thiscall**)(void*, int))(*(int*)this + 0x70))(this, 0);

    if (sub_42F5B0(this))
    {
        sub_645A70(*(void**)((char*)this + 0xfc), -1, 0);
    }

    int q = *(int*)((char*)this + 0x1c4);
    if (q != 0)
    {
        sub_639460((void*)q, 0);
    }
}
