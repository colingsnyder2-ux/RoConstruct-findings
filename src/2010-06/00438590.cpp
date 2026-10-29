// roc 2010-06 00438590  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00438590
//
// 00438590  64a100000000         mov eax, dword ptr fs:[0]
// 00438596  6aff                 push -1
// 00438598  6888289800           push 0x982888
// 0043859d  50                   push eax
// 0043859e  64892500000000       mov dword ptr fs:[0], esp
// 004385a5  56                   push esi
// 004385a6  8bf1                 mov esi, ecx
// 004385a8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004385ac  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004385b0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004385b4  8906                 mov dword ptr [esi], eax
// 004385b6  8d442420             lea eax, [esp + 0x20]
// 004385ba  894e04               mov dword ptr [esi + 4], ecx
// 004385bd  8d4e0c               lea ecx, [esi + 0xc]
// 004385c0  50                   push eax
// 004385c1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004385c9  895608               mov dword ptr [esi + 8], edx
// 004385cc  ff150ca49e00         call dword ptr [0x9ea40c]
// 004385d2  8d4c2420             lea ecx, [esp + 0x20]
// 004385d6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004385de  ff1500a49e00         call dword ptr [0x9ea400]
// 004385e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004385e8  8bc6                 mov eax, esi
// 004385ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004385f1  5e                   pop esi
// 004385f2  83c40c               add esp, 0xc
// 004385f5  c22800               ret 0x28
// copied from an identical function in another client (function ??0Node@@QAE@PAX00UString@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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