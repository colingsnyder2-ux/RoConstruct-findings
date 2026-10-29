// roc 2009-12 006ffe10  unit: RBX::Teams  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ffe10
//
// 006ffe10  8b442404             mov eax, dword ptr [esp + 4]
// 006ffe14  80b8b000000000       cmp byte ptr [eax + 0xb0], 0
// 006ffe1b  7405                 je 0x6ffe22
// 006ffe1d  33c0                 xor eax, eax
// 006ffe1f  c20400               ret 4
// 006ffe22  8b80ac000000         mov eax, dword ptr [eax + 0xac]
// 006ffe28  89442404             mov dword ptr [esp + 4], eax
// 006ffe2c  e94fffffff           jmp 0x6ffd80
// copied from an identical function in another client (function ?getTeamFromPlayer@ns_ROCX000012@@YGHPAUTeams@1@@Z)

namespace ns_ROCX000012 {
// from server: 100% by tester
struct Teams {
    char pad[0xac];
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
}
