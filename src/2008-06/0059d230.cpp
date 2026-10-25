// from server: 100% by king_originala
// roc 2008-06 0059d230  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d230
//
// 0059d230  6aff                 push -1
// 0059d232  68c8267d00           push 0x7d26c8
// 0059d237  64a100000000         mov eax, dword ptr fs:[0]
// 0059d23d  50                   push eax
// 0059d23e  64892500000000       mov dword ptr fs:[0], esp
// 0059d245  51                   push ecx
// 0059d246  837c241800           cmp dword ptr [esp + 0x18], 0
// 0059d24b  56                   push esi
// 0059d24c  8bf1                 mov esi, ecx
// 0059d24e  89742404             mov dword ptr [esp + 4], esi
// 0059d252  740a                 je 0x59d25e
// 0059d254  c78634010000ac0f8300 mov dword ptr [esi + 0x134], 0x830fac
// 0059d25e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059d262  6a00                 push 0
// 0059d264  50                   push eax
// 0059d265  e8b6bdffff           call 0x599020
// 0059d26a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059d272  e879f5ffff           call 0x59c7f0
// 0059d277  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0059d27d  89461c               mov dword ptr [esi + 0x1c], eax
// 0059d280  c7065c308300         mov dword ptr [esi], 0x83305c
// 0059d286  c7461050308300       mov dword ptr [esi + 0x10], 0x833050
// 0059d28d  c7461448308300       mov dword ptr [esi + 0x14], 0x833048
// 0059d294  c7462040308300       mov dword ptr [esi + 0x20], 0x833040
// 0059d29b  c7462430308300       mov dword ptr [esi + 0x24], 0x833030
// 0059d2a2  c7464420308300       mov dword ptr [esi + 0x44], 0x833020
// 0059d2a9  c7466410308300       mov dword ptr [esi + 0x64], 0x833010
// 0059d2b0  c7868400000000308300 mov dword ptr [esi + 0x84], 0x833000
// 0059d2ba  c786a4000000f02f8300 mov dword ptr [esi + 0xa4], 0x832ff0
// 0059d2c4  c786c4000000e02f8300 mov dword ptr [esi + 0xc4], 0x832fe0
// 0059d2ce  c78630010000d42f8300 mov dword ptr [esi + 0x130], 0x832fd4
// 0059d2d8  8b5104               mov edx, dword ptr [ecx + 4]
// 0059d2db  c7843234010000c82f8300 mov dword ptr [edx + esi + 0x134], 0x832fc8
// 0059d2e6  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0059d2ec  8b4808               mov ecx, dword ptr [eax + 8]
// 0059d2ef  c7843134010000c02f8300 mov dword ptr [ecx + esi + 0x134], 0x832fc0
// 0059d2fa  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059d2fe  8bc6                 mov eax, esi
// 0059d300  5e                   pop esi
// 0059d301  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d308  83c410               add esp, 0x10
// 0059d30b  c20800               ret 8

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
