// from server: 58% by colin
struct GLCaps {
    static bool supports_two_sided_stencil();
};

extern "C" void __stdcall sub_502880();
extern "C" void __stdcall sub_5028F0();
extern "C" void __stdcall sub_77E698();
extern "C" void __stdcall sub_77E6AC();
extern "C" void __stdcall sub_77E938(int);
extern "C" void __stdcall sub_8980FC();

extern "C" char byte_8BCF73;
extern "C" char byte_8BCF49;
extern "C" char byte_8BCF5A;
extern "C" void* dword_8980FC;
extern "C" char str_796410[];
extern "C" char str_796420[];
extern "C" char str_796438[];

struct FakeString {
    void* pad[4];
    FakeString(const char*);
    ~FakeString();
};

bool GLCaps::supports_two_sided_stencil()
{
    if (byte_8BCF73 == 0 && byte_8BCF49 == 0)
    {
        sub_502880();
        if (dword_8980FC != 0)
        {
            FakeString s(str_796438);
            bool ok = false;
            if (sub_8980FC)
            {
                ok = true;
            }
            s.~FakeString();
            if (ok)
            {
                sub_77E938(-1);
            }
        }
        sub_5028F0();
    }
    return byte_8BCF5A != 0;
}
