// from server: 92% by king_originala
// roc 2008-06 00439a70  unit: CSelectionPropGrid  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439a70
//
// 00439a70  6aff                 push -1
// 00439a72  6862047c00           push 0x7c0462
// 00439a77  64a100000000         mov eax, dword ptr fs:[0]
// 00439a7d  50                   push eax
// 00439a7e  64892500000000       mov dword ptr fs:[0], esp
// 00439a85  83ec10               sub esp, 0x10
// 00439a88  53                   push ebx
// 00439a89  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00439a8d  8b8334010000         mov eax, dword ptr [ebx + 0x134]
// 00439a93  56                   push esi
// 00439a94  57                   push edi
// 00439a95  8bf9                 mov edi, ecx
// 00439a97  8b4808               mov ecx, dword ptr [eax + 8]
// 00439a9a  51                   push ecx
// 00439a9b  8bcf                 mov ecx, edi
// 00439a9d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00439aa1  e88aebffff           call 0x438630
// 00439aa6  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00439aac  33f6                 xor esi, esi
// 00439aae  397128               cmp dword ptr [ecx + 0x28], esi
// 00439ab1  8944240c             mov dword ptr [esp + 0xc], eax
// 00439ab5  0f8e8b000000         jle 0x439b46
// 00439abb  55                   push ebp
// 00439abc  eb06                 jmp 0x439ac4
// 00439abe  8bff                 mov edi, edi
// 00439ac0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439ac4  56                   push esi
// 00439ac5  e856892d00           call 0x712420
// 00439aca  8d542418             lea edx, [esp + 0x18]
// 00439ace  52                   push edx
// 00439acf  8bc8                 mov ecx, eax
// 00439ad1  e8cae3ffff           call 0x437ea0
// 00439ad6  8bf8                 mov edi, eax
// 00439ad8  8d442414             lea eax, [esp + 0x14]
// 00439adc  50                   push eax
// 00439add  8bcb                 mov ecx, ebx
// 00439adf  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00439ae7  e8b4e3ffff           call 0x437ea0
// 00439aec  8be8                 mov ebp, eax
// 00439aee  8bcf                 mov ecx, edi
// 00439af0  c644242801           mov byte ptr [esp + 0x28], 1
// 00439af5  ff15e03e8000         call dword ptr [0x803ee0]
// 00439afb  50                   push eax
// 00439afc  8bcd                 mov ecx, ebp
// 00439afe  ff15f02f8000         call dword ptr [0x802ff0]
// 00439b04  85c0                 test eax, eax
// 00439b06  8d4c2414             lea ecx, [esp + 0x14]
// 00439b0a  0f9cc3               setl bl
// 00439b0d  ff15143f8000         call dword ptr [0x803f14]
// 00439b13  8d4c2418             lea ecx, [esp + 0x18]
// 00439b17  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00439b1f  ff15143f8000         call dword ptr [0x803f14]
// 00439b25  84db                 test bl, bl
// 00439b27  7510                 jne 0x439b39
// 00439b29  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00439b2d  8b89c0000000         mov ecx, dword ptr [ecx + 0xc0]
// 00439b33  46                   inc esi
// 00439b34  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 00439b37  7c87                 jl 0x439ac0
// 00439b39  8b442410             mov eax, dword ptr [esp + 0x10]
// 00439b3d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439b41  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00439b45  5d                   pop ebp
// 00439b46  53                   push ebx
// 00439b47  56                   push esi
// 00439b48  8bc8                 mov ecx, eax
// 00439b4a  e8418c2d00           call 0x712790
// 00439b4f  8b9334010000         mov edx, dword ptr [ebx + 0x134]
// 00439b55  8d44242c             lea eax, [esp + 0x2c]
// 00439b59  50                   push eax
// 00439b5a  8d8fb4010000         lea ecx, [edi + 0x1b4]
// 00439b60  8db314010000         lea esi, [ebx + 0x114]
// 00439b66  89542430             mov dword ptr [esp + 0x30], edx
// 00439b6a  e831a91200           call 0x5644a0
// 00439b6f  8d4c242c             lea ecx, [esp + 0x2c]
// 00439b73  51                   push ecx
// 00439b74  8d8f9c010000         lea ecx, [edi + 0x19c]
// 00439b7a  8930                 mov dword ptr [eax], esi
// 00439b7c  89742430             mov dword ptr [esp + 0x30], esi
// 00439b80  e81b78feff           call 0x4213a0
// 00439b85  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00439b89  5f                   pop edi
// 00439b8a  5e                   pop esi
// 00439b8b  5b                   pop ebx
// 00439b8c  64890d00000000       mov dword ptr fs:[0], ecx
// 00439b93  83c41c               add esp, 0x1c
// 00439b96  c20400               ret 4

// from server: 83% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
//

//

struct String {
    char* data;
    const char* c_str() const;
    int compare(const char*) const;
    __declspec(dllimport) ~String() throw();
};

extern const char* (__thiscall* string_data)(const String*);
extern int (__thiscall* string_compare)(const String*, const char*);
extern void (__thiscall* string_destroy)(String*);

inline const char* String::c_str() const
{
    return string_data(this);
}

inline int String::compare(const char* value) const
{
    return string_compare(this, value);
}

struct Descriptor {
    char pad[8];
    void* key;
};

struct Item {
    char pad[0x114];
    char handle[0x20];
    Descriptor* descriptor;
    String copy();
};

struct Items {
    char pad[0x28];
    int count;
    Item* at(int);
};

struct Group {
    char pad[0xc0];
    Items* items;
    void insert(int, Item*);
};

struct Listener {
    char pad[0x18];
    void notify(void* const&);
};

struct Map {
    void*& find(void* const&);
};

struct Selection {
    char pad[0x19c];
    Listener listener;
    Map map;
    Group* group(void*);
    void f(Item*);
};

void Selection::f(Item* item)
{
    Group* selected = group(item->descriptor->key);
    int index = 0;
    for (; index < selected->items->count; ++index) {
        Item* other = selected->items->at(index);
        if (item->copy().compare(other->copy().c_str()) < 0)
            break;
    }

    selected->insert(index, item);

    map.find(item->descriptor) = item->handle;
    listener.notify(item->handle);
}
