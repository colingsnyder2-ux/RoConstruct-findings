// from server: 99% by colin
// from server: 92% by king_originala
// roc 2008-06 00448800  unit: VCRenderSettings::?$EnumPropDescriptor  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448800
//
// 00448800  64a100000000         mov eax, dword ptr fs:[0]
// 00448806  6aff                 push -1
// 00448808  6809e77c00           push 0x7ce709
// 0044880d  50                   push eax
// 0044880e  64892500000000       mov dword ptr fs:[0], esp
// 00448815  83ec20               sub esp, 0x20
// 00448818  56                   push esi
// 00448819  57                   push edi
// 0044881a  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0044881e  8bf1                 mov esi, ecx
// 00448820  8bcf                 mov ecx, edi
// 00448822  e8e93f1300           call 0x57c810
// 00448827  84c0                 test al, al
// 00448829  0f85ff000000         jne 0x44892e
// 0044882f  53                   push ebx
// 00448830  8d5f10               lea ebx, [edi + 0x10]
// 00448833  55                   push ebp
// 00448834  8bcb                 mov ecx, ebx
// 00448836  e8c5391300           call 0x57c200
// 0044883b  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0044883f  84c0                 test al, al
// 00448841  0f84bd000000         je 0x448904
// 00448847  8d4c2414             lea ecx, [esp + 0x14]
// 0044884b  ff1560248000         call dword ptr [0x802460]
// 00448851  8d442414             lea eax, [esp + 0x14]
// 00448855  50                   push eax
// 00448856  8bcb                 mov ecx, ebx
// 00448858  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00448860  e8ab391300           call 0x57c210
// 00448865  84c0                 test al, al
// 00448867  0f8485000000         je 0x4488f2
// 0044886d  8d4c2414             lea ecx, [esp + 0x14]
// 00448871  ff1564248000         call dword ptr [0x802464]
// 00448877  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0044887a  8d4c2444             lea ecx, [esp + 0x44]
// 0044887e  51                   push ecx
// 0044887f  50                   push eax
// 00448880  e80bba1000           call 0x554290
// 00448885  83c404               add esp, 4
// 00448888  50                   push eax
// 00448889  8bcf                 mov ecx, edi
// 0044888b  e8704a1a00           call 0x5ed300
// 00448890  84c0                 test al, al
// 00448892  7441                 je 0x4488d5
// 00448894  8b542444             mov edx, dword ptr [esp + 0x44]
// 00448898  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0044889b  89542444             mov dword ptr [esp + 0x44], edx
// 0044889f  8b01                 mov eax, dword ptr [ecx]
// 004488a1  8b400c               mov eax, dword ptr [eax + 0xc]
// 004488a4  8d542444             lea edx, [esp + 0x44]
// 004488a8  52                   push edx
// 004488a9  8bd5                 mov edx, ebp
// 004488ab  52                   push edx
// 004488ac  ffd0                 call eax
// 004488ae  8d4c2414             lea ecx, [esp + 0x14]
// 004488b2  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 004488ba  ff1568248000         call dword ptr [0x802468]
// 004488c0  5d                   pop ebp
// 004488c1  5b                   pop ebx
// 004488c2  5f                   pop edi
// 004488c3  5e                   pop esi
// 004488c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004488c8  64890d00000000       mov dword ptr fs:[0], ecx
// 004488cf  83c42c               add esp, 0x2c
// 004488d2  c20c00               ret 0xc
// 004488d5  8d4c2414             lea ecx, [esp + 0x14]
// 004488d9  ff15f4238000         call dword ptr [0x8023f4]
// 004488df  85c0                 test eax, eax
// 004488e1  750f                 jne 0x4488f2
// 004488e3  8b16                 mov edx, dword ptr [esi]
// 004488e5  50                   push eax
// 004488e6  8b4234               mov eax, dword ptr [edx + 0x34]
// 004488e9  55                   push ebp
// 004488ea  8bce                 mov ecx, esi
// 004488ec  ffd0                 call eax
// 004488ee  84c0                 test al, al
// 004488f0  75bc                 jne 0x4488ae
// 004488f2  8d4c2414             lea ecx, [esp + 0x14]
// 004488f6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 004488fe  ff1568248000         call dword ptr [0x802468]
// 00448904  8d4c2410             lea ecx, [esp + 0x10]
// 00448908  51                   push ecx
// 00448909  8bcb                 mov ecx, ebx
// 0044890b  e8e03b1300           call 0x57c4f0
// 00448910  84c0                 test al, al
// 00448912  7418                 je 0x44892c
// 00448914  8b542410             mov edx, dword ptr [esp + 0x10]
// 00448918  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0044891b  89542440             mov dword ptr [esp + 0x40], edx
// 0044891f  8b01                 mov eax, dword ptr [ecx]
// 00448921  8b400c               mov eax, dword ptr [eax + 0xc]
// 00448924  8d542440             lea edx, [esp + 0x40]
// 00448928  52                   push edx
// 00448929  55                   push ebp
// 0044892a  ffd0                 call eax
// 0044892c  5d                   pop ebp
// 0044892d  5b                   pop ebx
// 0044892e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00448932  5f                   pop edi
// 00448933  5e                   pop esi
// 00448934  64890d00000000       mov dword ptr fs:[0], ecx
// 0044893b  83c42c               add esp, 0x2c
// 0044893e  c20c00               ret 0xc

struct String
{
    char storage[28];
    __declspec(dllimport) String();
    __declspec(dllimport) ~String();
    __declspec(dllimport) const char* data() const;
    __declspec(dllimport) unsigned int size() const;
};

struct Name;
extern const Name& __cdecl lookupName(const char*);

enum EnumValue
{
    EnumValueZero = 0
};

struct Value
{
    bool isString() const;
    bool getString(String&) const;
    bool getInteger(int&) const;
};

struct Element
{
    char padding[16];
    Value value;
    bool isNull() const;
};

struct EnumDescriptor
{
    bool convert(const Name&, int&) const;
};

struct Setter
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void*, const EnumValue&);
};

struct S
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual bool setEmpty(void*, int);

    char padding[24];
    Setter* setter;
    EnumDescriptor* descriptor;

    void read(void*, Element*, int);
};

void S::read(void* object, Element* element, int value)
{
    if (element->isNull())
        return;

    if (element->value.isString())
    {
        String text;
        if (element->value.getString(text))
        {
            const char* name = text.data();
            EnumDescriptor* enumDescriptor = descriptor;
            if (enumDescriptor->convert(lookupName(name), value))
            {
                EnumValue converted = static_cast<EnumValue>(value);
                setter->set(object, converted);
                return;
            }

            if (text.size() == 0 && setEmpty(object, 0))
                return;
        }
    }

    int number;
    if (element->value.getInteger(number))
    {
        EnumValue converted = static_cast<EnumValue>(number);
        setter->set(object, converted);
    }
}
