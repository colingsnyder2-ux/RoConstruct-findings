// roc 2009-12 0043a1f0  unit: Vector3ComponentItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0043a1f0
//
// 0043a1f0  83ec20               sub esp, 0x20
// 0043a1f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043a1f7  d900                 fld dword ptr [eax]
// 0043a1f9  56                   push esi
// 0043a1fa  8bf1                 mov esi, ecx
// 0043a1fc  d99e34010000         fstp dword ptr [esi + 0x134]
// 0043a202  83ec08               sub esp, 8
// 0043a205  d94004               fld dword ptr [eax + 4]
// 0043a208  8d54240c             lea edx, [esp + 0xc]
// 0043a20c  d99e38010000         fstp dword ptr [esi + 0x138]
// 0043a212  d94008               fld dword ptr [eax + 8]
// 0043a215  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 0043a21b  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0043a221  d90488               fld dword ptr [eax + ecx*4]
// 0043a224  dd1c24               fstp qword ptr [esp]
// 0043a227  68cc689a00           push 0x9a68cc
// 0043a22c  52                   push edx
// 0043a22d  ff15dcb79800         call dword ptr [0x98b7dc]
// 0043a233  83c40c               add esp, 0xc
// 0043a236  8d442408             lea eax, [esp + 8]
// 0043a23a  8bcc                 mov ecx, esp
// 0043a23c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0043a240  50                   push eax
// 0043a241  ff15b8de9800         call dword ptr [0x98deb8]
// 0043a247  8b16                 mov edx, dword ptr [esi]
// 0043a249  8b4260               mov eax, dword ptr [edx + 0x60]
// 0043a24c  8bce                 mov ecx, esi
// 0043a24e  ffd0                 call eax
// 0043a250  5e                   pop esi
// 0043a251  83c420               add esp, 0x20
// 0043a254  c20400               ret 4
// copied from an identical function in another client (function ?setValue@Vector3ComponentItem@@QAEXPDM@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" {
    extern int (__cdecl *sprintf)(char *, const char *, ...);
}

struct Text;
extern void (__thiscall *constructText)(Text *, const char *);

struct __declspec(dllimport) Text {
    void *data;
    Text(const char *);
    Text(const Text &);
    ~Text();
};

struct Vector3ComponentItem {
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

    char padding[0x12c];
    volatile int component;
    volatile float x;
    volatile float y;
    volatile float z;

    void setValue(const volatile float *);
};

void Vector3ComponentItem::setValue(const volatile float *value)
{
    char buffer[32];
    x = value[0];
    y = value[1];
    z = value[2];
    sprintf(buffer, "%.3g", value[component]);
    setText(Text(buffer));
}