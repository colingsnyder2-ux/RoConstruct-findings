// roc 2007-03 005837b0  unit: seg_00580000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005837b0
//
// 005837b0  64a100000000         mov eax, dword ptr fs:[0]
// 005837b6  6aff                 push -1
// 005837b8  68ae6e7500           push 0x756eae
// 005837bd  50                   push eax
// 005837be  b801000000           mov eax, 1
// 005837c3  64892500000000       mov dword ptr fs:[0], esp
// 005837ca  84059cd48b00         test byte ptr [0x8bd49c], al
// 005837d0  7524                 jne 0x5837f6
// 005837d2  09059cd48b00         or dword ptr [0x8bd49c], eax
// 005837d8  33c0                 xor eax, eax
// 005837da  6810a37700           push 0x77a310
// 005837df  a390d48b00           mov dword ptr [0x8bd490], eax
// 005837e4  a394d48b00           mov dword ptr [0x8bd494], eax
// 005837e9  a398d48b00           mov dword ptr [0x8bd498], eax
// 005837ee  e8c0b90900           call 0x61f1b3
// 005837f3  83c404               add esp, 4
// 005837f6  8b0c24               mov ecx, dword ptr [esp]
// 005837f9  b88cd48b00           mov eax, 0x8bd48c
// 005837fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00583805  83c40c               add esp, 0xc
// 00583808  c3                   ret 
// library rbxgs/reflection\reflection_property.cpp (function ?allEnums@EnumDescriptor@Reflection@RBX@@CAAAV?$vector@PBVEnumDescriptor@Reflection@RBX@@V?$allocator@PBVEnumDescriptor@Reflection@RBX@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
