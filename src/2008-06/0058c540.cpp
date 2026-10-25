// from server: 100% by king_originala
// roc 2008-06 0058c540  unit: RBX::ChangeHistoryService  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058c540
//
// 0058c540  64a100000000         mov eax, dword ptr fs:[0]
// 0058c546  6aff                 push -1
// 0058c548  6809b77d00           push 0x7db709
// 0058c54d  50                   push eax
// 0058c54e  64892500000000       mov dword ptr fs:[0], esp
// 0058c555  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 0058c55a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058c55e  c744240800000000     mov dword ptr [esp + 8], 0
// 0058c566  7304                 jae 0x58c56c
// 0058c568  8d442414             lea eax, [esp + 0x14]
// 0058c56c  50                   push eax
// 0058c56d  e84efdffff           call 0x58c2c0
// 0058c572  8d4c2410             lea ecx, [esp + 0x10]
// 0058c576  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0058c57e  ff1568248000         call dword ptr [0x802468]
// 0058c584  8b0c24               mov ecx, dword ptr [esp]
// 0058c587  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c58e  83c40c               add esp, 0xc
// 0058c591  c21c00               ret 0x1c

struct String;
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;

    ~String();
    const char *c_str() const;
};

inline String::~String()
{
    destroyString(this);
}

inline const char *String::c_str() const
{
    const char *result = storage.pointer;
    if (capacity < 16)
        result = storage.buffer;
    return result;
}

struct S {
    void forward(const char *);
    void f(String);
};

void S::f(String text)
{
    forward(text.c_str());
}
