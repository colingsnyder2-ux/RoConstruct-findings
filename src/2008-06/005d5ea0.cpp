// from server: 100% by tester
// roc 2008-06 005d5ea0  unit: RBX::Teams  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5ea0
//
// 005d5ea0  8b442404             mov eax, dword ptr [esp + 4]
// 005d5ea4  80b87c01000000       cmp byte ptr [eax + 0x17c], 0
// 005d5eab  7405                 je 0x5d5eb2
// 005d5ead  33c0                 xor eax, eax
// 005d5eaf  c20400               ret 4
// 005d5eb2  8b8078010000         mov eax, dword ptr [eax + 0x178]
// 005d5eb8  89442404             mov dword ptr [esp + 4], eax
// 005d5ebc  e94fffffff           jmp 0x5d5e10

struct Teams {
    char pad[0x178];
    int field120;
    char field124;
};

int __stdcall getTeamFromPlayer(Teams* p);

int __stdcall tail(int);

int __stdcall getTeamFromPlayer(Teams* p)
{
    if (p->field124 != 0)
        return 0;
    return tail(p->field120);
}
