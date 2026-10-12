// from server: 39% by king_originala
// roc 2008-06 0042db20  unit: VCLuaFunction::?$CComObject  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042db20
//
// 0042db20  6aff                 push -1
// 0042db22  68eef87b00           push 0x7bf8ee
// 0042db27  64a100000000         mov eax, dword ptr fs:[0]
// 0042db2d  50                   push eax
// 0042db2e  64892500000000       mov dword ptr fs:[0], esp
// 0042db35  81ec80000000         sub esp, 0x80
// 0042db3b  53                   push ebx
// 0042db3c  56                   push esi
// 0042db3d  8bf1                 mov esi, ecx
// 0042db3f  0fb78c2498000000     movzx ecx, word ptr [esp + 0x98]
// 0042db47  33db                 xor ebx, ebx
// 0042db49  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 0042db50  83f90b               cmp ecx, 0xb
// 0042db53  0f8707020000         ja 0x42dd60
// 0042db59  ff248da4dd4200       jmp dword ptr [ecx*4 + 0x42dda4]
// 0042db60  8d8424a0000000       lea eax, [esp + 0xa0]
// 0042db67  50                   push eax
// 0042db68  8d4c2410             lea ecx, [esp + 0x10]
// 0042db6c  e88ff6ffff           call 0x42d200
// 0042db71  8d4c240c             lea ecx, [esp + 0xc]
// 0042db75  51                   push ecx
// 0042db76  8bce                 mov ecx, esi
// 0042db78  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0042db80  e81bffffff           call 0x42daa0
// 0042db85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042db89  e998010000           jmp 0x42dd26
// 0042db8e  dd8424a0000000       fld qword ptr [esp + 0xa0]
// 0042db95  8d4c240c             lea ecx, [esp + 0xc]
// 0042db99  51                   push ecx
// 0042db9a  d95c2410             fstp dword ptr [esp + 0x10]
// 0042db9e  8d4c241c             lea ecx, [esp + 0x1c]
// 0042dba2  e859f6ffff           call 0x42d200
// 0042dba7  8d542418             lea edx, [esp + 0x18]
// 0042dbab  52                   push edx
// 0042dbac  8bce                 mov ecx, esi
// 0042dbae  c684249400000002     mov byte ptr [esp + 0x94], 2
// 0042dbb6  e8e5feffff           call 0x42daa0
// 0042dbbb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042dbbf  889c2490000000       mov byte ptr [esp + 0x90], bl
// 0042dbc6  3bcb                 cmp ecx, ebx
// 0042dbc8  0f846b010000         je 0x42dd39
// 0042dbce  8b01                 mov eax, dword ptr [ecx]
// 0042dbd0  8b10                 mov edx, dword ptr [eax]
// 0042dbd2  6a01                 push 1
// 0042dbd4  ffd2                 call edx
// 0042dbd6  e95e010000           jmp 0x42dd39
// 0042dbdb  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0042dbe2  50                   push eax
// 0042dbe3  8d4c2418             lea ecx, [esp + 0x18]
// 0042dbe7  ff15d83e8000         call dword ptr [0x803ed8]
// 0042dbed  8bc8                 mov ecx, eax
// 0042dbef  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0042dbf7  ff15e03e8000         call dword ptr [0x803ee0]
// 0042dbfd  50                   push eax
// 0042dbfe  8d4c242c             lea ecx, [esp + 0x2c]
// 0042dc02  ff1558248000         call dword ptr [0x802458]
// 0042dc08  50                   push eax
// 0042dc09  8d4c241c             lea ecx, [esp + 0x1c]
// 0042dc0d  c684249400000004     mov byte ptr [esp + 0x94], 4
// 0042dc15  e8b699feff           call 0x4175d0
// 0042dc1a  8d4c2418             lea ecx, [esp + 0x18]
// 0042dc1e  51                   push ecx
// 0042dc1f  8bce                 mov ecx, esi
// 0042dc21  c684249400000005     mov byte ptr [esp + 0x94], 5
// 0042dc29  e872feffff           call 0x42daa0
// 0042dc2e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042dc32  c684249000000004     mov byte ptr [esp + 0x90], 4
// 0042dc3a  3bcb                 cmp ecx, ebx
// 0042dc3c  7408                 je 0x42dc46
// 0042dc3e  8b11                 mov edx, dword ptr [ecx]
// 0042dc40  8b02                 mov eax, dword ptr [edx]
// 0042dc42  6a01                 push 1
// 0042dc44  ffd0                 call eax
// 0042dc46  8d4c2428             lea ecx, [esp + 0x28]
// 0042dc4a  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0042dc52  ff1568248000         call dword ptr [0x802468]
// 0042dc58  8d4c2414             lea ecx, [esp + 0x14]
// 0042dc5c  ff15143f8000         call dword ptr [0x803f14]
// 0042dc62  e9d2000000           jmp 0x42dd39
// 0042dc67  6683bc24a0000000ff   cmp word ptr [esp + 0xa0], -1
// 0042dc70  8d54240b             lea edx, [esp + 0xb]
// 0042dc74  0f94c1               sete cl
// 0042dc77  884c240b             mov byte ptr [esp + 0xb], cl
// 0042dc7b  52                   push edx
// 0042dc7c  8d4c241c             lea ecx, [esp + 0x1c]
// 0042dc80  e8bbf5ffff           call 0x42d240
// 0042dc85  8d442418             lea eax, [esp + 0x18]
// 0042dc89  50                   push eax
// 0042dc8a  8bce                 mov ecx, esi
// 0042dc8c  c684249400000006     mov byte ptr [esp + 0x94], 6
// 0042dc94  e807feffff           call 0x42daa0
// 0042dc99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042dc9d  e984000000           jmp 0x42dd26

struct Variant {
    unsigned short type;
    unsigned short reserved1, reserved2, reserved3;
    union {
        short shortValue;
        long longValue;
        float floatValue;
        double doubleValue;
        wchar_t* stringValue;
        short boolValue;
    };
    ~Variant();
};

struct Content {
    virtual ~Content();
};

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct BString {
    void* data;
    BString(wchar_t*);
    operator const char*() const;
    ~BString();
};

struct Any {
    void* table;
    Content* content;

    Any(const float&);
    Any(const bool&);
    Any(const String&);

    ~Any() {
        if (content)
            delete content;
    }
};

struct S {
    void assign(const Any&);
    void convert(Variant);
};

void S::convert(Variant value)
{
    switch (value.type) {
    case 4: {
        Any result(value.floatValue);
        assign(result);
        break;
    }
    case 5: {
        float number = (float)value.doubleValue;
        Any result(number);
        assign(result);
        break;
    }
    case 8: {
        BString text(value.stringValue);
        String string((const char*)text);
        Any result(string);
        assign(result);
        break;
    }
    case 11: {
        bool boolean = value.boolValue == -1;
        Any result(boolean);
        assign(result);
        break;
    }
    case 2: {
        float number = (float)value.shortValue;
        Any result(number);
        assign(result);
        break;
    }
    case 3: {
        float number = (float)value.longValue;
        Any result(number);
        assign(result);
        break;
    }
    }
}
