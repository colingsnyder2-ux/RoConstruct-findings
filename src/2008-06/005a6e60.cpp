// from server: 91% by king_originala
// roc 2008-06 005a6e60  unit: RBX::Workspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6e60
//
// 005a6e60  6aff                 push -1
// 005a6e62  68a42f7d00           push 0x7d2fa4
// 005a6e67  64a100000000         mov eax, dword ptr fs:[0]
// 005a6e6d  50                   push eax
// 005a6e6e  64892500000000       mov dword ptr fs:[0], esp
// 005a6e75  51                   push ecx
// 005a6e76  56                   push esi
// 005a6e77  57                   push edi
// 005a6e78  8bf9                 mov edi, ecx
// 005a6e7a  897c2408             mov dword ptr [esp + 8], edi
// 005a6e7e  c707b8418300         mov dword ptr [edi], 0x8341b8
// 005a6e84  8d7740               lea esi, [edi + 0x40]
// 005a6e87  6a01                 push 1
// 005a6e89  c744241802000000     mov dword ptr [esp + 0x18], 2
// 005a6e91  e87afeffff           call 0x5a6d10
// 005a6e96  68bc418300           push 0x8341bc
// 005a6e9b  56                   push esi
// 005a6e9c  e8af35eaff           call 0x44a450
// 005a6ea1  83c40c               add esp, 0xc
// 005a6ea4  8bce                 mov ecx, esi
// 005a6ea6  c644241401           mov byte ptr [esp + 0x14], 1
// 005a6eab  ff15d4238000         call dword ptr [0x8023d4]
// 005a6eb1  8d4f24               lea ecx, [edi + 0x24]
// 005a6eb4  c644241400           mov byte ptr [esp + 0x14], 0
// 005a6eb9  ff1568248000         call dword ptr [0x802468]
// 005a6ebf  8d4f04               lea ecx, [edi + 4]
// 005a6ec2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005a6eca  ff1568248000         call dword ptr [0x802468]
// 005a6ed0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a6ed4  5f                   pop edi
// 005a6ed5  5e                   pop esi
// 005a6ed6  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6edd  83c410               add esp, 0x10
// 005a6ee0  c3                   ret 

struct String;
struct FileStream;

extern void (__thiscall *destroyString)(String*);
extern void (__thiscall *destroyFileStream)(FileStream*);

struct String {
    char data[28];
    ~String() { destroyString(this); }
};

struct FileStream {
    ~FileStream() { destroyFileStream(this); }
};

struct S {
    virtual ~S();
    String first;
    char padding[4];
    String second;
    FileStream stream;
};

void __cdecl sub_5a6d10(int);
void __cdecl sub_44a450(FileStream*, const char*);

S::~S() {
    FileStream* p = &stream;
    sub_5a6d10(1);
    sub_44a450(p, "End Log");
}
