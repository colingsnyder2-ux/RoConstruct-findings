// from server: 100% by tester
// roc 2008-06 00496f50  unit: RBX::Network::Players  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496f50
//
// 00496f50  64a100000000         mov eax, dword ptr fs:[0]
// 00496f56  8b542404             mov edx, dword ptr [esp + 4]
// 00496f5a  6aff                 push -1
// 00496f5c  6842e87d00           push 0x7de842
// 00496f61  50                   push eax
// 00496f62  64892500000000       mov dword ptr fs:[0], esp
// 00496f69  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00496f6c  83ec44               sub esp, 0x44
// 00496f6f  56                   push esi
// 00496f70  be44444404           mov esi, 0x4444444
// 00496f75  2bf0                 sub esi, eax
// 00496f77  3bf2                 cmp esi, edx
// 00496f79  5e                   pop esi
// 00496f7a  7358                 jae 0x496fd4
// 00496f7c  6800d48000           push 0x80d400
// 00496f81  8d4c2404             lea ecx, [esp + 4]
// 00496f85  ff1558248000         call dword ptr [0x802458]
// 00496f8b  8d4c241c             lea ecx, [esp + 0x1c]
// 00496f8f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00496f97  ff1598288000         call dword ptr [0x802898]
// 00496f9d  8d0424               lea eax, [esp]
// 00496fa0  50                   push eax
// 00496fa1  8d4c242c             lea ecx, [esp + 0x2c]
// 00496fa5  c644245001           mov byte ptr [esp + 0x50], 1
// 00496faa  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 00496fb2  ff155c248000         call dword ptr [0x80245c]
// 00496fb8  68c00c8d00           push 0x8d0cc0
// 00496fbd  8d4c2420             lea ecx, [esp + 0x20]
// 00496fc1  51                   push ecx
// 00496fc2  c644245400           mov byte ptr [esp + 0x54], 0
// 00496fc7  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 00496fcf  e8b8a52000           call 0x6a158c
// 00496fd4  03c2                 add eax, edx
// 00496fd6  894118               mov dword ptr [ecx + 0x18], eax
// 00496fd9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00496fdd  64890d00000000       mov dword ptr fs:[0], ecx
// 00496fe4  83c450               add esp, 0x50
// 00496fe7  c20400               ret 4

#include <list>

struct E {
    char data[60];
    bool operator==(const E&) const;
    bool operator<(const E&) const;
};

template class std::list<E>;
