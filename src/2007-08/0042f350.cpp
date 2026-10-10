// from server: 41% by colin
struct CXTPControl
{
    char pad[0x158];
    void* field_158;
    void func_0042F350(void* a, void* b, void* c, void* d);
};

extern "C" int __stdcall sub_77DCD0(void*);
extern "C" void* __stdcall sub_77DDB8(void*, const char*);
extern "C" void __stdcall sub_77DD74(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void sub_42F210(void*, void*);

void CXTPControl::func_0042F350(void* a, void* b, void* c, void* d)
{
    char buf1[8];
    char buf2[8];
    void* p;
    int state = 0;
    int flag = 0;

    if (sub_77DCD0((char*)this + 0xe8))
    {
        if (this->field_158)
        {
            sub_42F210(this->field_158, buf2);
            state = 0;
            flag = 1;
        }
        else
        {
            sub_77DDB8(buf1, "list<T> too long");
            state = 1;
            flag = 2;
        }
    }
    else
    {
        p = (char*)this + 0xe8;
    }

    sub_77DD74(d, p);

    flag |= 4;
    if (flag & 2)
    {
        flag &= ~2;
        sub_77DDBC(buf1);
    }
    if (flag & 1)
    {
        sub_77DDBC(buf2);
    }
}
