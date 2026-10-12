// from server: 99% by king_originala
// roc 2008-06 0044eeb0  unit: CRobloxDHtmlDialog  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044eeb0
//
// 0044eeb0  6aff                 push -1
// 0044eeb2  68e7157c00           push 0x7c15e7
// 0044eeb7  64a100000000         mov eax, dword ptr fs:[0]
// 0044eebd  50                   push eax
// 0044eebe  64892500000000       mov dword ptr fs:[0], esp
// 0044eec5  51                   push ecx
// 0044eec6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044eeca  56                   push esi
// 0044eecb  8bf1                 mov esi, ecx
// 0044eecd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044eed1  50                   push eax
// 0044eed2  6a72                 push 0x72
// 0044eed4  51                   push ecx
// 0044eed5  8bce                 mov ecx, esi
// 0044eed7  89742410             mov dword ptr [esp + 0x10], esi
// 0044eedb  e890242500           call 0x6a1370
// 0044eee0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0044eee4  52                   push edx
// 0044eee5  8d8e14010000         lea ecx, [esi + 0x114]
// 0044eeeb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044eef3  c706bc708100         mov dword ptr [esi], 0x8170bc
// 0044eef9  c746748c708100       mov dword ptr [esi + 0x74], 0x81708c
// 0044ef00  ff1558248000         call dword ptr [0x802458]
// 0044ef06  b801000000           mov eax, 1
// 0044ef0b  88442410             mov byte ptr [esp + 0x10], al
// 0044ef0f  898690000000         mov dword ptr [esi + 0x90], eax
// 0044ef15  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0044ef1b  0d13408401           or eax, 0x1844013
// 0044ef20  50                   push eax
// 0044ef21  8bce                 mov ecx, esi
// 0044ef23  e8041a2500           call 0x6a092c
// 0044ef28  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044ef2c  8bc6                 mov eax, esi
// 0044ef2e  5e                   pop esi
// 0044ef2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ef36  83c410               add esp, 0x10
// 0044ef39  c20c00               ret 0xc

extern void (__thiscall *G_string_constructor)(void *, const char *);

struct String
{
    char storage[28];
    String(const char *text) { G_string_constructor(this, text); }
    ~String();
};

struct Primary
{
    virtual void primary();
    char padding[0x70];
};

struct Secondary
{
    virtual void secondary();
    char padding1[0x18];
    int enabled;
    char padding2[0x78];
    unsigned flags;
    unsigned padding3;
};

struct Base : Primary, Secondary
{
    Base(unsigned, unsigned, unsigned);
    ~Base();
    void setFlags(unsigned);
};

struct S : Base
{
    String text;

    S(unsigned, const char *, unsigned);
    virtual void primary();
    virtual void secondary();
};

S::S(unsigned first, const char *value, unsigned third)
    : Base(first, 0x72, third), text(value)
{
    enabled = 1;
    setFlags(flags | 0x01844013);
}
