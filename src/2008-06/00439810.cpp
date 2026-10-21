// from server: 83% by EspClaude
// from server: 82% by Espeon
// roc 2008-06 00439810  unit: CSelectionPropGrid  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439810
//
// 00439810  6aff                 push -1
// 00439812  6862047c00           push 0x7c0462
// 00439817  64a100000000         mov eax, dword ptr fs:[0]
// 0043981d  50                   push eax
// 0043981e  64892500000000       mov dword ptr fs:[0], esp
// 00439825  83ec10               sub esp, 0x10
// 00439828  53                   push ebx
// 00439829  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043982d  8b8340010000         mov eax, dword ptr [ebx + 0x140]
// 00439833  56                   push esi
// 00439834  57                   push edi
// 00439835  8bf9                 mov edi, ecx
// 00439837  8b4808               mov ecx, dword ptr [eax + 8]
// 0043983a  51                   push ecx
// 0043983b  8bcf                 mov ecx, edi
// 0043983d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00439841  e8eaedffff           call 0x438630
// 00439846  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0043984c  33f6                 xor esi, esi
// 0043984e  397128               cmp dword ptr [ecx + 0x28], esi
// 00439851  8944240c             mov dword ptr [esp + 0xc], eax
// 00439855  0f8e8b000000         jle 0x4398e6
// 0043985b  55                   push ebp
// 0043985c  eb06                 jmp 0x439864
// 0043985e  8bff                 mov edi, edi
// 00439860  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439864  56                   push esi
// 00439865  e8b68b2d00           call 0x712420
// 0043986a  8d542418             lea edx, [esp + 0x18]
// 0043986e  52                   push edx
// 0043986f  8bc8                 mov ecx, eax
// 00439871  e82ae6ffff           call 0x437ea0
// 00439876  8bf8                 mov edi, eax
// 00439878  8d442414             lea eax, [esp + 0x14]
// 0043987c  50                   push eax
// 0043987d  8bcb                 mov ecx, ebx
// 0043987f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00439887  e814e6ffff           call 0x437ea0
// 0043988c  8be8                 mov ebp, eax
// 0043988e  8bcf                 mov ecx, edi
// 00439890  c644242801           mov byte ptr [esp + 0x28], 1
// 00439895  ff15e03e8000         call dword ptr [0x803ee0]
// 0043989b  50                   push eax
// 0043989c  8bcd                 mov ecx, ebp
// 0043989e  ff15f02f8000         call dword ptr [0x802ff0]
// 004398a4  85c0                 test eax, eax
// 004398a6  8d4c2414             lea ecx, [esp + 0x14]
// 004398aa  0f9cc3               setl bl
// 004398ad  ff15143f8000         call dword ptr [0x803f14]
// 004398b3  8d4c2418             lea ecx, [esp + 0x18]
// 004398b7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004398bf  ff15143f8000         call dword ptr [0x803f14]
// 004398c5  84db                 test bl, bl
// 004398c7  7510                 jne 0x4398d9
// 004398c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004398cd  8b89c0000000         mov ecx, dword ptr [ecx + 0xc0]
// 004398d3  46                   inc esi
// 004398d4  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 004398d7  7c87                 jl 0x439860
// 004398d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 004398dd  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004398e1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004398e5  5d                   pop ebp
// 004398e6  53                   push ebx
// 004398e7  56                   push esi
// 004398e8  8bc8                 mov ecx, eax
// 004398ea  e8a18e2d00           call 0x712790
// 004398ef  8b9340010000         mov edx, dword ptr [ebx + 0x140]
// 004398f5  8d44242c             lea eax, [esp + 0x2c]
// 004398f9  50                   push eax
// 004398fa  8d8fb4010000         lea ecx, [edi + 0x1b4]
// 00439900  8db320010000         lea esi, [ebx + 0x120]
// 00439906  89542430             mov dword ptr [esp + 0x30], edx
// 0043990a  e891ab1200           call 0x5644a0
// 0043990f  8d4c242c             lea ecx, [esp + 0x2c]
// 00439913  51                   push ecx
// 00439914  8d8f9c010000         lea ecx, [edi + 0x19c]
// 0043991a  8930                 mov dword ptr [eax], esi
// 0043991c  89742430             mov dword ptr [esp + 0x30], esi
// 00439920  e87b7afeff           call 0x4213a0
// 00439925  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00439929  5f                   pop edi
// 0043992a  5e                   pop esi
// 0043992b  5b                   pop ebx
// 0043992c  64890d00000000       mov dword ptr fs:[0], ecx
// 00439933  83c41c               add esp, 0x1c
// 00439936  c20400               ret 4

// from server: 81% by colin
// roc 2008-06 00439810  unit: CSelectionPropGrid  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439810
//
// 00439810  6aff                 push -1
// 00439812  6862047c00           push 0x7c0462
// 00439817  64a100000000         mov eax, dword ptr fs:[0]
// 0043981d  50                   push eax
// 0043981e  64892500000000       mov dword ptr fs:[0], esp
// 00439825  83ec10               sub esp, 0x10
// 00439828  53                   push ebx
// 00439829  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043982d  8b8340010000         mov eax, dword ptr [ebx + 0x140]
// 00439833  56                   push esi
// 00439834  57                   push edi
// 00439835  8bf9                 mov edi, ecx
// 00439837  8b4808               mov ecx, dword ptr [eax + 8]
// 0043983a  51                   push ecx
// 0043983b  8bcf                 mov ecx, edi
// 0043983d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00439841  e8eaedffff           call 0x438630
// 00439846  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0043984c  33f6                 xor esi, esi
// 0043984e  397128               cmp dword ptr [ecx + 0x28], esi
// 00439851  8944240c             mov dword ptr [esp + 0xc], eax
// 00439855  0f8e8b000000         jle 0x4398e6
// 0043985b  55                   push ebp
// 0043985c  eb06                 jmp 0x439864
// 0043985e  8bff                 mov edi, edi
// 00439860  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00439864  56                   push esi
// 00439865  e8b68b2d00           call 0x712420
// 0043986a  8d542418             lea edx, [esp + 0x18]
// 0043986e  52                   push edx
// 0043986f  8bc8                 mov ecx, eax
// 00439871  e82ae6ffff           call 0x437ea0
// 00439876  8bf8                 mov edi, eax
// 00439878  8d442414             lea eax, [esp + 0x14]
// 0043987c  50                   push eax
// 0043987d  8bcb                 mov ecx, ebx
// 0043987f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00439887  e814e6ffff           call 0x437ea0
// 0043988c  8be8                 mov ebp, eax
// 0043988e  8bcf                 mov ecx, edi
// 00439890  c644242801           mov byte ptr [esp + 0x28], 1
// 00439895  ff15e03e8000         call dword ptr [0x803ee0]
// 0043989b  50                   push eax
// 0043989c  8bcd                 mov ecx, ebp
// 0043989e  ff15f02f8000         call dword ptr [0x802ff0]
// 004398a4  85c0                 test eax, eax
// 004398a6  8d4c2414             lea ecx, [esp + 0x14]
// 004398aa  0f9cc3               setl bl
// 004398ad  ff15143f8000         call dword ptr [0x803f14]
// 004398b3  8d4c2418             lea ecx, [esp + 0x18]
// 004398b7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004398bf  ff15143f8000         call dword ptr [0x803f14]
// 004398c5  84db                 test bl, bl
// 004398c7  7510                 jne 0x4398d9
// 004398c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004398cd  8b89c0000000         mov ecx, dword ptr [ecx + 0xc0]
// 004398d3  46                   inc esi
// 004398d4  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 004398d7  7c87                 jl 0x439860
// 004398d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 004398dd  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004398e1  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004398e5  5d                   pop ebp
// 004398e6  53                   push ebx
// 004398e7  56                   push esi
// 004398e8  8bc8                 mov ecx, eax
// 004398ea  e8a18e2d00           call 0x712790
// 004398ef  8b9340010000         mov edx, dword ptr [ebx + 0x140]
// 004398f5  8d44242c             lea eax, [esp + 0x2c]
// 004398f9  50                   push eax
// 004398fa  8d8fb4010000         lea ecx, [edi + 0x1b4]
// 00439900  8db320010000         lea esi, [ebx + 0x120]
// 00439906  89542430             mov dword ptr [esp + 0x30], edx
// 0043990a  e891ab1200           call 0x5644a0
// 0043990f  8d4c242c             lea ecx, [esp + 0x2c]
// 00439913  51                   push ecx
// 00439914  8d8f9c010000         lea ecx, [edi + 0x19c]
// 0043991a  8930                 mov dword ptr [eax], esi
// 0043991c  89742430             mov dword ptr [esp + 0x30], esi
// 00439920  e87b7afeff           call 0x4213a0
// 00439925  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00439929  5f                   pop edi
// 0043992a  5e                   pop esi
// 0043992b  5b                   pop ebx
// 0043992c  64890d00000000       mov dword ptr fs:[0], ecx
// 00439933  83c41c               add esp, 0x1c
// 00439936  c20400               ret 4

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
    char pad[0x120];
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
        Item* other = selected->items->at(index);
        if (item->copy().compare(other->copy().c_str()) < 0)
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
