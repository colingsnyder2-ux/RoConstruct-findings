// roc 2007-03 00570ee0  unit: seg_00570000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570ee0
//
// 00570ee0  64a100000000         mov eax, dword ptr fs:[0]
// 00570ee6  6aff                 push -1
// 00570ee8  68fe617500           push 0x7561fe
// 00570eed  50                   push eax
// 00570eee  64892500000000       mov dword ptr fs:[0], esp
// 00570ef5  55                   push ebp
// 00570ef6  56                   push esi
// 00570ef7  8b742418             mov esi, dword ptr [esp + 0x18]
// 00570efb  8be9                 mov ebp, ecx
// 00570efd  8d4900               lea ecx, [ecx]
// 00570f00  3b750c               cmp esi, dword ptr [ebp + 0xc]
// 00570f03  745a                 je 0x570f5f
// 00570f05  f605d8578b0001       test byte ptr [0x8b57d8], 1
// 00570f0c  8bb684000000         mov esi, dword ptr [esi + 0x84]
// 00570f12  752e                 jne 0x570f42
// 00570f14  830dd8578b0001       or dword ptr [0x8b57d8], 1
// 00570f1b  b950578b00           mov ecx, 0x8b5750
// 00570f20  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00570f28  e8f3fdffff           call 0x570d20
// 00570f2d  6830757700           push 0x777530
// 00570f32  e87ce20a00           call 0x61f1b3
// 00570f37  83c404               add esp, 4
// 00570f3a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00570f42  81fe50578b00         cmp esi, 0x8b5750
// 00570f48  75b6                 jne 0x570f00
// 00570f4a  32c0                 xor al, al
// 00570f4c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570f50  64890d00000000       mov dword ptr fs:[0], ecx
// 00570f57  5e                   pop esi
// 00570f58  5d                   pop ebp
// 00570f59  83c40c               add esp, 0xc
// 00570f5c  c20400               ret 4
// 00570f5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570f63  5e                   pop esi
// 00570f64  b001                 mov al, 1
// 00570f66  64890d00000000       mov dword ptr fs:[0], ecx
// 00570f6d  5d                   pop ebp
// 00570f6e  83c40c               add esp, 0xc
// 00570f71  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NABVClassDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
