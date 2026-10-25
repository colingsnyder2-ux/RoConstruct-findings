// from server: 100% by tester
// roc 2008-06 00496ff0  unit: RBX::Network::Players  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496ff0
//
// 00496ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00496ff6  8b542404             mov edx, dword ptr [esp + 4]
// 00496ffa  6aff                 push -1
// 00496ffc  6842e87d00           push 0x7de842
// 00497001  50                   push eax
// 00497002  64892500000000       mov dword ptr fs:[0], esp
// 00497009  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0049700c  83ec44               sub esp, 0x44
// 0049700f  56                   push esi
// 00497010  bee3388e03           mov esi, 0x38e38e3
// 00497015  2bf0                 sub esi, eax
// 00497017  3bf2                 cmp esi, edx
// 00497019  5e                   pop esi
// 0049701a  7358                 jae 0x497074
// 0049701c  6800d48000           push 0x80d400
// 00497021  8d4c2404             lea ecx, [esp + 4]
// 00497025  ff1558248000         call dword ptr [0x802458]
// 0049702b  8d4c241c             lea ecx, [esp + 0x1c]
// 0049702f  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00497037  ff1598288000         call dword ptr [0x802898]
// 0049703d  8d0424               lea eax, [esp]
// 00497040  50                   push eax
// 00497041  8d4c242c             lea ecx, [esp + 0x2c]
// 00497045  c644245001           mov byte ptr [esp + 0x50], 1
// 0049704a  c744242010b18000     mov dword ptr [esp + 0x20], 0x80b110
// 00497052  ff155c248000         call dword ptr [0x80245c]
// 00497058  68c00c8d00           push 0x8d0cc0
// 0049705d  8d4c2420             lea ecx, [esp + 0x20]
// 00497061  51                   push ecx
// 00497062  c644245400           mov byte ptr [esp + 0x54], 0
// 00497067  c74424241cb18000     mov dword ptr [esp + 0x24], 0x80b11c
// 0049706f  e818a52000           call 0x6a158c
// 00497074  03c2                 add eax, edx
// 00497076  894118               mov dword ptr [ecx + 0x18], eax
// 00497079  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0049707d  64890d00000000       mov dword ptr fs:[0], ecx
// 00497084  83c450               add esp, 0x50
// 00497087  c20400               ret 4

#include <list>

struct E {
    char data[72];
    bool operator==(const E&) const;
    bool operator<(const E&) const;
};

template class std::list<E>;
