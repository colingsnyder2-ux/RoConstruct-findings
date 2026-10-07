// roc 2009-06 005f9a80  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f9a80
//
// 005f9a80  64a100000000         mov eax, dword ptr fs:[0]
// 005f9a86  6aff                 push -1
// 005f9a88  684ed08400           push 0x84d04e
// 005f9a8d  50                   push eax
// 005f9a8e  64892500000000       mov dword ptr fs:[0], esp
// 005f9a95  55                   push ebp
// 005f9a96  56                   push esi
// 005f9a97  8b742418             mov esi, dword ptr [esp + 0x18]
// 005f9a9b  8be9                 mov ebp, ecx
// 005f9a9d  8d4900               lea ecx, [ecx]
// 005f9aa0  3b750c               cmp esi, dword ptr [ebp + 0xc]
// 005f9aa3  745a                 je 0x5f9aff
// 005f9aa5  f605f898a30001       test byte ptr [0xa398f8], 1
// 005f9aac  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005f9ab2  752e                 jne 0x5f9ae2
// 005f9ab4  830df898a30001       or dword ptr [0xa398f8], 1
// 005f9abb  b93898a300           mov ecx, 0xa39838
// 005f9ac0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f9ac8  e853fcffff           call 0x5f9720
// 005f9acd  68a03b8900           push 0x893ba0
// 005f9ad2  e824001200           call 0x719afb
// 005f9ad7  83c404               add esp, 4
// 005f9ada  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005f9ae2  81fe3898a300         cmp esi, 0xa39838
// 005f9ae8  75b6                 jne 0x5f9aa0
// 005f9aea  32c0                 xor al, al
// 005f9aec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f9af0  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9af7  5e                   pop esi
// 005f9af8  5d                   pop ebp
// 005f9af9  83c40c               add esp, 0xc
// 005f9afc  c20400               ret 4
// 005f9aff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f9b03  5e                   pop esi
// 005f9b04  b001                 mov al, 1
// 005f9b06  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9b0d  5d                   pop ebp
// 005f9b0e  83c40c               add esp, 0xc
// 005f9b11  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ?isMemberOf@MemberDescriptor@Reflection@RBX@@QBE_NABVClassDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
