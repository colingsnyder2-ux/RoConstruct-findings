// from server: 28% by colin
struct LDraw2RobloxColorMap
{
    int getColor(const char* name) const;
};

extern "C" int __stdcall sub_46C5A0(const char*, const char*);

struct string_holder
{
    void* data[8];
};

extern "C" void __stdcall string_ctor(string_holder*, const char*);
extern "C" void __stdcall string_dtor(string_holder*);

int LDraw2RobloxColorMap::getColor(const char* name) const
{
    string_holder s1;
    string_holder s2;
    int result;

    string_ctor(&s1, "brick");
    result = sub_46C5A0(name, (const char*)&s1);
    string_dtor(&s1);

    if (result == 0)
    {
        return 0;
    }

    string_ctor(&s2, "symmetric");
    result = sub_46C5A0(name, (const char*)&s2);
    string_dtor(&s2);

    if (result == 0)
    {
        return 1;
    }
    return 2;
}
