// roc 2011-06 004434e0  unit: HVCXTPPropertyGridItem::?$XItem  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004434e0
//
// 004434e0  83ec20               sub esp, 0x20
// 004434e3  8b442424             mov eax, dword ptr [esp + 0x24]
// 004434e7  56                   push esi
// 004434e8  8bf1                 mov esi, ecx
// 004434ea  8b08                 mov ecx, dword ptr [eax]
// 004434ec  51                   push ecx
// 004434ed  8d542408             lea edx, [esp + 8]
// 004434f1  681c91a600           push 0xa6911c
// 004434f6  52                   push edx
// 004434f7  ff15c009a400         call dword ptr [0xa409c0]
// 004434fd  83c408               add esp, 8
// 00443500  8d442408             lea eax, [esp + 8]
// 00443504  8bcc                 mov ecx, esp
// 00443506  8964242c             mov dword ptr [esp + 0x2c], esp
// 0044350a  50                   push eax
// 0044350b  ff15002ea400         call dword ptr [0xa42e00]
// 00443511  8b16                 mov edx, dword ptr [esi]
// 00443513  8b4260               mov eax, dword ptr [edx + 0x60]
// 00443516  8bce                 mov ecx, esi
// 00443518  ffd0                 call eax
// 0044351a  5e                   pop esi
// 0044351b  83c420               add esp, 0x20
// 0044351e  c20400               ret 4
// copied from an identical function in another client (function ?setValue@Item@ns_ROCX00001a@@QAEXPBH@Z)

namespace ns_ROCX00001a {
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
}
