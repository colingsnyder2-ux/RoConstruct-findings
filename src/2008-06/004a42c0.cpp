// from server: 100% by king_originala
// roc 2008-06 004a42c0  unit: RBX::Network::Server  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a42c0
//
// 004a42c0  6aff                 push -1
// 004a42c2  68c87d7c00           push 0x7c7dc8
// 004a42c7  64a100000000         mov eax, dword ptr fs:[0]
// 004a42cd  50                   push eax
// 004a42ce  64892500000000       mov dword ptr fs:[0], esp
// 004a42d5  51                   push ecx
// 004a42d6  56                   push esi
// 004a42d7  8bf1                 mov esi, ecx
// 004a42d9  89742404             mov dword ptr [esp + 4], esi
// 004a42dd  e80ed3ffff           call 0x4a15f0
// 004a42e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a42ea  e8b1a8ffff           call 0x49eba0
// 004a42ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a42f3  89461c               mov dword ptr [esi + 0x1c], eax
// 004a42f6  c70684398200         mov dword ptr [esi], 0x823984
// 004a42fc  c7461078398200       mov dword ptr [esi + 0x10], 0x823978
// 004a4303  c7461470398200       mov dword ptr [esi + 0x14], 0x823970
// 004a430a  c7462068398200       mov dword ptr [esi + 0x20], 0x823968
// 004a4311  c7462458398200       mov dword ptr [esi + 0x24], 0x823958
// 004a4318  c7464448398200       mov dword ptr [esi + 0x44], 0x823948
// 004a431f  c7466438398200       mov dword ptr [esi + 0x64], 0x823938
// 004a4326  c7868400000028398200 mov dword ptr [esi + 0x84], 0x823928
// 004a4330  c786a400000018398200 mov dword ptr [esi + 0xa4], 0x823918
// 004a433a  c786c400000008398200 mov dword ptr [esi + 0xc4], 0x823908
// 004a4344  c78630010000d8388200 mov dword ptr [esi + 0x130], 0x8238d8
// 004a434e  c78634010000cc388200 mov dword ptr [esi + 0x134], 0x8238cc
// 004a4358  8bc6                 mov eax, esi
// 004a435a  5e                   pop esi
// 004a435b  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4362  83c410               add esp, 0x10
// 004a4365  c3                   ret 

void* __cdecl getSettings();

struct Base {
    unsigned long words[78];
    Base();
    ~Base();
};

struct Server : Base {
    Server();
};

Server::Server() : Base()
{
    words[7] = reinterpret_cast<unsigned long>(getSettings());
    words[0] = 0x00823984;
    words[4] = 0x00823978;
    words[5] = 0x00823970;
    words[8] = 0x00823968;
    words[9] = 0x00823958;
    words[17] = 0x00823948;
    words[25] = 0x00823938;
    words[33] = 0x00823928;
    words[41] = 0x00823918;
    words[49] = 0x00823908;
    words[76] = 0x008238D8;
    words[77] = 0x008238CC;
}
