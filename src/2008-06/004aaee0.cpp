// from server: 100% by king_originala
// roc 2008-06 004aaee0  unit: ProfiledRakPeer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aaee0
//
// 004aaee0  6aff                 push -1
// 004aaee2  6808817c00           push 0x7c8108
// 004aaee7  64a100000000         mov eax, dword ptr fs:[0]
// 004aaeed  50                   push eax
// 004aaeee  64892500000000       mov dword ptr fs:[0], esp
// 004aaef5  83ec18               sub esp, 0x18
// 004aaef8  53                   push ebx
// 004aaef9  56                   push esi
// 004aaefa  8bf1                 mov esi, ecx
// 004aaefc  8b8608090000         mov eax, dword ptr [esi + 0x908]
// 004aaf02  6a00                 push 0
// 004aaf04  50                   push eax
// 004aaf05  8d4c2410             lea ecx, [esp + 0x10]
// 004aaf09  e872901100           call 0x5c3f80
// 004aaf0e  8bce                 mov ecx, esi
// 004aaf10  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004aaf18  e873a30100           call 0x4c5290
// 004aaf1d  8d4c2408             lea ecx, [esp + 8]
// 004aaf21  8ad8                 mov bl, al
// 004aaf23  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004aaf2b  e8a0931100           call 0x5c42d0
// 004aaf30  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004aaf34  5e                   pop esi
// 004aaf35  8ac3                 mov al, bl
// 004aaf37  5b                   pop ebx
// 004aaf38  64890d00000000       mov dword ptr fs:[0], ecx
// 004aaf3f  83c424               add esp, 0x24
// 004aaf42  c3                   ret 

struct Guard
{
    unsigned char storage[24];
    Guard(void *, int);
    ~Guard();
};

struct ProfiledRakPeer
{
    unsigned char padding[0x908];
    void *mutex;

    bool query();
    bool queryUnlocked();
};

bool ProfiledRakPeer::query()
{
    Guard guard(mutex, 0);
    return queryUnlocked();
}
