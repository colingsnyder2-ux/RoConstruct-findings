// roc 2010-06 0043b9f0  unit: Vector3ComponentItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0043b9f0
//
// 0043b9f0  83ec20               sub esp, 0x20
// 0043b9f3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043b9f7  d900                 fld dword ptr [eax]
// 0043b9f9  56                   push esi
// 0043b9fa  8bf1                 mov esi, ecx
// 0043b9fc  d99e34010000         fstp dword ptr [esi + 0x134]
// 0043ba02  83ec08               sub esp, 8
// 0043ba05  d94004               fld dword ptr [eax + 4]
// 0043ba08  8d54240c             lea edx, [esp + 0xc]
// 0043ba0c  d99e38010000         fstp dword ptr [esi + 0x138]
// 0043ba12  d94008               fld dword ptr [eax + 8]
// 0043ba15  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 0043ba1b  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0043ba21  d90488               fld dword ptr [eax + ecx*4]
// 0043ba24  dd1c24               fstp qword ptr [esp]
// 0043ba27  686c76a000           push 0xa0766c
// 0043ba2c  52                   push edx
// 0043ba2d  ff1564a89e00         call dword ptr [0x9ea864]
// 0043ba33  83c40c               add esp, 0xc
// 0043ba36  8d442408             lea eax, [esp + 8]
// 0043ba3a  8bcc                 mov ecx, esp
// 0043ba3c  8964242c             mov dword ptr [esp + 0x2c], esp
// 0043ba40  50                   push eax
// 0043ba41  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0043ba47  8b16                 mov edx, dword ptr [esi]
// 0043ba49  8b4260               mov eax, dword ptr [edx + 0x60]
// 0043ba4c  8bce                 mov ecx, esi
// 0043ba4e  ffd0                 call eax
// 0043ba50  5e                   pop esi
// 0043ba51  83c420               add esp, 0x20
// 0043ba54  c20400               ret 4
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