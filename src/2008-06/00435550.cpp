// from server: 95% by king_originala
// roc 2008-06 00435550  unit: CDeclarationView  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00435550
//
// 00435550  64a100000000         mov eax, dword ptr fs:[0]
// 00435556  6aff                 push -1
// 00435558  6809e77c00           push 0x7ce709
// 0043555d  50                   push eax
// 0043555e  64892500000000       mov dword ptr fs:[0], esp
// 00435565  83ec1c               sub esp, 0x1c
// 00435568  53                   push ebx
// 00435569  55                   push ebp
// 0043556a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0043556e  837d0000             cmp dword ptr [ebp], 0
// 00435572  56                   push esi
// 00435573  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00435577  57                   push edi
// 00435578  7e0d                 jle 0x435587
// 0043557a  68502e8100           push 0x812e50
// 0043557f  8bce                 mov ecx, esi
// 00435581  ff1548248000         call dword ptr [0x802448]
// 00435587  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0043558b  8b4704               mov eax, dword ptr [edi + 4]
// 0043558e  8b4004               mov eax, dword ptr [eax + 4]
// 00435591  8d4804               lea ecx, [eax + 4]
// 00435594  ff1564248000         call dword ptr [0x802464]
// 0043559a  50                   push eax
// 0043559b  8bce                 mov ecx, esi
// 0043559d  ff1548248000         call dword ptr [0x802448]
// 004355a3  68582e8100           push 0x812e58
// 004355a8  8bce                 mov ecx, esi
// 004355aa  ff1548248000         call dword ptr [0x802448]
// 004355b0  8b07                 mov eax, dword ptr [edi]
// 004355b2  8d4804               lea ecx, [eax + 4]
// 004355b5  ff1564248000         call dword ptr [0x802464]
// 004355bb  50                   push eax
// 004355bc  8bce                 mov ecx, esi
// 004355be  ff1548248000         call dword ptr [0x802448]
// 004355c4  8b4708               mov eax, dword ptr [edi + 8]
// 004355c7  8d5f08               lea ebx, [edi + 8]
// 004355ca  3b4704               cmp eax, dword ptr [edi + 4]
// 004355cd  753c                 jne 0x43560b
// 004355cf  68542e8100           push 0x812e54
// 004355d4  8bce                 mov ecx, esi
// 004355d6  ff1548248000         call dword ptr [0x802448]
// 004355dc  8d4c2410             lea ecx, [esp + 0x10]
// 004355e0  51                   push ecx
// 004355e1  8bcb                 mov ecx, ebx
// 004355e3  e838f9ffff           call 0x434f20
// 004355e8  50                   push eax
// 004355e9  8bce                 mov ecx, esi
// 004355eb  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004355f3  ff1550248000         call dword ptr [0x802450]
// 004355f9  8d4c2410             lea ecx, [esp + 0x10]
// 004355fd  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00435605  ff1568248000         call dword ptr [0x802468]
// 0043560b  ff4500               inc dword ptr [ebp]
// 0043560e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00435612  5f                   pop edi
// 00435613  5e                   pop esi
// 00435614  5d                   pop ebp
// 00435615  5b                   pop ebx
// 00435616  64890d00000000       mov dword ptr fs:[0], ecx
// 0043561d  83c428               add esp, 0x28
// 00435620  c3                   ret 

struct String;

extern String& (__thiscall *append_text)(String*, const char*);
extern String& (__thiscall *append_string)(String*, const String&);
extern const char* (__thiscall *string_data)(const String*);
extern void (__thiscall *destroy_string)(String*);

struct String
{
    unsigned char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct Node
{
    int unused;
    String text;
};

struct Link
{
    int unused;
    Node* node;
};

struct Slot
{
    Link* value;
    String render() const;
};

struct Entry
{
    Node* first;
    Link* second;
    Slot third;
};

extern const char separator[];
extern const char suffix[];
extern const char middle[];

void func_00435550(int* count, String* output, const Entry* entry)
{
    if (*count > 0)
        append_text(output, separator);

    append_text(output, string_data(&entry->second->node->text));
    append_text(output, middle);
    append_text(output, string_data(&entry->first->text));

    if (entry->third.value == entry->second)
    {
        append_text(output, suffix);
        append_string(output, entry->third.render());
    }

    ++*count;
}
