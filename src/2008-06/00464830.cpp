// from server: 63% by colin
extern "C" {
int __stdcall sub_803380(int);
int __stdcall sub_803384(int, int);
int __stdcall sub_803ee0(int);
int __stdcall sub_803f04(int);
int __stdcall sub_803f14(int);
int __stdcall sub_802458(int, int);
int __stdcall sub_802468(int);
}

struct Str {
    char pad[0x1c];
    Str(const char*);
    ~Str();
};

struct CScriptDoc {
    char pad0[0x138];
    int field_138;
    char pad1[0x8];
    int field_144;
    char pad2[0xc];
    char field_154;
    int f_4613d0(int);
    int f_460a90(int);
    int f_460ee0(int);
    int f_460e90(int, int);
    int f_460230(int);
    void f_563090();
    void f_5630e0();
    void f_586f30(int, Str*);
    void method();
};

void CScriptDoc::method()
{
    int* p = (int*)f_4613d0(1);
    if (f_460a90(0) == 0)
        return;
    if (field_154 != 0)
        return;
    if (field_144 != 0)
    {
        int saved = field_138;
        f_563090();
        f_4613d0(1);
        int n = f_460ee0(1);
        sub_803f04(0);
        n++;
        sub_803384(0, n);
        f_4613d0(1);
        f_460e90(n, 0);
        sub_803380(-1);
        int v = sub_803ee0(0);
        sub_802458(0, v);
        Str s("");
        f_586f30(field_144, &s);
        sub_802468(0);
        sub_803f14(0);
        f_5630e0();
    }
    f_4613d0(1);
    f_460230(0);
}
