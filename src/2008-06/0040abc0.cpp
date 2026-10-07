// roc 2008-06 0040abc0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040abc0
//
// 0040abc0  56                   push esi
// 0040abc1  8bf1                 mov esi, ecx
// 0040abc3  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0040abc9  85c0                 test eax, eax
// 0040abcb  7409                 je 0x40abd6
// 0040abcd  50                   push eax
// 0040abce  e8a75a2900           call 0x6a067a
// 0040abd3  83c404               add esp, 4
// 0040abd6  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0040abdc  50                   push eax
// 0040abdd  c786b000000000000000 mov dword ptr [esi + 0xb0], 0
// 0040abe7  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0040abf1  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 0040abfb  e87a5a2900           call 0x6a067a
// 0040ac00  83c404               add esp, 4
// 0040ac03  8d4e70               lea ecx, [esi + 0x70]
// 0040ac06  e825ffffff           call 0x40ab30
// 0040ac0b  8d4e3c               lea ecx, [esi + 0x3c]
// 0040ac0e  e81dffffff           call 0x40ab30
// 0040ac13  8d4e08               lea ecx, [esi + 8]
// 0040ac16  e815ffffff           call 0x40ab30
// 0040ac1b  c70630b78000         mov dword ptr [esi], 0x80b730
// 0040ac21  5e                   pop esi
// 0040ac22  c3                   ret 
// library rbxgs/reflection\reflection_object.cpp (function ??1ClassDescriptor@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
