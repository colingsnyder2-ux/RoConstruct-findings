// roc 2009-12 00432190  unit: MVCXTPPropertyGridItem::?$XItem  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432190
//
// 00432190  83ec20               sub esp, 0x20
// 00432193  8b442424             mov eax, dword ptr [esp + 0x24]
// 00432197  d900                 fld dword ptr [eax]
// 00432199  56                   push esi
// 0043219a  83ec08               sub esp, 8
// 0043219d  dd1c24               fstp qword ptr [esp]
// 004321a0  8bf1                 mov esi, ecx
// 004321a2  8d4c240c             lea ecx, [esp + 0xc]
// 004321a6  68cc689a00           push 0x9a68cc
// 004321ab  51                   push ecx
// 004321ac  ff15dcb79800         call dword ptr [0x98b7dc]
// 004321b2  83c40c               add esp, 0xc
// 004321b5  8d542408             lea edx, [esp + 8]
// 004321b9  8bcc                 mov ecx, esp
// 004321bb  8964242c             mov dword ptr [esp + 0x2c], esp
// 004321bf  52                   push edx
// 004321c0  ff15b8de9800         call dword ptr [0x98deb8]
// 004321c6  8b06                 mov eax, dword ptr [esi]
// 004321c8  8b5060               mov edx, dword ptr [eax + 0x60]
// 004321cb  8bce                 mov ecx, esi
// 004321cd  ffd2                 call edx
// 004321cf  5e                   pop esi
// 004321d0  83c420               add esp, 0x20
// 004321d3  c20400               ret 4
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