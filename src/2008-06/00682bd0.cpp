// from server: 100% by tester
// roc 2008-06 00682bd0  unit: Ogre::RbxSceneNode  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00682bd0
//
// 00682bd0  64a100000000         mov eax, dword ptr fs:[0]
// 00682bd6  8b542404             mov edx, dword ptr [esp + 4]
// 00682bda  6aff                 push -1
// 00682bdc  6842e87d00           push 0x7de842
// 00682be1  50                   push eax
// 00682be2  64892500000000       mov dword ptr fs:[0], esp
// 00682be9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00682bec  83ec44               sub esp, 0x44
// 00682bef  56                   push esi
// 00682bf0  be55555505           mov esi, 0x5555555
// 00682bf5  2bf0                 sub esi, eax
// 00682bf7  3bf2                 cmp esi, edx
// 00682bf9  5e                   pop esi
// 00682bfa  7358                 jae 0x682c54
// 00682bfc  6800d48000           push 0x80d400
// 00682c01  8d4c2404             lea ecx, [esp + 4]
// 00682c05  ff1558248000         call dword ptr [0x802458]
// 00682c0b  8d4c241c             lea ecx, [esp + 0x1c]
// 00682c0f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00682c17  ff1598288000         call dword ptr [0x802898]
// 00682c1d  8d0424               lea eax, [esp]
// 00682c20  50                   push eax
// 00682c21  8d4c242c             lea ecx, [esp + 0x2c]
// 00682c25  c644245001           mov byte ptr [esp + 0x50], 1
// 00682c2a  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 00682c32  ff155c248000         call dword ptr [0x80245c]
// 00682c38  68c00c8d00           push 0x8d0cc0
// 00682c3d  8d4c2420             lea ecx, [esp + 0x20]
// 00682c41  51                   push ecx
// 00682c42  c644245400           mov byte ptr [esp + 0x54], 0
// 00682c47  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 00682c4f  e838e90100           call 0x6a158c
// 00682c54  03c2                 add eax, edx
// 00682c56  894118               mov dword ptr [ecx + 0x18], eax
// 00682c59  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00682c5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00682c64  83c450               add esp, 0x50
// 00682c67  c20400               ret 4

#include <list>

struct E {
    char data[48];
    bool operator==(const E&) const;
    bool operator<(const E&) const;
};

template class std::list<E>;
