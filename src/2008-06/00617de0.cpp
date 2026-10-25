// from server: 100% by king_originala
// roc 2008-06 00617de0  unit: RBX::NullTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617de0
//
// 00617de0  6aff                 push -1
// 00617de2  68f8a97d00           push 0x7da9f8
// 00617de7  64a100000000         mov eax, dword ptr fs:[0]
// 00617ded  50                   push eax
// 00617dee  64892500000000       mov dword ptr fs:[0], esp
// 00617df5  51                   push ecx
// 00617df6  56                   push esi
// 00617df7  8bf1                 mov esi, ecx
// 00617df9  89742404             mov dword ptr [esp + 4], esi
// 00617dfd  c706443c8400         mov dword ptr [esi], 0x843c44
// 00617e03  c74604283c8400       mov dword ptr [esi + 4], 0x843c28
// 00617e0a  8d4e1c               lea ecx, [esi + 0x1c]
// 00617e0d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00617e15  ff1568248000         call dword ptr [0x802468]
// 00617e1b  8bce                 mov ecx, esi
// 00617e1d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00617e25  e856d9ffff           call 0x615780
// 00617e2a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00617e2e  5e                   pop esi
// 00617e2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00617e36  83c410               add esp, 0x10
// 00617e39  c3                   ret 

extern void (__thiscall *destroy_string)(void *);

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    char data[20];
    virtual ~Base();
};

struct S : Base {
    char string_data[28];
    virtual ~S();
};

S::~S()
{
    destroy_string(string_data);
}
