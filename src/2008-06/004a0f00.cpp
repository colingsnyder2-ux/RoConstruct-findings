// from server: 58% by colin
typedef unsigned long DWORD;

struct String
{
    char storage[28];
    String(const String &);
    ~String();
};

extern "C" void *__stdcall sub_56B620(const String *);
extern "C" void __stdcall sub_4A0C90(void *, const String *);

struct BoundFuncDesc
{
    char pad[16];
    void construct(const String &, const String &, const String &, const String &,
                   const String &, const String &, const String &, const String &,
                   const String &, const String &, const String &, const String &,
                   const String &, const String &, const String &, const String &);
};

void BoundFuncDesc::construct(const String &a1, const String &a2, const String &a3, const String &a4,
                              const String &a5, const String &a6, const String &a7, const String &a8,
                              const String &a9, const String &a10, const String &a11, const String &a12,
                              const String &a13, const String &a14, const String &a15, const String &a16)
{
    void *p = sub_56B620(&a1);
    if (p)
    {
        String tmp1(a2);
        String tmp2(a1);
        sub_4A0C90((char *)p + 16, &tmp2);
    }
}
