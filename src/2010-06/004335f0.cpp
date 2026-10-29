// roc 2010-06 004335f0  unit: HVCXTPPropertyGridItem::?$XItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004335f0
//
// 004335f0  83ec20               sub esp, 0x20
// 004335f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004335f7  56                   push esi
// 004335f8  8bf1                 mov esi, ecx
// 004335fa  8b08                 mov ecx, dword ptr [eax]
// 004335fc  51                   push ecx
// 004335fd  8d542408             lea edx, [esp + 8]
// 00433601  687476a000           push 0xa07674
// 00433606  52                   push edx
// 00433607  ff1564a89e00         call dword ptr [0x9ea864]
// 0043360d  83c408               add esp, 8
// 00433610  8d442408             lea eax, [esp + 8]
// 00433614  8bcc                 mov ecx, esp
// 00433616  8964242c             mov dword ptr [esp + 0x2c], esp
// 0043361a  50                   push eax
// 0043361b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00433621  8b16                 mov edx, dword ptr [esi]
// 00433623  8b4260               mov eax, dword ptr [edx + 0x60]
// 00433626  8bce                 mov ecx, esi
// 00433628  ffd0                 call eax
// 0043362a  5e                   pop esi
// 0043362b  83c420               add esp, 0x20
// 0043362e  c20400               ret 4
// copied from an identical function in another client (function ?setValue@Item@@QAEXPBH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" {
    extern int (__cdecl *sprintf)(char *, const char *, ...);
}

struct Text;
extern void (__thiscall *constructText)(Text *, const char *);

struct Text {
    void *data;
    __declspec(dllimport) Text(const char *s);
    Text(const Text &);
    ~Text();
};

struct Item {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void setText(Text);

    void setValue(const int *);
};

extern const char formatString[];

void Item::setValue(const int *value)
{
    char buffer[32];
    sprintf(buffer, formatString, *value);
    setText(Text(buffer));
}