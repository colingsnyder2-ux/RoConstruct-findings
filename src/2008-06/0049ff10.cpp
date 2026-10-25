// from server: 100% by king_originala
// roc 2008-06 0049ff10  unit: RBX::Network::Client  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ff10
//
// 0049ff10  6aff                 push -1
// 0049ff12  6848787c00           push 0x7c7848
// 0049ff17  64a100000000         mov eax, dword ptr fs:[0]
// 0049ff1d  50                   push eax
// 0049ff1e  64892500000000       mov dword ptr fs:[0], esp
// 0049ff25  51                   push ecx
// 0049ff26  56                   push esi
// 0049ff27  8bf1                 mov esi, ecx
// 0049ff29  89742404             mov dword ptr [esp + 4], esi
// 0049ff2d  e8beefffff           call 0x49eef0
// 0049ff32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049ff3a  e8f1ebffff           call 0x49eb30
// 0049ff3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049ff43  89461c               mov dword ptr [esi + 0x1c], eax
// 0049ff46  c7066c308200         mov dword ptr [esi], 0x82306c
// 0049ff4c  c746105c308200       mov dword ptr [esi + 0x10], 0x82305c
// 0049ff53  c7461454308200       mov dword ptr [esi + 0x14], 0x823054
// 0049ff5a  c746204c308200       mov dword ptr [esi + 0x20], 0x82304c
// 0049ff61  c746243c308200       mov dword ptr [esi + 0x24], 0x82303c
// 0049ff68  c746442c308200       mov dword ptr [esi + 0x44], 0x82302c
// 0049ff6f  c746641c308200       mov dword ptr [esi + 0x64], 0x82301c
// 0049ff76  c786840000000c308200 mov dword ptr [esi + 0x84], 0x82300c
// 0049ff80  c786a4000000fc2f8200 mov dword ptr [esi + 0xa4], 0x822ffc
// 0049ff8a  c786c4000000ec2f8200 mov dword ptr [esi + 0xc4], 0x822fec
// 0049ff94  c78630010000bc2f8200 mov dword ptr [esi + 0x130], 0x822fbc
// 0049ff9e  c78634010000b02f8200 mov dword ptr [esi + 0x134], 0x822fb0
// 0049ffa8  8bc6                 mov eax, esi
// 0049ffaa  5e                   pop esi
// 0049ffab  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ffb2  83c410               add esp, 0x10
// 0049ffb5  c3                   ret 

unsigned __cdecl getSettings();

extern unsigned table00[];
extern unsigned table10[];
extern unsigned table14[];
extern unsigned table20[];
extern unsigned table24[];
extern unsigned table44[];
extern unsigned table64[];
extern unsigned table84[];
extern unsigned tableA4[];
extern unsigned tableC4[];
extern unsigned table130[];
extern unsigned table134[];

struct Base
{
    unsigned data[0x138 / 4];

    Base();
    ~Base();
};

struct Client : Base
{
    Client();
};

Client::Client()
    : Base()
{
    data[0x1c / 4] = getSettings();
    data[0x00 / 4] = reinterpret_cast<unsigned>(table00);
    data[0x10 / 4] = reinterpret_cast<unsigned>(table10);
    data[0x14 / 4] = reinterpret_cast<unsigned>(table14);
    data[0x20 / 4] = reinterpret_cast<unsigned>(table20);
    data[0x24 / 4] = reinterpret_cast<unsigned>(table24);
    data[0x44 / 4] = reinterpret_cast<unsigned>(table44);
    data[0x64 / 4] = reinterpret_cast<unsigned>(table64);
    data[0x84 / 4] = reinterpret_cast<unsigned>(table84);
    data[0xa4 / 4] = reinterpret_cast<unsigned>(tableA4);
    data[0xc4 / 4] = reinterpret_cast<unsigned>(tableC4);
    data[0x130 / 4] = reinterpret_cast<unsigned>(table130);
    data[0x134 / 4] = reinterpret_cast<unsigned>(table134);
}
