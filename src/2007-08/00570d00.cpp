// roc 2007-08 00570d00  unit: RBX::Reflection::ClassDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570d00
//
// 00570d00  64a100000000         mov eax, dword ptr fs:[0]
// 00570d06  6aff                 push -1
// 00570d08  688e4d7500           push 0x754d8e
// 00570d0d  50                   push eax
// 00570d0e  64892500000000       mov dword ptr fs:[0], esp
// 00570d15  55                   push ebp
// 00570d16  56                   push esi
// 00570d17  8b742418             mov esi, dword ptr [esp + 0x18]
// 00570d1b  8be9                 mov ebp, ecx
// 00570d1d  8d4900               lea ecx, [ecx]
// 00570d20  3b750c               cmp esi, dword ptr [ebp + 0xc]
// 00570d23  745a                 je 0x570d7f
// 00570d25  f605a8b28b0001       test byte ptr [0x8bb2a8], 1
// 00570d2c  8bb684000000         mov esi, dword ptr [esi + 0x84]
// 00570d32  752e                 jne 0x570d62
// 00570d34  830da8b28b0001       or dword ptr [0x8bb2a8], 1
// 00570d3b  b920b28b00           mov ecx, 0x8bb220
// 00570d40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00570d48  e8f3fdffff           call 0x570b40
// 00570d4d  68a0747700           push 0x7774a0
// 00570d52  e8ccff0b00           call 0x630d23
// 00570d57  83c404               add esp, 4
// 00570d5a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00570d62  81fe20b28b00         cmp esi, 0x8bb220
// 00570d68  75b6                 jne 0x570d20
// 00570d6a  32c0                 xor al, al
// 00570d6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570d70  64890d00000000       mov dword ptr fs:[0], ecx
// 00570d77  5e                   pop esi
// 00570d78  5d                   pop ebp
// 00570d79  83c40c               add esp, 0xc
// 00570d7c  c20400               ret 4
// 00570d7f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00570d83  5e                   pop esi
// 00570d84  b001                 mov al, 1
// 00570d86  64890d00000000       mov dword ptr fs:[0], ecx
// 00570d8d  5d                   pop ebp
// 00570d8e  83c40c               add esp, 0xc
// 00570d91  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NABVClassDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
