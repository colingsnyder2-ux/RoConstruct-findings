// from server: 100% by king_originala
// roc 2008-06 005ef530  unit: RBX::VDecal::?$FactoryProduct  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef530
//
// 005ef530  6aff                 push -1
// 005ef532  68e8d67b00           push 0x7bd6e8
// 005ef537  64a100000000         mov eax, dword ptr fs:[0]
// 005ef53d  50                   push eax
// 005ef53e  64892500000000       mov dword ptr fs:[0], esp
// 005ef545  51                   push ecx
// 005ef546  56                   push esi
// 005ef547  8bf1                 mov esi, ecx
// 005ef549  89742404             mov dword ptr [esp + 4], esi
// 005ef54d  e88ec2f6ff           call 0x55b7e0
// 005ef552  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ef55a  e8518afaff           call 0x597fb0
// 005ef55f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef563  89461c               mov dword ptr [esi + 0x1c], eax
// 005ef566  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 005ef570  83c8ff               or eax, 0xffffffff
// 005ef573  898634010000         mov dword ptr [esi + 0x134], eax
// 005ef579  898638010000         mov dword ptr [esi + 0x138], eax
// 005ef57f  c7062c078400         mov dword ptr [esi], 0x84072c
// 005ef585  c7461020078400       mov dword ptr [esi + 0x10], 0x840720
// 005ef58c  c7461418078400       mov dword ptr [esi + 0x14], 0x840718
// 005ef593  c7462010078400       mov dword ptr [esi + 0x20], 0x840710
// 005ef59a  c7462400078400       mov dword ptr [esi + 0x24], 0x840700
// 005ef5a1  c74644f0068400       mov dword ptr [esi + 0x44], 0x8406f0
// 005ef5a8  c74664e0068400       mov dword ptr [esi + 0x64], 0x8406e0
// 005ef5af  c78684000000d0068400 mov dword ptr [esi + 0x84], 0x8406d0
// 005ef5b9  c786a4000000c0068400 mov dword ptr [esi + 0xa4], 0x8406c0
// 005ef5c3  c786c4000000b0068400 mov dword ptr [esi + 0xc4], 0x8406b0
// 005ef5cd  c7863001000098068400 mov dword ptr [esi + 0x130], 0x840698
// 005ef5d7  c7864001000005000000 mov dword ptr [esi + 0x140], 5
// 005ef5e1  8bc6                 mov eax, esi
// 005ef5e3  5e                   pop esi
// 005ef5e4  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef5eb  83c410               add esp, 0x10
// 005ef5ee  c3                   ret 

unsigned int __cdecl descriptor();

extern char table0[];
extern char table10[];
extern char table14[];
extern char table20[];
extern char table24[];
extern char table44[];
extern char table64[];
extern char table84[];
extern char tableA4[];
extern char tableC4[];
extern char table130[];

struct Base {
    unsigned int words[0x134 / 4];
    Base();
    ~Base();
};

struct S : Base {
    volatile int first;
    volatile int second;
    volatile int third;
    int mode;

    S();
};

S::S()
{
    words[0x1c / 4] = descriptor();
    third = 0;
    first = -1;
    second = -1;

    words[0x00 / 4] = reinterpret_cast<unsigned int>(table0);
    words[0x10 / 4] = reinterpret_cast<unsigned int>(table10);
    words[0x14 / 4] = reinterpret_cast<unsigned int>(table14);
    words[0x20 / 4] = reinterpret_cast<unsigned int>(table20);
    words[0x24 / 4] = reinterpret_cast<unsigned int>(table24);
    words[0x44 / 4] = reinterpret_cast<unsigned int>(table44);
    words[0x64 / 4] = reinterpret_cast<unsigned int>(table64);
    words[0x84 / 4] = reinterpret_cast<unsigned int>(table84);
    words[0xa4 / 4] = reinterpret_cast<unsigned int>(tableA4);
    words[0xc4 / 4] = reinterpret_cast<unsigned int>(tableC4);
    words[0x130 / 4] = reinterpret_cast<unsigned int>(table130);

    mode = 5;
}
