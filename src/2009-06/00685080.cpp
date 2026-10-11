// from server: 39% by atomic.potato




extern "C" {
    typedef unsigned int DWORD;
    typedef char BYTE;
}

struct String {
    void* pad[4];
    String(const char*);
};

extern "C" DWORD __stdcall sub_89E4B4();

struct Sky {
    char pad0[8];
    DWORD field8;
    char padC[8];
    BYTE field14;
    BYTE field15;
    Sky* ctor(const char* a, const char* b, DWORD c, DWORD d, DWORD e);
};

extern DWORD dword_8EFE7C;
extern DWORD dword_8EFE80;
extern DWORD dword_8EFE84;

void __stdcall sub_613080(DWORD, DWORD, DWORD, DWORD, DWORD);

Sky* Sky::ctor(const char* a, const char* b, DWORD c, DWORD d, DWORD e)
{
    String s1(a);
    String s2(b);
    sub_613080(dword_8EFE7C, dword_8EFE80, 0xf, 8, dword_8EFE84);
    field8 = c;
    field14 = 1;
    field15 = 1;
    return this;
}
