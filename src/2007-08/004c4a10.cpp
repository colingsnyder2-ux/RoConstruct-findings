// from server: 100% by colin
// roc 2007-08 004c4a10  unit: RakPeer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4a10
//
// 004c4a10  83ec18               sub esp, 0x18
// 004c4a13  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c4a18  33c4                 xor eax, esp
// 004c4a1a  89442414             mov dword ptr [esp + 0x14], eax
// 004c4a1e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c4a22  8d0424               lea eax, [esp]
// 004c4a25  50                   push eax
// 004c4a26  8d4c2408             lea ecx, [esp + 8]
// 004c4a2a  51                   push ecx
// 004c4a2b  52                   push edx
// 004c4a2c  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 004c4a34  ff1538ef7700         call dword ptr [0x77ef38]
// 004c4a3a  85c0                 test eax, eax
// 004c4a3c  7414                 je 0x4c4a52
// 004c4a3e  6633c0               xor ax, ax
// 004c4a41  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c4a45  33cc                 xor ecx, esp
// 004c4a47  e8d2bf1600           call 0x630a1e
// 004c4a4c  83c418               add esp, 0x18
// 004c4a4f  c20400               ret 4
// 004c4a52  8b442406             mov eax, dword ptr [esp + 6]
// 004c4a56  50                   push eax
// 004c4a57  ff1534ef7700         call dword ptr [0x77ef34]
// 004c4a5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c4a61  33cc                 xor ecx, esp
// 004c4a63  e8b6bf1600           call 0x630a1e
// 004c4a68  83c418               add esp, 0x18
// 004c4a6b  c20400               ret 4

extern "C" {
    int (__stdcall *getsockname)(unsigned int s, void* name, int* namelen);
    unsigned short (__stdcall *ntohs)(unsigned short netshort);
}

struct RakPeer {
    unsigned short GetLocalPort(unsigned int s);
};

unsigned short RakPeer::GetLocalPort(unsigned int s)
{
    char buf[16];
    int len = 16;
    if (getsockname(s, buf, &len) != 0)
        return 0;
    return ntohs(*(unsigned short*)(buf + 2));
}
