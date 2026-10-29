// roc 2009-06 00435b30  unit: MVCXTPPropertyGridItem::?$XItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00435b30
//
// 00435b30  64a100000000         mov eax, dword ptr fs:[0]
// 00435b36  6aff                 push -1
// 00435b38  6898fb8400           push 0x84fb98
// 00435b3d  50                   push eax
// 00435b3e  64892500000000       mov dword ptr fs:[0], esp
// 00435b45  56                   push esi
// 00435b46  8bf1                 mov esi, ecx
// 00435b48  8b442414             mov eax, dword ptr [esp + 0x14]
// 00435b4c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00435b50  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00435b54  8906                 mov dword ptr [esi], eax
// 00435b56  8d442420             lea eax, [esp + 0x20]
// 00435b5a  894e04               mov dword ptr [esi + 4], ecx
// 00435b5d  8d4e0c               lea ecx, [esi + 0xc]
// 00435b60  50                   push eax
// 00435b61  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00435b69  895608               mov dword ptr [esi + 8], edx
// 00435b6c  ff15b8e48900         call dword ptr [0x89e4b8]
// 00435b72  8d4c2420             lea ecx, [esp + 0x20]
// 00435b76  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00435b7e  ff15c4e48900         call dword ptr [0x89e4c4]
// 00435b84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00435b88  8bc6                 mov eax, esi
// 00435b8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00435b91  5e                   pop esi
// 00435b92  83c40c               add esp, 0xc
// 00435b95  c22800               ret 0x28
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