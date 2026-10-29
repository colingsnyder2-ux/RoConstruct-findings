// roc 2012-06 004592c0  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004592c0
//
// 004592c0  64a100000000         mov eax, dword ptr fs:[0]
// 004592c6  6aff                 push -1
// 004592c8  6888f1a900           push 0xa9f188
// 004592cd  50                   push eax
// 004592ce  64892500000000       mov dword ptr fs:[0], esp
// 004592d5  56                   push esi
// 004592d6  8bf1                 mov esi, ecx
// 004592d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004592dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004592e0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004592e4  8906                 mov dword ptr [esi], eax
// 004592e6  8d442420             lea eax, [esp + 0x20]
// 004592ea  894e04               mov dword ptr [esi + 4], ecx
// 004592ed  8d4e0c               lea ecx, [esi + 0xc]
// 004592f0  50                   push eax
// 004592f1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004592f9  895608               mov dword ptr [esi + 8], edx
// 004592fc  ff154426b200         call dword ptr [0xb22644]
// 00459302  8d4c2420             lea ecx, [esp + 0x20]
// 00459306  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0045930e  ff153c26b200         call dword ptr [0xb2263c]
// 00459314  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00459318  8bc6                 mov eax, esi
// 0045931a  64890d00000000       mov dword ptr fs:[0], ecx
// 00459321  5e                   pop esi
// 00459322  83c40c               add esp, 0xc
// 00459325  c22800               ret 0x28
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