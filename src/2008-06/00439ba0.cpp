// from server: 82% by colin
// from server: 78% by king_originala
// roc 2008-06 00439ba0  unit: CSelectionPropGrid  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439ba0
//
// 00439ba0  6aff                 push -1
// 00439ba2  6862047c00           push 0x7c0462
// 00439ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00439bad  50                   push eax
// 00439bae  64892500000000       mov dword ptr fs:[0], esp
// 00439bb5  83ec10               sub esp, 0x10
// 00439bb8  53                   push ebx
// 00439bb9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00439bbd  8b832c010000         mov eax, dword ptr [ebx + 0x12c]
// 00439bc3  56                   push esi
// 00439bc4  57                   push edi
// 00439bc5  8bf9                 mov edi, ecx
// 00439bc7  8b4808               mov ecx, dword ptr [eax + 8]
// 00439bca  51                   push ecx
// 00439bcb  8bcf                 mov ecx, edi
// 00439bcd  897c241c             mov dword ptr [esp + 0x1c], edi
// 00439bd1  e85aeaffff           call 0x438630
// 00439bd6  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00439bdc  33f6                 xor esi, esi
// 00439bde  397128               cmp dword ptr [ecx + 0x28], esi
// 00439be1  8944240c             mov dword ptr [esp + 0xc], eax
// 00439be5  0f8e8b000000         jle 0x439c76
// 00439beb  55                   push ebp
// 00439bec  eb06                 jmp 0x439bf4
// 00439bee  8bff                 mov edi, edi
// 00439bf0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439bf4  56                   push esi
// 00439bf5  e826882d00           call 0x712420
// 00439bfa  8d542418             lea edx, [esp + 0x18]
// 00439bfe  52                   push edx
// 00439bff  8bc8                 mov ecx, eax
// 00439c01  e89ae2ffff           call 0x437ea0
// 00439c06  8bf8                 mov edi, eax
// 00439c08  8d442414             lea eax, [esp + 0x14]
// 00439c0c  50                   push eax
// 00439c0d  8bcb                 mov ecx, ebx
// 00439c0f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00439c17  e884e2ffff           call 0x437ea0
// 00439c1c  8be8                 mov ebp, eax
// 00439c1e  8bcf                 mov ecx, edi
// 00439c20  c644242801           mov byte ptr [esp + 0x28], 1
// 00439c25  ff15e03e8000         call dword ptr [0x803ee0]
// 00439c2b  50                   push eax
// 00439c2c  8bcd                 mov ecx, ebp
// 00439c2e  ff15f02f8000         call dword ptr [0x802ff0]
// 00439c34  85c0                 test eax, eax
// 00439c36  8d4c2414             lea ecx, [esp + 0x14]
// 00439c3a  0f9cc3               setl bl
// 00439c3d  ff15143f8000         call dword ptr [0x803f14]
// 00439c43  8d4c2418             lea ecx, [esp + 0x18]
// 00439c47  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00439c4f  ff15143f8000         call dword ptr [0x803f14]
// 00439c55  84db                 test bl, bl
// 00439c57  7510                 jne 0x439c69
// 00439c59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00439c5d  8b89c0000000         mov ecx, dword ptr [ecx + 0xc0]
// 00439c63  46                   inc esi
// 00439c64  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 00439c67  7c87                 jl 0x439bf0
// 00439c69  8b442410             mov eax, dword ptr [esp + 0x10]
// 00439c6d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439c71  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00439c75  5d                   pop ebp
// 00439c76  53                   push ebx
// 00439c77  56                   push esi
// 00439c78  8bc8                 mov ecx, eax
// 00439c7a  e8118b2d00           call 0x712790
// 00439c7f  8b932c010000         mov edx, dword ptr [ebx + 0x12c]
// 00439c85  8d44242c             lea eax, [esp + 0x2c]
// 00439c89  50                   push eax
// 00439c8a  8d8fb4010000         lea ecx, [edi + 0x1b4]
// 00439c90  8db30c010000         lea esi, [ebx + 0x10c]
// 00439c96  89542430             mov dword ptr [esp + 0x30], edx
// 00439c9a  e801a81200           call 0x5644a0
// 00439c9f  8d4c242c             lea ecx, [esp + 0x2c]
// 00439ca3  51                   push ecx
// 00439ca4  8d8f9c010000         lea ecx, [edi + 0x19c]
// 00439caa  8930                 mov dword ptr [eax], esi
// 00439cac  89742430             mov dword ptr [esp + 0x30], esi
// 00439cb0  e8eb76feff           call 0x4213a0
// 00439cb5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00439cb9  5f                   pop edi
// 00439cba  5e                   pop esi
// 00439cbb  5b                   pop ebx
// 00439cbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00439cc3  83c41c               add esp, 0x1c
// 00439cc6  c20400               ret 4

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
    char pad[0x10c];
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
    void notify(void**);
};

struct Map {
    void** find(void**);
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
        if (item->copy().compare(selected->items->at(index)->copy().c_str()) < 0)
            break;
    }

    selected->insert(index, item);

    void* key = item->descriptor;
    void** value = map.find(&key);
    void* handle = item->handle;
    *value = handle;
    key = handle;
    listener.notify(&key);
}
