// from server: 38% by colin
struct streambuf;

struct ios_base
{
    int flags() const;
    int width() const;
};

struct basic_ios
{
    streambuf* rdbuf() const;
};

struct char_traits
{
    static int eof();
    static bool eq_int_type(const int&, const int&);
};

struct streambuf
{
    int sputc(char);
};

struct stream
{
    void* pad0;
    basic_ios* pad4;
};

struct helper
{
    char pad[0x30];
    char field_30;
};

extern "C" int __stdcall sub_0044A320(void*);
extern "C" int __stdcall sub_0080238C();
extern "C" int __stdcall sub_00802390();
extern "C" int __stdcall sub_00802394();
extern "C" int __stdcall sub_00802398();
extern "C" int __stdcall sub_0080239C(const int*, const int*);
extern "C" int __stdcall sub_008023C4();

struct CRbxPlayDocTemplate
{
    void method(void* arg1, int arg2);
};

void CRbxPlayDocTemplate::method(void* arg1, int arg2)
{
    char local_28[0x1c];
    int local_14;
    int local_1c;
    int local_20;
    int local_18;
    int local_10;
    int local_4;

    sub_0044A320(local_28);
    local_4 = 0;
    local_14 = 0;

    if (local_28[4] == 0)
        return;

    stream* s = (stream*)arg1;
    helper* h = (helper*)((char*)s + *(int*)(*(int*)s + 4));

    int count = sub_0080238C();
    int edi = 0;
    if (count > 1)
        edi = sub_0080238C() - 1;

    int flags = sub_00802390();
    if ((flags & 0x1c0) != 0x40)
    {
        while (local_14 == 0)
        {
            if (edi <= 0)
                break;

            char c = h->field_30;
            streambuf* sb = (streambuf*)sub_008023C4();
            int r = ((int (__thiscall*)(streambuf*, char))sub_00802394)(sb, c);
            local_1c = r;
            int e = sub_00802398();
            local_20 = e;
            if (sub_0080239C(&local_20, &local_1c))
            {
                local_14 = 4;
            }
            edi--;
        }
    }

    {
        streambuf* sb = (streambuf*)sub_008023C4();
        int r = ((int (__thiscall*)(streambuf*, int))sub_00802394)(sb, arg2);
        local_20 = r;
        int e = sub_00802398();
        local_1c = e;
        if (sub_0080239C(&local_1c, &local_20))
        {
            local_14 = 4;
        }
    }

    while (local_14 == 0)
    {
        if (edi <= 0)
            break;

        char c = h->field_30;
        streambuf* sb = (streambuf*)sub_008023C4();
        int r = ((int (__thiscall*)(streambuf*, char))sub_00802394)(sb, c);
        local_1c = r;
        int e = sub_00802398();
        local_18 = e;
        if (sub_0080239C(&local_18, &local_1c))
        {
            local_14 = 4;
        }
        edi--;
    }

    local_4 = 0;
}
