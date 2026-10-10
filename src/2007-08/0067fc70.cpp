// from server: 33% by colin
struct CXTPPrintPageHeaderFooter
{
    char pad[0x64];
    int field64;
    int field68;
    int field6c;
    void Init(int arg);
};

extern "C" void __stdcall sub_77D558();
extern "C" int __stdcall sub_77DF20(int, const char*);
extern "C" int __stdcall sub_77D92C(int, int);
extern "C" void __stdcall sub_77D434(int, int);
extern "C" void __stdcall sub_77DDBC(int);
extern "C" void __stdcall sub_77DA30(int, int, int);

void CXTPPrintPageHeaderFooter::Init(int arg)
{
    sub_77D558();
    sub_77D558();
    sub_77D558();

    int v1 = sub_77DF20(0, (const char*)0x7cebc4);
    if (v1 < 0)
    {
        sub_77D434(field64, (int)&arg);
    }
    else
    {
        if (v1 > 0)
        {
            int tmp;
            sub_77D92C((int)&tmp, v1);
            sub_77D434(field64, (int)&tmp);
            sub_77DDBC((int)&tmp);
        }
        v1 += 2;
        sub_77DA30((int)&arg, 0, v1);
    }

    int v2 = sub_77DF20(0, (const char*)0x7cebc4);
    if (v2 < 0)
    {
        sub_77D434(field68, (int)&arg);
    }
    else
    {
        if (v2 > 0)
        {
            int tmp;
            sub_77D92C((int)&tmp, v2);
            sub_77D434(field68, (int)&tmp);
            sub_77DDBC((int)&tmp);
        }
        v2 += 2;
        sub_77DA30((int)&arg, 0, v2);
    }

    sub_77D434(field6c, (int)&arg);
    sub_77DDBC((int)&arg);
}
