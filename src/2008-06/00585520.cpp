// from server: 100% by colin
// roc 2008-06 00585520  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585520
//
// 00585520  6aff                 push -1
// 00585522  6848127d00           push 0x7d1248
// 00585527  64a100000000         mov eax, dword ptr fs:[0]
// 0058552d  50                   push eax
// 0058552e  64892500000000       mov dword ptr fs:[0], esp
// 00585535  51                   push ecx
// 00585536  837c241800           cmp dword ptr [esp + 0x18], 0
// 0058553b  56                   push esi
// 0058553c  8bf1                 mov esi, ecx
// 0058553e  89742404             mov dword ptr [esp + 4], esi
// 00585542  740a                 je 0x58554e
// 00585544  c78634010000ac0f8300 mov dword ptr [esi + 0x134], 0x830fac
// 0058554e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00585552  6a00                 push 0
// 00585554  50                   push eax
// 00585555  e8d6e1ffff           call 0x583730
// 0058555a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00585562  e899fbffff           call 0x585100
// 00585567  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0058556d  89461c               mov dword ptr [esi + 0x1c], eax
// 00585570  c706440f8300         mov dword ptr [esi], 0x830f44
// 00585576  c74610380f8300       mov dword ptr [esi + 0x10], 0x830f38
// 0058557d  c74614300f8300       mov dword ptr [esi + 0x14], 0x830f30
// 00585584  c74620280f8300       mov dword ptr [esi + 0x20], 0x830f28
// 0058558b  c74624180f8300       mov dword ptr [esi + 0x24], 0x830f18
// 00585592  c74644080f8300       mov dword ptr [esi + 0x44], 0x830f08
// 00585599  c74664f80e8300       mov dword ptr [esi + 0x64], 0x830ef8
// 005855a0  c78684000000e80e8300 mov dword ptr [esi + 0x84], 0x830ee8
// 005855aa  c786a4000000d80e8300 mov dword ptr [esi + 0xa4], 0x830ed8
// 005855b4  c786c4000000c80e8300 mov dword ptr [esi + 0xc4], 0x830ec8
// 005855be  c78630010000bc0e8300 mov dword ptr [esi + 0x130], 0x830ebc
// 005855c8  8b5104               mov edx, dword ptr [ecx + 4]
// 005855cb  c7843234010000b00e8300 mov dword ptr [edx + esi + 0x134], 0x830eb0
// 005855d6  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005855dc  8b4808               mov ecx, dword ptr [eax + 8]
// 005855df  c7843134010000a80e8300 mov dword ptr [ecx + esi + 0x134], 0x830ea8
// 005855ea  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005855ee  8bc6                 mov eax, esi
// 005855f0  5e                   pop esi
// 005855f1  64890d00000000       mov dword ptr fs:[0], ecx
// 005855f8  83c410               add esp, 0x10
// 005855fb  c20800               ret 8

unsigned __cdecl getDescriptor();

struct Base
{
    unsigned words[77];
    int* vbtable;

    Base(void* argument, int mode);
    ~Base();
};

struct S : Base
{
    S(void* argument, int initializeVirtualBases);
};

S::S(void* argument, int initializeVirtualBases)
    : Base(initializeVirtualBases
               ? (vbtable = reinterpret_cast<int*>(0x830fac), argument)
               : argument,
           0)
{
    words[7] = getDescriptor();

    int* table = vbtable;
    words[0] = 0x83305c;
    words[4] = 0x833050;
    words[5] = 0x833048;
    words[8] = 0x833040;
    words[9] = 0x833030;
    words[17] = 0x833020;
    words[25] = 0x833010;
    words[33] = 0x833000;
    words[41] = 0x832ff0;
    words[49] = 0x832fe0;
    words[76] = 0x832fd4;

    *reinterpret_cast<unsigned*>(
        reinterpret_cast<char*>(this) + 0x134 + table[1]) = 0x832fc8;
    *reinterpret_cast<unsigned*>(
        reinterpret_cast<char*>(this) + 0x134 + vbtable[2]) = 0x832fc0;
}
