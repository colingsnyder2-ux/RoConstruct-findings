// from server: 12% by colin
struct CXTPEdit
{
    void func_00636d30(int);
};

extern "C" int __stdcall sub_77dcd0(void*);
extern "C" int __stdcall sub_77dd98(void*);
extern "C" int __stdcall sub_77dcb8(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_77ddb8(void*, const char*);
extern "C" void __stdcall sub_77dd6c(void*, int);

extern "C" void __stdcall sub_635e50(void*);
extern "C" void __stdcall sub_636be0(void*);
extern "C" void __stdcall sub_636c40(void*);

void CXTPEdit::func_00636d30(int arg)
{
    char buf1[4];
    char buf2[4];
    char buf3[4];
    char buf4[4];
    char flag;

    sub_635e50(buf1);
    if (!sub_77dcd0(buf1))
    {
        sub_635e50(buf2);
        sub_636be0(buf3);
        sub_77dd98(buf2);
        sub_77dcb8(buf3, buf2);
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    sub_77ddbc(buf3);
    sub_77ddbc(buf2);
    sub_77ddbc(buf1);

    if (flag)
    {
        sub_77ddb8(buf4, "list<T> too long");
        sub_636c40(buf4);
        sub_77ddbc(buf4);
    }

    sub_77dd6c((char*)this + 0x19c, arg);

    sub_636be0(buf1);
    if (sub_77dcd0(buf1))
    {
        sub_635e50(buf2);
        if (sub_77dcd0(buf2))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    else
    {
        flag = 0;
    }

    sub_77ddbc(buf2);
    sub_77ddbc(buf1);

    if (flag)
    {
        sub_635e50(buf4);
        sub_636c40(buf4);
        sub_77ddbc(buf4);
    }
}
