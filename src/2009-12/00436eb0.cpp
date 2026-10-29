// roc 2009-12 00436eb0  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00436eb0
//
// 00436eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00436eb6  6aff                 push -1
// 00436eb8  6838a19200           push 0x92a138
// 00436ebd  50                   push eax
// 00436ebe  64892500000000       mov dword ptr fs:[0], esp
// 00436ec5  56                   push esi
// 00436ec6  8bf1                 mov esi, ecx
// 00436ec8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00436ecc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00436ed0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00436ed4  8906                 mov dword ptr [esi], eax
// 00436ed6  8d442420             lea eax, [esp + 0x20]
// 00436eda  894e04               mov dword ptr [esi + 4], ecx
// 00436edd  8d4e0c               lea ecx, [esi + 0xc]
// 00436ee0  50                   push eax
// 00436ee1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00436ee9  895608               mov dword ptr [esi + 8], edx
// 00436eec  ff15f0b69800         call dword ptr [0x98b6f0]
// 00436ef2  8d4c2420             lea ecx, [esp + 0x20]
// 00436ef6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00436efe  ff15e4b69800         call dword ptr [0x98b6e4]
// 00436f04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00436f08  8bc6                 mov eax, esi
// 00436f0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00436f11  5e                   pop esi
// 00436f12  83c40c               add esp, 0xc
// 00436f15  c22800               ret 0x28
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