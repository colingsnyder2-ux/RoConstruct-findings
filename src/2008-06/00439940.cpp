// from server: 82% by Espeon
// from server: 81% by colin
// roc 2008-06 00439940  unit: CSelectionPropGrid  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439940
//
// 00439940  6aff                 push -1
// 00439942  6862047c00           push 0x7c0462
// 00439947  64a100000000         mov eax, dword ptr fs:[0]
// 0043994d  50                   push eax
// 0043994e  64892500000000       mov dword ptr fs:[0], esp
// 00439955  83ec10               sub esp, 0x10
// 00439958  53                   push ebx
// 00439959  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043995d  8b8338010000         mov eax, dword ptr [ebx + 0x138]
// 00439963  56                   push esi
// 00439964  57                   push edi
// 00439965  8bf9                 mov edi, ecx
// 00439967  8b4808               mov ecx, dword ptr [eax + 8]
// 0043996a  51                   push ecx
// 0043996b  8bcf                 mov ecx, edi
// 0043996d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00439971  e8baecffff           call 0x438630
// 00439976  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0043997c  33f6                 xor esi, esi
// 0043997e  397128               cmp dword ptr [ecx + 0x28], esi
// 00439981  8944240c             mov dword ptr [esp + 0xc], eax
// 00439985  0f8e8b000000         jle 0x439a16
// 0043998b  55                   push ebp
// 0043998c  eb06                 jmp 0x439994
// 0043998e  8bff                 mov edi, edi
// 00439990  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439994  56                   push esi
// 00439995  e8868a2d00           call 0x712420
// 0043999a  8d542418             lea edx, [esp + 0x18]
// 0043999e  52                   push edx
// 0043999f  8bc8                 mov ecx, eax
// 004399a1  e8fae4ffff           call 0x437ea0
// 004399a6  8bf8                 mov edi, eax
// 004399a8  8d442414             lea eax, [esp + 0x14]
// 004399ac  50                   push eax
// 004399ad  8bcb                 mov ecx, ebx
// 004399af  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004399b7  e8e4e4ffff           call 0x437ea0
// 004399bc  8be8                 mov ebp, eax
// 004399be  8bcf                 mov ecx, edi
// 004399c0  c644242801           mov byte ptr [esp + 0x28], 1
// 004399c5  ff15e03e8000         call dword ptr [0x803ee0]
// 004399cb  50                   push eax
// 004399cc  8bcd                 mov ecx, ebp
// 004399ce  ff15f02f8000         call dword ptr [0x802ff0]
// 004399d4  85c0                 test eax, eax
// 004399d6  8d4c2414             lea ecx, [esp + 0x14]
// 004399da  0f9cc3               setl bl
// 004399dd  ff15143f8000         call dword ptr [0x803f14]
// 004399e3  8d4c2418             lea ecx, [esp + 0x18]
// 004399e7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004399ef  ff15143f8000         call dword ptr [0x803f14]
// 004399f5  84db                 test bl, bl
// 004399f7  7510                 jne 0x439a09
// 004399f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004399fd  8b89c0000000         mov ecx, dword ptr [ecx + 0xc0]
// 00439a03  46                   inc esi
// 00439a04  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 00439a07  7c87                 jl 0x439990
// 00439a09  8b442410             mov eax, dword ptr [esp + 0x10]
// 00439a0d  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439a11  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00439a15  5d                   pop ebp
// 00439a16  53                   push ebx
// 00439a17  56                   push esi
// 00439a18  8bc8                 mov ecx, eax
// 00439a1a  e8718d2d00           call 0x712790
// 00439a1f  8b9338010000         mov edx, dword ptr [ebx + 0x138]
// 00439a25  8d44242c             lea eax, [esp + 0x2c]
// 00439a29  50                   push eax
// 00439a2a  8d8fb4010000         lea ecx, [edi + 0x1b4]
// 00439a30  8db318010000         lea esi, [ebx + 0x118]
// 00439a36  89542430             mov dword ptr [esp + 0x30], edx
// 00439a3a  e861aa1200           call 0x5644a0
// 00439a3f  8d4c242c             lea ecx, [esp + 0x2c]
// 00439a43  51                   push ecx
// 00439a44  8d8f9c010000         lea ecx, [edi + 0x19c]
// 00439a4a  8930                 mov dword ptr [eax], esi
// 00439a4c  89742430             mov dword ptr [esp + 0x30], esi
// 00439a50  e84b79feff           call 0x4213a0
// 00439a55  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00439a59  5f                   pop edi
// 00439a5a  5e                   pop esi
// 00439a5b  5b                   pop ebx
// 00439a5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00439a63  83c41c               add esp, 0x1c
// 00439a66  c20400               ret 4

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
    char pad[0x118];
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
