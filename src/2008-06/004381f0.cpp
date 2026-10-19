// from server: 92% by colin
// from server: 91% by king_originala
// roc 2008-06 004381f0  unit: CPropertyGridItemBrickColor  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004381f0
//
// 004381f0  6aff                 push -1
// 004381f2  6899037c00           push 0x7c0399
// 004381f7  64a100000000         mov eax, dword ptr fs:[0]
// 004381fd  50                   push eax
// 004381fe  64892500000000       mov dword ptr fs:[0], esp
// 00438205  51                   push ecx
// 00438206  56                   push esi
// 00438207  8bf1                 mov esi, ecx
// 00438209  6816b78000           push 0x80b716
// 0043820e  8d4c241c             lea ecx, [esp + 0x1c]
// 00438212  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043821a  ff15f02f8000         call dword ptr [0x802ff0]
// 00438220  51                   push ecx
// 00438221  8bcc                 mov ecx, esp
// 00438223  89642408             mov dword ptr [esp + 8], esp
// 00438227  85c0                 test eax, eax
// 00438229  7422                 je 0x43824d
// 0043822b  8d44241c             lea eax, [esp + 0x1c]
// 0043822f  50                   push eax
// 00438230  ff15d43e8000         call dword ptr [0x803ed4]
// 00438236  e855f9ffff           call 0x437b90
// 0043823b  8b16                 mov edx, dword ptr [esi]
// 0043823d  83c404               add esp, 4
// 00438240  50                   push eax
// 00438241  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00438247  8bce                 mov ecx, esi
// 00438249  ffd0                 call eax
// 0043824b  eb1c                 jmp 0x438269
// 0043824d  6816b78000           push 0x80b716
// 00438252  c7860c010000ffffffff mov dword ptr [esi + 0x10c], 0xffffffff
// 0043825c  ff15103f8000         call dword ptr [0x803f10]
// 00438262  8bce                 mov ecx, esi
// 00438264  e887972d00           call 0x7119f0
// 00438269  8d4c2418             lea ecx, [esp + 0x18]
// 0043826d  ff15143f8000         call dword ptr [0x803f14]
// 00438273  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00438277  64890d00000000       mov dword ptr fs:[0], ecx
// 0043827e  5e                   pop esi
// 0043827f  83c410               add esp, 0x10
// 00438282  c20400               ret 4

struct String {
    char* data;

    String(const char*);
    String(const String&);
    __declspec(dllimport) ~String() throw();
    int Compare(const char*) const;
};

extern int __cdecl ConvertColor(String);

struct Item;

typedef void (__thiscall *SetColorFunction)(Item*, int);

struct ItemTable {
    void* reserved[57];
    SetColorFunction setColor;
};

struct Item {
    ItemTable* table;
    char padding[0x108];
    int color;

    void SetValue(String);
    void Update(String);
};

void Item::Update(String value)
{
    if (value.Compare(">Authoring") != 0) {
        table->setColor(this, ConvertColor(value));
    } else {
        color = -1;
        SetValue(String(">Authoring"));
    }
}
