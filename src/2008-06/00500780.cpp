// from server: 10% by coldek
// from server: 46% by king_originala
// roc 2008-06 00500780  unit: RBX::ViewNew::HeadBuilder  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500780
//
// 00500780  55                   push ebp
// 00500781  8d6c24b0             lea ebp, [esp - 0x50]
// 00500785  83ec50               sub esp, 0x50
// 00500788  6aff                 push -1
// 0050078a  681cb27c00           push 0x7cb21c
// 0050078f  64a100000000         mov eax, dword ptr fs:[0]
// 00500795  50                   push eax
// 00500796  64892500000000       mov dword ptr fs:[0], esp
// 0050079d  83ec54               sub esp, 0x54
// 005007a0  53                   push ebx
// 005007a1  56                   push esi
// 005007a2  57                   push edi
// 005007a3  8965f0               mov dword ptr [ebp - 0x10], esp
// 005007a6  8bf1                 mov esi, ecx
// 005007a8  33ff                 xor edi, edi
// 005007aa  897dfc               mov dword ptr [ebp - 4], edi
// 005007ad  8d4db0               lea ecx, [ebp - 0x50]
// 005007b0  c645fc01             mov byte ptr [ebp - 4], 1
// 005007b4  ff1560248000         call dword ptr [0x802460]
// 005007ba  8d45b0               lea eax, [ebp - 0x50]
// 005007bd  50                   push eax
// 005007be  8d4d58               lea ecx, [ebp + 0x58]
// 005007c1  51                   push ecx
// 005007c2  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 005007c5  8d5560               lea edx, [ebp + 0x60]
// 005007c8  52                   push edx
// 005007c9  c645fc02             mov byte ptr [ebp - 4], 2
// 005007cd  e89e1e0600           call 0x562670
// 005007d2  837d5801             cmp dword ptr [ebp + 0x58], 1
// 005007d6  7435                 je 0x50080d
// 005007d8  8d4db0               lea ecx, [ebp - 0x50]
// 005007db  c645fc01             mov byte ptr [ebp - 4], 1
// 005007df  ff1568248000         call dword ptr [0x802468]

struct String
{
    unsigned char storage[28];
    String();
    ~String();
};

struct Value
{
    void* object;
    void* owner;
    ~Value();
};

struct Reader
{
    void read(Value*, Reader**, String*);
};

struct HeadBuilder
{
    void build(Reader*, int, Value);
};

void HeadBuilder::build(Reader* reader, int unused, Value value)
{
    String text;
    reader->read(&value, &reader, &text);
    if (reader == reinterpret_cast<Reader*>(1))
        return;
}
