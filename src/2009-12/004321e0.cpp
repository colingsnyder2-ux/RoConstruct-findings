// roc 2009-12 004321e0  unit: HVCXTPPropertyGridItem::?$XItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004321e0
//
// 004321e0  83ec20               sub esp, 0x20
// 004321e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004321e7  56                   push esi
// 004321e8  8bf1                 mov esi, ecx
// 004321ea  8b08                 mov ecx, dword ptr [eax]
// 004321ec  51                   push ecx
// 004321ed  8d542408             lea edx, [esp + 8]
// 004321f1  68d4689a00           push 0x9a68d4
// 004321f6  52                   push edx
// 004321f7  ff15dcb79800         call dword ptr [0x98b7dc]
// 004321fd  83c408               add esp, 8
// 00432200  8d442408             lea eax, [esp + 8]
// 00432204  8bcc                 mov ecx, esp
// 00432206  8964242c             mov dword ptr [esp + 0x2c], esp
// 0043220a  50                   push eax
// 0043220b  ff15b8de9800         call dword ptr [0x98deb8]
// 00432211  8b16                 mov edx, dword ptr [esi]
// 00432213  8b4260               mov eax, dword ptr [edx + 0x60]
// 00432216  8bce                 mov ecx, esi
// 00432218  ffd0                 call eax
// 0043221a  5e                   pop esi
// 0043221b  83c420               add esp, 0x20
// 0043221e  c20400               ret 4
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