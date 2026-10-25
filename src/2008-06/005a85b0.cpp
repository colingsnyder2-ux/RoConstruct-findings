// from server: 100% by king_originala
// roc 2008-06 005a85b0  unit: RBX::Log  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a85b0
//
// 005a85b0  64a100000000         mov eax, dword ptr fs:[0]
// 005a85b6  6aff                 push -1
// 005a85b8  6809e77c00           push 0x7ce709
// 005a85bd  50                   push eax
// 005a85be  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a85c2  64892500000000       mov dword ptr fs:[0], esp
// 005a85c9  8b08                 mov ecx, dword ptr [eax]
// 005a85cb  8b4104               mov eax, dword ptr [ecx + 4]
// 005a85ce  83c004               add eax, 4
// 005a85d1  83ec1c               sub esp, 0x1c
// 005a85d4  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005a85d8  7205                 jb 0x5a85df
// 005a85da  8b5004               mov edx, dword ptr [eax + 4]
// 005a85dd  eb03                 jmp 0x5a85e2
// 005a85df  8d5004               lea edx, [eax + 4]
// 005a85e2  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a85e5  8b4104               mov eax, dword ptr [ecx + 4]
// 005a85e8  83c004               add eax, 4
// 005a85eb  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005a85ef  7205                 jb 0x5a85f6
// 005a85f1  8b4004               mov eax, dword ptr [eax + 4]
// 005a85f4  eb03                 jmp 0x5a85f9
// 005a85f6  83c004               add eax, 4
// 005a85f9  52                   push edx
// 005a85fa  50                   push eax
// 005a85fb  8d542408             lea edx, [esp + 8]
// 005a85ff  6878438300           push 0x834378
// 005a8604  52                   push edx
// 005a8605  e80615f6ff           call 0x509b10
// 005a860a  83c410               add esp, 0x10
// 005a860d  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005a8612  8b442404             mov eax, dword ptr [esp + 4]
// 005a8616  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a861e  7304                 jae 0x5a8624
// 005a8620  8d442404             lea eax, [esp + 4]
// 005a8624  50                   push eax
// 005a8625  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a8629  50                   push eax
// 005a862a  e8519c0600           call 0x612280
// 005a862f  83c408               add esp, 8
// 005a8632  8d0c24               lea ecx, [esp]
// 005a8635  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a863d  ff1568248000         call dword ptr [0x802468]
// 005a8643  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a8647  b801000000           mov eax, 1
// 005a864c  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8653  83c428               add esp, 0x28
// 005a8656  c3                   ret 

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    ~String();
};

extern void (__thiscall *destroyString)(String*);

inline String::~String()
{
    destroyString(this);
}

struct NamedValue {
    unsigned int reserved;
    String name;
};

struct Node {
    unsigned int reserved;
    NamedValue* value;
    Node* next;
};

extern String __cdecl format(const char* pattern, ...);
extern void __cdecl writeString(void* destination, const char* text);

int __cdecl convert(Node** source, void* destination)
{
    Node* node = *source;
    String* first = &node->value->name;
    const char* firstText =
        first->capacity >= 16 ? first->pointer : first->buffer;

    String* second = &node->next->value->name;
    const char* secondText =
        second->capacity >= 16 ? second->pointer : second->buffer;

    String text = format("Enum.%s.%s", secondText, firstText);
    writeString(destination,
                text.capacity >= 16 ? text.pointer : text.buffer);
    return 1;
}
