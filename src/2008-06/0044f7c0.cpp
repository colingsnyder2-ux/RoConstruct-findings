// from server: 90% by colin
// from server: 89% by king_originala
// roc 2008-06 0044f7c0  unit: PasteVerb  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f7c0
//
// 0044f7c0  6aff                 push -1
// 0044f7c2  680e177c00           push 0x7c170e
// 0044f7c7  64a100000000         mov eax, dword ptr fs:[0]
// 0044f7cd  50                   push eax
// 0044f7ce  64892500000000       mov dword ptr fs:[0], esp
// 0044f7d5  81ecec010000         sub esp, 0x1ec
// 0044f7db  56                   push esi
// 0044f7dc  8bf1                 mov esi, ecx
// 0044f7de  8d4c2404             lea ecx, [esp + 4]
// 0044f7e2  ff15043f8000         call dword ptr [0x803f04]
// 0044f7e8  68b8000000           push 0xb8
// 0044f7ed  8d4c2408             lea ecx, [esp + 8]
// 0044f7f1  c78424fc01000000000000 mov dword ptr [esp + 0x1fc], 0
// 0044f7fc  ff15c0328000         call dword ptr [0x8032c0]
// 0044f802  6a01                 push 1
// 0044f804  6a00                 push 0
// 0044f806  6a00                 push 0
// 0044f808  8d4c2410             lea ecx, [esp + 0x10]
// 0044f80c  ff15e03e8000         call dword ptr [0x803ee0]
// 0044f812  50                   push eax
// 0044f813  6a06                 push 6
// 0044f815  6a00                 push 0
// 0044f817  6854798100           push 0x817954
// 0044f81c  6a00                 push 0
// 0044f81e  8d4c2430             lea ecx, [esp + 0x30]
// 0044f822  e84b162500           call 0x6a0e72
// 0044f827  8d4c2410             lea ecx, [esp + 0x10]
// 0044f82b  c68424f801000001     mov byte ptr [esp + 0x1f8], 1
// 0044f833  e834162500           call 0x6a0e6c
// 0044f838  83f801               cmp eax, 1
// 0044f83b  7554                 jne 0x44f891
// 0044f83d  8d442408             lea eax, [esp + 8]
// 0044f841  50                   push eax
// 0044f842  8d4c2414             lea ecx, [esp + 0x14]
// 0044f846  e81b162500           call 0x6a0e66
// 0044f84b  8bc8                 mov ecx, eax
// 0044f84d  c68424f801000002     mov byte ptr [esp + 0x1f8], 2
// 0044f855  ff15e03e8000         call dword ptr [0x803ee0]
// 0044f85b  50                   push eax
// 0044f85c  8d4c2410             lea ecx, [esp + 0x10]
// 0044f860  e81b19fbff           call 0x401180
// 0044f865  8d4c2408             lea ecx, [esp + 8]
// 0044f869  c68424f801000004     mov byte ptr [esp + 0x1f8], 4
// 0044f871  ff15143f8000         call dword ptr [0x803f14]
// 0044f877  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0044f87d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044f881  8b08                 mov ecx, dword ptr [eax]
// 0044f883  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0044f886  56                   push esi
// 0044f887  50                   push eax
// 0044f888  ffd2                 call edx
// 0044f88a  56                   push esi
// 0044f88b  ff1544298000         call dword ptr [0x802944]
// 0044f891  8d4c2410             lea ecx, [esp + 0x10]
// 0044f895  c68424f801000000     mov byte ptr [esp + 0x1f8], 0
// 0044f89d  e8b8152500           call 0x6a0e5a
// 0044f8a2  8d4c2404             lea ecx, [esp + 4]
// 0044f8a6  ff15143f8000         call dword ptr [0x803f14]
// 0044f8ac  8b8c24f0010000       mov ecx, dword ptr [esp + 0x1f0]
// 0044f8b3  5e                   pop esi
// 0044f8b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f8bb  81c4f8010000         add esp, 0x1f8
// 0044f8c1  c3                   ret 

struct String;

extern "C" void (__thiscall *StringConstruct)(String *);
extern "C" void (__thiscall *StringDestroy)(String *) throw();
extern "C" int (__thiscall *StringLoad)(String *, unsigned int);
extern "C" const char *(__thiscall *StringText)(const String *);
extern "C" void (__stdcall *SysFreeString)(wchar_t *);
extern const char extension[];

struct String {
    char *data;

    String();
    ~String() throw();
    int load(unsigned int);
};

inline String::String()
{
    StringConstruct(this);
}

inline String::~String() throw()
{
    StringDestroy(this);
}

inline int String::load(unsigned int id)
{
    return StringLoad(this, id);
}

struct Dialog {
    char storage[0x1e0];

    Dialog(int, const char *, const char *, unsigned long,
           const char *, void *, unsigned long, int);
    ~Dialog();
    int run();
    String path() const;
};

struct WideString {
    wchar_t *data;

    WideString(const char *);
    __declspec(dllimport) ~WideString() throw();
};

struct Interface;

struct InterfaceTable {
    void *reserved[8];
    long (__stdcall *insert)(Interface *, wchar_t *);
};

struct Interface {
    InterfaceTable *table;
};

struct PasteVerb {
    char padding[0x94];
    Interface *object;

    void execute();
};

void PasteVerb::execute()
{
    String filter;
    filter.load(184);

    Dialog dialog(0, extension, 0, 6, StringText(&filter), 0, 0, 1);
    if (dialog.run() == 1) {
        WideString filename(StringText(&dialog.path()));
        object->table->insert(object, filename.data);
    }
}
