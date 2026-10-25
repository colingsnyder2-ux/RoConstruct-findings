// from server: 100% by tester
// roc 2008-06 004288f0  unit: MainLogManager  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004288f0
//
// 004288f0  64a100000000         mov eax, dword ptr fs:[0]
// 004288f6  8b542404             mov edx, dword ptr [esp + 4]
// 004288fa  6aff                 push -1
// 004288fc  6842e87d00           push 0x7de842
// 00428901  50                   push eax
// 00428902  64892500000000       mov dword ptr fs:[0], esp
// 00428909  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0042890c  83ec44               sub esp, 0x44
// 0042890f  56                   push esi
// 00428910  becccccc00           mov esi, 0xcccccc
// 00428915  2bf0                 sub esi, eax
// 00428917  3bf2                 cmp esi, edx
// 00428919  5e                   pop esi
// 0042891a  7358                 jae 0x428974
// 0042891c  6800d48000           push 0x80d400
// 00428921  8d4c2404             lea ecx, [esp + 4]
// 00428925  ff1558248000         call dword ptr [0x802458]
// 0042892b  8d4c241c             lea ecx, [esp + 0x1c]
// 0042892f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00428937  ff1598288000         call dword ptr [0x802898]
// 0042893d  8d0424               lea eax, [esp]
// 00428940  50                   push eax
// 00428941  8d4c242c             lea ecx, [esp + 0x2c]
// 00428945  c644245001           mov byte ptr [esp + 0x50], 1
// 0042894a  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 00428952  ff155c248000         call dword ptr [0x80245c]
// 00428958  68c00c8d00           push 0x8d0cc0
// 0042895d  8d4c2420             lea ecx, [esp + 0x20]
// 00428961  51                   push ecx
// 00428962  c644245400           mov byte ptr [esp + 0x54], 0
// 00428967  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 0042896f  e8188c2700           call 0x6a158c
// 00428974  03c2                 add eax, edx
// 00428976  894118               mov dword ptr [ecx + 0x18], eax
// 00428979  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0042897d  64890d00000000       mov dword ptr fs:[0], ecx
// 00428984  83c450               add esp, 0x50
// 00428987  c20400               ret 4

#include <list>

struct E {
    char data[320];
    bool operator==(const E&) const;
    bool operator<(const E&) const;
};

template class std::list<E>;
