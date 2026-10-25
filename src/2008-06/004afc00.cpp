// from server: 100% by tester
// roc 2008-06 004afc00  unit: RBX::JointsService  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004afc00
//
// 004afc00  6aff                 push -1
// 004afc02  68c8d37b00           push 0x7bd3c8
// 004afc07  64a100000000         mov eax, dword ptr fs:[0]
// 004afc0d  50                   push eax
// 004afc0e  64892500000000       mov dword ptr fs:[0], esp
// 004afc15  51                   push ecx
// 004afc16  56                   push esi
// 004afc17  8bf1                 mov esi, ecx
// 004afc19  89742404             mov dword ptr [esp + 4], esi
// 004afc1d  8d8e38010000         lea ecx, [esi + 0x138]
// 004afc23  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004afc2b  e890d61200           call 0x5dd2c0
// 004afc30  8bce                 mov ecx, esi
// 004afc32  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004afc3a  e801a90a00           call 0x55a540
// 004afc3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004afc43  5e                   pop esi
// 004afc44  64890d00000000       mov dword ptr fs:[0], ecx
// 004afc4b  83c410               add esp, 0x10
// 004afc4e  c3                   ret 

struct Base {
    char data[0x138];
    ~Base();
};

struct Member {
    ~Member();
};

struct ImageKeyButton : Base {
    Member member;
    ~ImageKeyButton();
};

ImageKeyButton::~ImageKeyButton()
{
}
