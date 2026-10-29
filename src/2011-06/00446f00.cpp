// roc 2011-06 00446f00  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00446f00
//
// 00446f00  64a100000000         mov eax, dword ptr fs:[0]
// 00446f06  6aff                 push -1
// 00446f08  6808159d00           push 0x9d1508
// 00446f0d  50                   push eax
// 00446f0e  64892500000000       mov dword ptr fs:[0], esp
// 00446f15  56                   push esi
// 00446f16  8bf1                 mov esi, ecx
// 00446f18  8b442414             mov eax, dword ptr [esp + 0x14]
// 00446f1c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00446f20  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00446f24  8906                 mov dword ptr [esi], eax
// 00446f26  8d442420             lea eax, [esp + 0x20]
// 00446f2a  894e04               mov dword ptr [esi + 4], ecx
// 00446f2d  8d4e0c               lea ecx, [esi + 0xc]
// 00446f30  50                   push eax
// 00446f31  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00446f39  895608               mov dword ptr [esi + 8], edx
// 00446f3c  ff15c804a400         call dword ptr [0xa404c8]
// 00446f42  8d4c2420             lea ecx, [esp + 0x20]
// 00446f46  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00446f4e  ff15d004a400         call dword ptr [0xa404d0]
// 00446f54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00446f58  8bc6                 mov eax, esi
// 00446f5a  64890d00000000       mov dword ptr fs:[0], ecx
// 00446f61  5e                   pop esi
// 00446f62  83c40c               add esp, 0xc
// 00446f65  c22800               ret 0x28
// copied from an identical function in another client (function ??0Node@ns_ROCX00001d@@QAE@PAX00UString@1@@Z)

namespace ns_ROCX00001d {
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
}
