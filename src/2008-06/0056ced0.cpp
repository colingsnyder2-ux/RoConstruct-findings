// from server: 100% by king_originala
// roc 2008-06 0056ced0  unit: G3D::VColor3::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ced0
//
// 0056ced0  64a100000000         mov eax, dword ptr fs:[0]
// 0056ced6  6aff                 push -1
// 0056ced8  681efe7c00           push 0x7cfe1e
// 0056cedd  50                   push eax
// 0056cede  b801000000           mov eax, 1
// 0056cee3  64892500000000       mov dword ptr fs:[0], esp
// 0056ceea  8405304c9700         test byte ptr [0x974c30], al
// 0056cef0  752f                 jne 0x56cf21
// 0056cef2  0905304c9700         or dword ptr [0x974c30], eax
// 0056cef8  6834109300           push 0x931034
// 0056cefd  68c8f68200           push 0x82f6c8
// 0056cf02  b9204c9700           mov ecx, 0x974c20
// 0056cf07  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056cf0f  e87ceeffff           call 0x56bd90
// 0056cf14  68b0d27f00           push 0x7fd2b0
// 0056cf19  e891481300           call 0x6a17af
// 0056cf1e  83c404               add esp, 4
// 0056cf21  8b0c24               mov ecx, dword ptr [esp]
// 0056cf24  b8204c9700           mov eax, 0x974c20
// 0056cf29  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cf30  83c40c               add esp, 0xc
// 0056cf33  c3                   ret 

struct Type
{
    unsigned char data[16];
    Type(const char*, const void*);
    ~Type();
};

const Type& singleton()
{
    static Type instance(
        reinterpret_cast<const char*>(0x0082F6C8),
        reinterpret_cast<const void*>(0x00931034));
    return instance;
}
