// roc 2010-06 004335a0  unit: MVCXTPPropertyGridItem::?$XItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004335a0
//
// 004335a0  83ec20               sub esp, 0x20
// 004335a3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004335a7  d900                 fld dword ptr [eax]
// 004335a9  56                   push esi
// 004335aa  83ec08               sub esp, 8
// 004335ad  dd1c24               fstp qword ptr [esp]
// 004335b0  8bf1                 mov esi, ecx
// 004335b2  8d4c240c             lea ecx, [esp + 0xc]
// 004335b6  686c76a000           push 0xa0766c
// 004335bb  51                   push ecx
// 004335bc  ff1564a89e00         call dword ptr [0x9ea864]
// 004335c2  83c40c               add esp, 0xc
// 004335c5  8d542408             lea edx, [esp + 8]
// 004335c9  8bcc                 mov ecx, esp
// 004335cb  8964242c             mov dword ptr [esp + 0x2c], esp
// 004335cf  52                   push edx
// 004335d0  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 004335d6  8b06                 mov eax, dword ptr [esi]
// 004335d8  8b5060               mov edx, dword ptr [eax + 0x60]
// 004335db  8bce                 mov ecx, esi
// 004335dd  ffd2                 call edx
// 004335df  5e                   pop esi
// 004335e0  83c420               add esp, 0x20
// 004335e3  c20400               ret 4
// copied from an identical function in another client (function ?setValue@S@@QAEXPBM@Z)

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

struct S {
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

    void setValue(const float *);
};

void S::setValue(const float *value)
{
    char buffer[32];
    sprintf(buffer, "%.3g", *value);
    setText(Text(buffer));
}