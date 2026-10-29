// roc 2012-06 00454a30  unit: HVCXTPPropertyGridItem::?$XItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00454a30
//
// 00454a30  83ec20               sub esp, 0x20
// 00454a33  8b442424             mov eax, dword ptr [esp + 0x24]
// 00454a37  56                   push esi
// 00454a38  8bf1                 mov esi, ecx
// 00454a3a  8b08                 mov ecx, dword ptr [eax]
// 00454a3c  51                   push ecx
// 00454a3d  8d542408             lea edx, [esp + 8]
// 00454a41  689c0db500           push 0xb50d9c
// 00454a46  52                   push edx
// 00454a47  ff15402ab200         call dword ptr [0xb22a40]
// 00454a4d  83c408               add esp, 8
// 00454a50  8d442408             lea eax, [esp + 8]
// 00454a54  8bcc                 mov ecx, esp
// 00454a56  8964242c             mov dword ptr [esp + 0x2c], esp
// 00454a5a  50                   push eax
// 00454a5b  ff15c847b200         call dword ptr [0xb247c8]
// 00454a61  8b16                 mov edx, dword ptr [esi]
// 00454a63  8b4260               mov eax, dword ptr [edx + 0x60]
// 00454a66  8bce                 mov ecx, esi
// 00454a68  ffd0                 call eax
// 00454a6a  5e                   pop esi
// 00454a6b  83c420               add esp, 0x20
// 00454a6e  c20400               ret 4
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