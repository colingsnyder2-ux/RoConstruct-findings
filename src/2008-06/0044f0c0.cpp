// from server: 100% by colin
// roc 2008-06 0044f0c0  unit: CRobloxDHtmlDialog  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f0c0
//
// 0044f0c0  64a100000000         mov eax, dword ptr fs:[0]
// 0044f0c6  6aff                 push -1
// 0044f0c8  6809167c00           push 0x7c1609
// 0044f0cd  50                   push eax
// 0044f0ce  64892500000000       mov dword ptr fs:[0], esp
// 0044f0d5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044f0d9  56                   push esi
// 0044f0da  8bf1                 mov esi, ecx
// 0044f0dc  8d4c2418             lea ecx, [esp + 0x18]
// 0044f0e0  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 0044f0e6  ff15043f8000         call dword ptr [0x803f04]
// 0044f0ec  6a01                 push 1
// 0044f0ee  8d4c241c             lea ecx, [esp + 0x1c]
// 0044f0f2  51                   push ecx
// 0044f0f3  68ed130180           push 0x800113ed
// 0044f0f8  6878728100           push 0x817278
// 0044f0fd  8bce                 mov ecx, esi
// 0044f0ff  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0044f107  e882222500           call 0x6a138e
// 0044f10c  6816b78000           push 0x80b716
// 0044f111  8d4c241c             lea ecx, [esp + 0x1c]
// 0044f115  ff15f02f8000         call dword ptr [0x802ff0]
// 0044f11b  85c0                 test eax, eax
// 0044f11d  7423                 je 0x44f142
// 0044f11f  8d4c2418             lea ecx, [esp + 0x18]
// 0044f123  ff15e03e8000         call dword ptr [0x803ee0]
// 0044f129  50                   push eax
// 0044f12a  ff1568288000         call dword ptr [0x802868]
// 0044f130  83c404               add esp, 4
// 0044f133  83f801               cmp eax, 1
// 0044f136  750a                 jne 0x44f142
// 0044f138  8b16                 mov edx, dword ptr [esi]
// 0044f13a  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 0044f140  eb08                 jmp 0x44f14a
// 0044f142  8b16                 mov edx, dword ptr [esi]
// 0044f144  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 0044f14a  8bce                 mov ecx, esi
// 0044f14c  ffd0                 call eax
// 0044f14e  8d4c2418             lea ecx, [esp + 0x18]
// 0044f152  ff15143f8000         call dword ptr [0x803f14]
// 0044f158  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044f15c  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f163  5e                   pop esi
// 0044f164  83c40c               add esp, 0xc
// 0044f167  c20800               ret 8

struct String;

typedef void (__thiscall *StringInit)(String*);
typedef void (__thiscall *StringDestroy)(String*);
typedef int (__thiscall *StringCompare)(const String*, const char*);
typedef const char* (__thiscall *StringData)(const String*);
typedef int (__cdecl *Atoi)(const char*);

extern StringInit stringInit;
extern StringDestroy stringDestroy;
extern StringCompare stringCompare;
extern StringData stringData;
extern Atoi atoi;
extern char propertyName[];
extern char emptyText[];

struct String
{
    void* data;
    String();
    __declspec(dllimport) void __thiscall destroyImport() throw();
    __declspec(nothrow) ~String();
    int compare(const char*) const;
    const char* text() const;
};

__forceinline String::String()
{
    stringInit(this);
}

__declspec(nothrow) __forceinline String::~String()
{
    this->destroyImport();
}

__forceinline int String::compare(const char* value) const
{
    return stringCompare(this, value);
}

__forceinline const char* String::text() const
{
    return stringData(this);
}

struct Dialog;
typedef void (__thiscall *DialogAction)(Dialog*);

struct DialogTable
{
    DialogAction preceding[88];
    DialogAction accept;
    DialogAction cancel;
};

struct Dialog
{
    DialogTable* table;
    void getProperty(const char*, unsigned long, String*, int);
    void handle(void*, long*);
};

void Dialog::handle(void*, long* result)
{
    *result = -1;
    String value;
    getProperty(propertyName, 0x800113EDUL, &value, 1);

    if (value.compare(emptyText) && atoi(value.text()) == 1)
        table->accept(this);
    else
        table->cancel(this);
}
