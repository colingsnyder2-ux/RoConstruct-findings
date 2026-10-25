// from server: 100% by king_originala
// roc 2008-06 00458c80  unit: CRobloxReportPaneView  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458c80
//
// 00458c80  6aff                 push -1
// 00458c82  6888277c00           push 0x7c2788
// 00458c87  64a100000000         mov eax, dword ptr fs:[0]
// 00458c8d  50                   push eax
// 00458c8e  64892500000000       mov dword ptr fs:[0], esp
// 00458c95  51                   push ecx
// 00458c96  56                   push esi
// 00458c97  8bf1                 mov esi, ecx
// 00458c99  57                   push edi
// 00458c9a  89742408             mov dword ptr [esp + 8], esi
// 00458c9e  e89dedffff           call 0x457a40
// 00458ca3  8dbed4030000         lea edi, [esi + 0x3d4]
// 00458ca9  8bcf                 mov ecx, edi
// 00458cab  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00458cb3  e898d0faff           call 0x405d50
// 00458cb8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00458cbc  c70738908100         mov dword ptr [edi], 0x819038
// 00458cc2  c7067c8e8100         mov dword ptr [esi], 0x818e7c
// 00458cc8  c78678030000648e8100 mov dword ptr [esi + 0x378], 0x818e64
// 00458cd2  c7869c030000508e8100 mov dword ptr [esi + 0x39c], 0x818e50
// 00458cdc  5f                   pop edi
// 00458cdd  8bc6                 mov eax, esi
// 00458cdf  5e                   pop esi
// 00458ce0  64890d00000000       mov dword ptr fs:[0], ecx
// 00458ce7  83c410               add esp, 0x10
// 00458cea  c3                   ret 

struct Base {
    char data[0x374];
    Base();
    virtual ~Base();
};

struct ListenerA {
    char data[0x20];
    ListenerA();
    virtual ~ListenerA();
};

struct ListenerB {
    char data[0x20];
    ListenerB();
    virtual ~ListenerB();
};

struct View : Base, ListenerA, ListenerB {
    char data[0x14];
    View();
    virtual ~View();
};

struct MemberBase {
    MemberBase();
    virtual ~MemberBase();
};

struct Member : MemberBase {
    Member();
    virtual ~Member();
};

inline Member::Member() : MemberBase()
{
}

struct MemberHolder {
    Member member;
};

struct S : View, MemberHolder {
    S();
    virtual ~S();
};

S::S() : View(), MemberHolder()
{
}
