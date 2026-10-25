// from server: 100% by king_originala
// roc 2008-06 00656f60  unit: RBX::ArrowPanel  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656f60
//
// 00656f60  6aff                 push -1
// 00656f62  68fdbb7d00           push 0x7dbbfd
// 00656f67  64a100000000         mov eax, dword ptr fs:[0]
// 00656f6d  50                   push eax
// 00656f6e  64892500000000       mov dword ptr fs:[0], esp
// 00656f75  83ec0c               sub esp, 0xc
// 00656f78  c744240400000000     mov dword ptr [esp + 4], 0
// 00656f80  6880010000           push 0x180
// 00656f85  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00656f8d  c644240400           mov byte ptr [esp + 4], 0
// 00656f92  ff15b0288000         call dword ptr [0x8028b0]
// 00656f98  83c404               add esp, 4
// 00656f9b  89442408             mov dword ptr [esp + 8], eax
// 00656f9f  c644241402           mov byte ptr [esp + 0x14], 2
// 00656fa4  85c0                 test eax, eax
// 00656fa6  7413                 je 0x656fbb
// 00656fa8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00656fac  8d4c2424             lea ecx, [esp + 0x24]
// 00656fb0  51                   push ecx
// 00656fb1  52                   push edx
// 00656fb2  8bc8                 mov ecx, eax
// 00656fb4  e80782ffff           call 0x64f1c0
// 00656fb9  eb02                 jmp 0x656fbd
// 00656fbb  33c0                 xor eax, eax
// 00656fbd  8b0c24               mov ecx, dword ptr [esp]
// 00656fc0  56                   push esi
// 00656fc1  8b742420             mov esi, dword ptr [esp + 0x20]
// 00656fc5  51                   push ecx
// 00656fc6  50                   push eax
// 00656fc7  8bce                 mov ecx, esi
// 00656fc9  c644242001           mov byte ptr [esp + 0x20], 1
// 00656fce  e82dfeffff           call 0x656e00
// 00656fd3  8d4c2428             lea ecx, [esp + 0x28]
// 00656fd7  c744240801000000     mov dword ptr [esp + 8], 1
// 00656fdf  c644241800           mov byte ptr [esp + 0x18], 0
// 00656fe4  ff1568248000         call dword ptr [0x802468]
// 00656fea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00656fee  8bc6                 mov eax, esi
// 00656ff0  5e                   pop esi
// 00656ff1  64890d00000000       mov dword ptr fs:[0], ecx
// 00656ff8  83c418               add esp, 0x18
// 00656ffb  c3                   ret 

extern "C" void* (__cdecl *allocate)(unsigned int);
extern "C" void __cdecl free(void*);

struct String {
    char storage[28];
    ~String();
};

extern void (__thiscall *destroyString)(String*);

inline String::~String()
{
    destroyString(this);
}

struct Deleter {
    unsigned char unused;
    Deleter();
};

inline Deleter::Deleter() : unused(0)
{
}

struct Node {
    char storage[384];

    Node(void*, const String&);
    static void* operator new(unsigned int) throw();
    static void operator delete(void*);
};

inline void* Node::operator new(unsigned int size) throw()
{
    return allocate(size);
}

inline void Node::operator delete(void* p)
{
    free(p);
}

struct Pointer {
    Node* object;
    void* control;

    Pointer(Node*, Deleter);
    ~Pointer();
};

Pointer __cdecl makePointer(void* owner, String name)
{
    Deleter deleter;
    return Pointer(new Node(owner, name), deleter);
}
