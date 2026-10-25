// from server: 100% by king_originala
// roc 2008-06 00601c50  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601c50
//
// 00601c50  6aff                 push -1
// 00601c52  6888827d00           push 0x7d8288
// 00601c57  64a100000000         mov eax, dword ptr fs:[0]
// 00601c5d  50                   push eax
// 00601c5e  64892500000000       mov dword ptr fs:[0], esp
// 00601c65  51                   push ecx
// 00601c66  56                   push esi
// 00601c67  8bf1                 mov esi, ecx
// 00601c69  89742404             mov dword ptr [esp + 4], esi
// 00601c6d  e8cee8ffff           call 0x600540
// 00601c72  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00601c76  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00601c7a  50                   push eax
// 00601c7b  51                   push ecx
// 00601c7c  8d8e48010000         lea ecx, [esi + 0x148]
// 00601c82  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00601c8a  c7062c228400         mov dword ptr [esi], 0x84222c
// 00601c90  c746101c228400       mov dword ptr [esi + 0x10], 0x84221c
// 00601c97  c7461414228400       mov dword ptr [esi + 0x14], 0x842214
// 00601c9e  c746200c228400       mov dword ptr [esi + 0x20], 0x84220c
// 00601ca5  c74624fc218400       mov dword ptr [esi + 0x24], 0x8421fc
// 00601cac  c74644ec218400       mov dword ptr [esi + 0x44], 0x8421ec
// 00601cb3  c74664dc218400       mov dword ptr [esi + 0x64], 0x8421dc
// 00601cba  c78684000000cc218400 mov dword ptr [esi + 0x84], 0x8421cc
// 00601cc4  c786a4000000bc218400 mov dword ptr [esi + 0xa4], 0x8421bc
// 00601cce  c786c4000000ac218400 mov dword ptr [esi + 0xc4], 0x8421ac
// 00601cd8  c78630010000a4218400 mov dword ptr [esi + 0x130], 0x8421a4
// 00601ce2  e8f9f3ffff           call 0x6010e0
// 00601ce7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00601ceb  8bc6                 mov eax, esi
// 00601ced  5e                   pop esi
// 00601cee  64890d00000000       mov dword ptr fs:[0], ecx
// 00601cf5  83c410               add esp, 0x10
// 00601cf8  c20800               ret 8

struct Base
{
    unsigned long words[82];
    Base();
    ~Base();
};

struct Member
{
    unsigned long storage;
    void initialize(int, int);
};

struct S : Base
{
    Member member;
    S(int, int);
};

S::S(int a, int b)
{
    words[0] = 0x0084222c;
    words[4] = 0x0084221c;
    words[5] = 0x00842214;
    words[8] = 0x0084220c;
    words[9] = 0x008421fc;
    words[17] = 0x008421ec;
    words[25] = 0x008421dc;
    words[33] = 0x008421cc;
    words[41] = 0x008421bc;
    words[49] = 0x008421ac;
    words[76] = 0x008421a4;
    member.initialize(a, b);
}
