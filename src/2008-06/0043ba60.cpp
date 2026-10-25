// from server: 100% by king_originala
// roc 2008-06 0043ba60  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043ba60
//
// 0043ba60  64a100000000         mov eax, dword ptr fs:[0]
// 0043ba66  6aff                 push -1
// 0043ba68  6888067c00           push 0x7c0688
// 0043ba6d  50                   push eax
// 0043ba6e  64892500000000       mov dword ptr fs:[0], esp
// 0043ba75  56                   push esi
// 0043ba76  8bf1                 mov esi, ecx
// 0043ba78  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043ba7c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043ba80  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0043ba84  8906                 mov dword ptr [esi], eax
// 0043ba86  8d442420             lea eax, [esp + 0x20]
// 0043ba8a  894e04               mov dword ptr [esi + 4], ecx
// 0043ba8d  8d4e0c               lea ecx, [esi + 0xc]
// 0043ba90  50                   push eax
// 0043ba91  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0043ba99  895608               mov dword ptr [esi + 8], edx
// 0043ba9c  ff155c248000         call dword ptr [0x80245c]
// 0043baa2  8d4c2420             lea ecx, [esp + 0x20]
// 0043baa6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0043baae  ff1568248000         call dword ptr [0x802468]
// 0043bab4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043bab8  8bc6                 mov eax, esi
// 0043baba  64890d00000000       mov dword ptr fs:[0], ecx
// 0043bac1  5e                   pop esi
// 0043bac2  83c40c               add esp, 0xc
// 0043bac5  c22800               ret 0x28

extern void (__thiscall *copyString)(void*, const void*);
extern void (__thiscall *destroyString)(void*);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

__forceinline String::String(const String& other) {
    copyString(this, &other);
}

__forceinline String::~String() {
    destroyString(this);
}

struct Node {
    void* first;
    void* second;
    void* third;
    String value;

    Node(void*, void*, void*, String);
};

Node::Node(void* a, void* b, void* c, String s)
    : first(a), second(b), third(c), value(s) {
}
