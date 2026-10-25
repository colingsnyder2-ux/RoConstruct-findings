// from server: 100% by king_originala
// roc 2008-06 004a0990  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0990
//
// 004a0990  6aff                 push -1
// 004a0992  6861797c00           push 0x7c7961
// 004a0997  64a100000000         mov eax, dword ptr fs:[0]
// 004a099d  50                   push eax
// 004a099e  64892500000000       mov dword ptr fs:[0], esp
// 004a09a5  83ec20               sub esp, 0x20
// 004a09a8  56                   push esi
// 004a09a9  8bf1                 mov esi, ecx
// 004a09ab  89742404             mov dword ptr [esp + 4], esi
// 004a09af  e85cf5ffff           call 0x49ff10
// 004a09b4  68888c9300           push 0x938c88
// 004a09b9  8d4c240c             lea ecx, [esp + 0xc]
// 004a09bd  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004a09c5  c7064c2f8200         mov dword ptr [esi], 0x822f4c
// 004a09cb  c74610402f8200       mov dword ptr [esi + 0x10], 0x822f40
// 004a09d2  c74614382f8200       mov dword ptr [esi + 0x14], 0x822f38
// 004a09d9  c74620302f8200       mov dword ptr [esi + 0x20], 0x822f30
// 004a09e0  c74624202f8200       mov dword ptr [esi + 0x24], 0x822f20
// 004a09e7  c74644102f8200       mov dword ptr [esi + 0x44], 0x822f10
// 004a09ee  c74664002f8200       mov dword ptr [esi + 0x64], 0x822f00
// 004a09f5  c78684000000f02e8200 mov dword ptr [esi + 0x84], 0x822ef0
// 004a09ff  c786a4000000e02e8200 mov dword ptr [esi + 0xa4], 0x822ee0
// 004a0a09  c786c4000000d02e8200 mov dword ptr [esi + 0xc4], 0x822ed0
// 004a0a13  c78630010000a02e8200 mov dword ptr [esi + 0x130], 0x822ea0
// 004a0a1d  c78634010000942e8200 mov dword ptr [esi + 0x134], 0x822e94
// 004a0a27  c78644010000882e8200 mov dword ptr [esi + 0x144], 0x822e88
// 004a0a31  ff1558248000         call dword ptr [0x802458]
// 004a0a37  8d442408             lea eax, [esp + 8]
// 004a0a3b  50                   push eax
// 004a0a3c  8bce                 mov ecx, esi
// 004a0a3e  c644243001           mov byte ptr [esp + 0x30], 1
// 004a0a43  e848a50b00           call 0x55af90
// 004a0a48  8d4c2408             lea ecx, [esp + 8]
// 004a0a4c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004a0a51  ff1568248000         call dword ptr [0x802468]
// 004a0a57  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a0a5b  8bc6                 mov eax, esi
// 004a0a5d  5e                   pop esi
// 004a0a5e  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0a65  83c42c               add esp, 0x2c
// 004a0a68  c3                   ret 

typedef unsigned long DWORD;

extern void (__thiscall *stringConstruct)(void *, const char *);
extern void (__thiscall *stringDestroy)(void *);

struct String
{
    char storage[28];
    __forceinline String(const char *);
    __forceinline ~String();
};

__forceinline String::String(const char *text)
{
    stringConstruct(this, text);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Base
{
    DWORD words[82];
    Base();
    ~Base();
    void setName(const String &);
};

struct S : Base
{
    S();
};

S::S()
{
    words[0] = 0x00822f4c;
    words[4] = 0x00822f40;
    words[5] = 0x00822f38;
    words[8] = 0x00822f30;
    words[9] = 0x00822f20;
    words[17] = 0x00822f10;
    words[25] = 0x00822f00;
    words[33] = 0x00822ef0;
    words[41] = 0x00822ee0;
    words[49] = 0x00822ed0;
    words[76] = 0x00822ea0;
    words[77] = 0x00822e94;
    words[81] = 0x00822e88;

    String name("NetworkClient");
    setName(name);
}
